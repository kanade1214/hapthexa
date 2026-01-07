#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from hapthexa_msgs.msg import LegArgs, Attitude, ForceSensor
import torch
import numpy as np
import os
import math

class PolicyNode(Node):
    def __init__(self):
        super().__init__('policy_node')
        
        # Parameters
        self.declare_parameter('model_path', '')
        self.declare_parameter('frequency', 50.0) # 0.02s dt
        
        model_path = self.get_parameter('model_path').get_parameter_value().string_value
        if not model_path:
            self.get_logger().error('model_path is not set!')
            return

        # Load model
        try:
            self.policy = torch.jit.load(model_path)
            self.policy.eval()
            self.get_logger().info(f'Loaded model from {model_path}')
        except Exception as e:
            self.get_logger().error(f'Failed to load model: {e}')
            return

        # Subscriptions
        self.joy_sub = self.create_subscription(Joy, 'joy', self.joy_callback, 10)
        self.attitude_sub = self.create_subscription(Attitude, 'hapthexa/attitude', self.attitude_callback, 10)
        
        self.leg_names = ['front_left', 'middle_left', 'rear_left', 'rear_right', 'middle_right', 'front_right']
        self.joint_names = ['coxa', 'femur', 'tibia']
        
        self.leg_subs = []
        self.force_subs = []
        for name in self.leg_names:
            # Joint pos/vel sub
            sub_leg = self.create_subscription(LegArgs, f'hapthexa/leg/{name}/present_leg_args', 
                                         lambda msg, n=name: self.leg_callback(msg, n), 10)
            self.leg_subs.append(sub_leg)
            
            # Force sensor sub
            sub_force = self.create_subscription(ForceSensor, f'hapthexa/leg/{name}/force_sensor_raw',
                                           lambda msg, n=name: self.force_callback(msg, n), 10)
            self.force_subs.append(sub_force)

        # Publishers
        self.leg_pubs = {}
        for name in self.leg_names:
            self.leg_pubs[name] = self.create_publisher(LegArgs, f'hapthexa/leg/{name}/leg_args', 10)

        # State variables
        self.joy_vel = np.zeros(3) # x, y, yaw
        self.attitude = np.zeros(3) # r, p, y
        self.curr_joint_pos = np.zeros(18)
        self.last_joint_pos = np.zeros(18)
        self.curr_joint_vel = np.zeros(18)
        self.curr_contact_forces = np.zeros(6) # FL, ML, RL, RR, MR, FR (internal index)
        self.last_actions = np.zeros(18)
        
        self.dt = 1.0 / self.get_parameter('frequency').get_parameter_value().double_value
        self.timer = self.create_timer(self.dt, self.control_loop)

        # Normalization and Scaling (From env.yaml/hapthexa_env_cfg.py)
        self.obs_scales = {
            "ang_vel": 0.25,
            "projected_gravity": 1.0,
            "velocity_commands": np.array([2.0, 2.0, 0.25]),
            "joint_pos": 1.0,
            "joint_vel": 0.05,
            "actions": 1.0,
            "foot_contact_forces": 0.01
        }
        self.action_scale = 0.25

        # Joint mapping: Isaac alphabetical vs Real Leg names
        self.policy_joint_names = [
            'rev1', 'rev10', 'rev11', 'rev12', 'rev13', 'rev14', 'rev15', 'rev16', 'rev17', 'rev18', 
            'rev2', 'rev3', 'rev4', 'rev5', 'rev6', 'rev7', 'rev8', 'rev9'
        ]
        
        self.joint_to_leg_map = {
            'rev1': (0, 0),  'rev11': (5, 1), 'rev15': (5, 2), # FL Coxa, FR Femur, FR Tibia
            'rev5': (1, 0),  'rev9': (1, 1),  'rev13': (1, 2),  # ML
            'rev6': (2, 0),  'rev10': (2, 1), 'rev14': (2, 2), # RL
            'rev4': (3, 0),  'rev8': (3, 1),  'rev18': (3, 2), # RR 
            'rev2': (4, 0),  'rev12': (4, 1), 'rev16': (4, 2), # MR
            'rev3': (5, 0),  'rev7': (0, 1),  'rev17': (0, 2), # FR Coxa, FL Femur, FL Tibia
        }
        # Re-list correctly based on URDF analysis:
        # FL leg (index 0): rev1(C), rev7(F), rev17(T)
        # ML leg (index 1): rev5(C), rev9(F), rev13(T)
        # RL leg (index 2): rev6(C), rev10(F), rev14(T)
        # RR leg (index 3): rev4(C), rev8(F), rev18(T)
        # MR leg (index 4): rev2(C), rev12(F), rev16(T)
        # FR leg (index 5): rev3(C), rev11(F), rev15(T)
        
        self.joint_to_leg_map = {
            'rev1': (0, 0), 'rev7': (0, 1), 'rev17': (0, 2), # FL
            'rev5': (1, 0), 'rev9': (1, 1), 'rev13': (1, 2), # ML
            'rev6': (2, 0), 'rev10': (2, 1), 'rev14': (2, 2), # RL
            'rev4': (3, 0), 'rev8': (3, 1), 'rev18': (3, 2), # RR
            'rev2': (4, 0), 'rev12': (4, 1), 'rev16': (4, 2), # MR
            'rev3': (5, 0), 'rev11': (5, 1), 'rev15': (5, 2), # FR
        }

        # Build index map for joint_pos/vel
        self.to_policy_idx = [0] * 18
        for i, name in enumerate(self.policy_joint_names):
            leg_idx, joint_sub_idx = self.joint_to_leg_map[name]
            self.to_policy_idx[i] = leg_idx * 3 + joint_sub_idx

        # Contact Forces Map (Isaac Alphabetical):
        # 1. FL (_Tibia__1__1)
        # 2. MR (_Tibia__2__1)
        # 3. RL (_Tibia__3__1)
        # 4. FR (_Tibia__4__1)
        # 5. ML (_Tibia__5__1)
        # 6. RR (_Tibia_1)
        self.force_to_policy_idx = [0, 4, 2, 5, 1, 3] # Indices in leg_names: [FL=0, ML=1, RL=2, RR=3, MR=4, FR=5]
        # Wait: 
        # FL is leg_names[0]
        # MR is leg_names[4]
        # RL is leg_names[2]
        # FR is leg_names[5]
        # ML is leg_names[1]
        # RR is leg_names[3]
        # So policy wants: [leg_names[0], leg_names[4], leg_names[2], leg_names[5], leg_names[1], leg_names[3]]
        self.force_order_indices = [0, 4, 2, 5, 1, 3]

    def joy_callback(self, msg):
        self.joy_vel[0] = msg.axes[1] # Forward
        self.joy_vel[1] = msg.axes[0] # Left
        self.joy_vel[2] = msg.axes[3] # Yaw

    def attitude_callback(self, msg):
        self.attitude[0] = msg.roll
        self.attitude[1] = msg.pitch
        self.attitude[2] = msg.yaw

    def leg_callback(self, msg, name):
        idx = self.leg_names.index(name)
        self.curr_joint_pos[idx*3] = msg.coxa_arg
        self.curr_joint_pos[idx*3+1] = msg.femur_arg
        self.curr_joint_pos[idx*3+2] = msg.tibia_arg

    def force_callback(self, msg, name):
        idx = self.leg_names.index(name)
        # We use piezo as a proxy for force magnitude if calibrated,
        # otherwise we might need a better scaling.
        # Isaac Lab foot_contact_forces_mag is in Newtons.
        # Here we use piezo (0.0-1.0) and scale? 
        # Actually piezo is just one value.
        self.curr_contact_forces[idx] = msg.piezo

    def control_loop(self):
        # 1. Prepare Observations
        # Projected Gravity
        roll, pitch = self.attitude[0], self.attitude[1]
        cp, sp = math.cos(pitch), math.sin(pitch)
        cr, sr = math.cos(roll), math.sin(roll)
        projected_gravity = np.array([sp, -cp*sr, -cp*cr])

        # Joint velocities (simple diff)
        self.curr_joint_vel = (self.curr_joint_pos - self.last_joint_pos) / self.dt
        self.last_joint_pos = self.curr_joint_pos.copy()

        # Observation order:
        # base_ang_vel(3), proj_grav(3), commands(3), joint_pos(18), joint_vel(18), actions(18), forces(6)
        
        obs_parts = []
        # ang_vel (3) - Placeholder as 0
        obs_parts.append(np.zeros(3) * self.obs_scales["ang_vel"])
        
        obs_parts.append(projected_gravity * self.obs_scales["projected_gravity"])
        obs_parts.append(self.joy_vel * self.obs_scales["velocity_commands"])
        
        # Joint parts mapped to policy order
        p_joint_pos = self.curr_joint_pos[self.to_policy_idx]
        p_joint_vel = self.curr_joint_vel[self.to_policy_idx]
        p_actions = self.last_actions[self.to_policy_idx]
        
        obs_parts.append(p_joint_pos * self.obs_scales["joint_pos"])
        obs_parts.append(p_joint_vel * self.obs_scales["joint_vel"])
        obs_parts.append(p_actions * self.obs_scales["actions"])
        
        # Contact forces mapped to policy order
        p_forces = self.curr_contact_forces[self.force_order_indices]
        obs_parts.append(p_forces * self.obs_scales["foot_contact_forces"])
        
        obs = np.concatenate(obs_parts).astype(np.float32)
        
        # Clipping [-10.0, 10.0]
        obs = np.clip(obs, -10.0, 10.0)
        
        obs_tensor = torch.from_numpy(obs).unsqueeze(0) # [1, 69]

        # 2. Inference
        with torch.no_grad():
            action_tensor = self.policy(obs_tensor)
        
        actions = action_tensor.squeeze().cpu().numpy()
        self.last_actions = actions.copy() # Store actions in policy order

        # 3. Publish Actions
        # Isaac Lab: Target = Default + action * scale
        
        # Map back from Policy-order to Leg-order
        leg_actions = np.zeros(18)
        for i, name in enumerate(self.policy_joint_names):
            leg_idx, joint_sub_idx = self.joint_to_leg_map[name]
            leg_actions[leg_idx*3 + joint_sub_idx] = actions[i]
        
        scaled_actions = leg_actions * self.action_scale
        
        for i, name in enumerate(self.leg_names):
            msg = LegArgs()
            msg.coxa_arg = float(scaled_actions[i*3])
            msg.femur_arg = float(scaled_actions[i*3+1])
            msg.tibia_arg = float(scaled_actions[i*3+2])
            self.leg_pubs[name].publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = PolicyNode()
    if hasattr(node, 'policy'):
        rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
