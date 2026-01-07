import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from hapthexa_msgs.msg import LegArgs, Attitude, ForceSensor
from std_srvs.srv import SetBool
import dearpygui.dearpygui as dpg
import numpy as np
import threading
import math

class VisualizerNode(Node):
    def __init__(self):
        super().__init__('visualizer_node')
        
        # State Data
        self.attitude = {'roll': 0.0, 'pitch': 0.0, 'yaw': 0.0}
        self.joy = {'axes': [0.0]*8, 'buttons': [0]*12}
        self.legs = {
            'front_left': [0.0]*3, 'middle_left': [0.0]*3, 'rear_left': [0.0]*3,
            'rear_right': [0.0]*3, 'middle_right': [0.0]*3, 'front_right': [0.0]*3
        }
        self.targets = {
            'front_left': [0.0]*3, 'middle_left': [0.0]*3, 'rear_left': [0.0]*3,
            'rear_right': [0.0]*3, 'middle_right': [0.0]*3, 'front_right': [0.0]*3
        }
        self.forces = [0.0]*6 # FL, ML, RL, RR, MR, FR
        
        # Subscriptions
        self.create_subscription(Attitude, 'hapthexa/attitude', self.attitude_cb, 10)
        self.create_subscription(Joy, 'joy', self.joy_cb, 10)
        
        # Service Client
        self.torque_client = self.create_client(SetBool, 'hapthexa/torque_enable')

        # ... (rest of subscriptions remains same)
        self.leg_names = ['front_left', 'middle_left', 'rear_left', 'rear_right', 'middle_right', 'front_right']
        for name in self.leg_names:
            self.create_subscription(LegArgs, f'hapthexa/leg/{name}/present_leg_args', 
                                   lambda msg, n=name: self.leg_cb(msg, n), 10)
            self.create_subscription(LegArgs, f'hapthexa/leg/{name}/leg_args', 
                                   lambda msg, n=name: self.target_cb(msg, n), 10)
            self.create_subscription(ForceSensor, f'hapthexa/leg/{name}/force_sensor_raw', 
                                   lambda msg, n=name: self.force_cb(msg, n), 10)

        # Plot Data Buffers
        self.plot_size = 100
        self.roll_history = [0.0] * self.plot_size
        self.pitch_history = [0.0] * self.plot_size
        self.yaw_history = [0.0] * self.plot_size
        self.time_history = list(range(self.plot_size))

    def set_torque(self, state: bool):
        if not self.torque_client.service_is_ready():
            self.get_logger().warn('Torque service not available')
            return
        req = SetBool.Request()
        req.data = state
        self.torque_client.call_async(req)

    def attitude_cb(self, msg):
        self.attitude['roll'] = msg.roll
        self.attitude['pitch'] = msg.pitch
        self.attitude['yaw'] = msg.yaw
        
        self.roll_history.pop(0); self.roll_history.append(msg.roll)
        self.pitch_history.pop(0); self.pitch_history.append(msg.pitch)
        self.yaw_history.pop(0); self.yaw_history.append(msg.yaw)

    def joy_cb(self, msg):
        # rclpy.spin() thread updates this
        self.joy['axes'] = msg.axes
        self.joy['buttons'] = msg.buttons

    def leg_cb(self, msg, name):
        self.legs[name] = [msg.coxa_arg, msg.femur_arg, msg.tibia_arg]

    def target_cb(self, msg, name):
        self.targets[name] = [msg.coxa_arg, msg.femur_arg, msg.tibia_arg]

    def force_cb(self, msg, name):
        idx = self.leg_names.index(name)
        self.forces[idx] = msg.piezo

def create_gui(node):
    dpg.create_context()
    dpg.create_viewport(title='Hapthexa Dashboard', width=1200, height=850)
    dpg.setup_dearpygui()

    with dpg.window(label="Hapthexa Status Monitor", width=1180, height=830, no_close=True):
        
        with dpg.group(horizontal=True):
            # --- Left Column: IMU & Joy ---
            with dpg.child_window(width=400, height=730):
                dpg.add_text("System Status", color=(0, 255, 0))
                dpg.add_separator()
                
                # IMU Section
                with dpg.collapsing_header(label="IMU / Orientation", default_open=True):
                    dpg.add_text("Euler Angles (Rad)")
                    with dpg.group(horizontal=True):
                        dpg.add_text("Roll: "); dpg.add_text("0.0", tag="roll_text")
                    with dpg.group(horizontal=True):
                        dpg.add_text("Pitch:"); dpg.add_text("0.0", tag="pitch_text")
                    with dpg.group(horizontal=True):
                        dpg.add_text("Yaw:  "); dpg.add_text("0.0", tag="yaw_text")
                    
                    with dpg.plot(label="Attitude History", height=200, width=-1):
                        dpg.add_plot_legend()
                        dpg.add_plot_axis(dpg.mvXAxis, label="Time")
                        with dpg.plot_axis(dpg.mvYAxis, label="Rad"):
                            dpg.add_line_series(node.time_history, node.roll_history, label="Roll", tag="roll_plot")
                            dpg.add_line_series(node.time_history, node.pitch_history, label="Pitch", tag="pitch_plot")

                # Joy Section
                with dpg.collapsing_header(label="Joystick / Commands", default_open=True):
                    dpg.add_text("Velocity Commands")
                    dpg.add_slider_float(label="Linear X", min_value=-1.0, max_value=1.0, tag="joy_x", no_input=True)
                    dpg.add_slider_float(label="Linear Y", min_value=-1.0, max_value=1.0, tag="joy_y", no_input=True)
                    dpg.add_slider_float(label="Angular Z", min_value=-1.0, max_value=1.0, tag="joy_z", no_input=True)
                    
                    dpg.add_text("Controller Buttons")
                    with dpg.group(horizontal=True):
                        for i in range(12):
                            dpg.add_text(f"B{i}", tag=f"btn_{i}", color=(50, 50, 50))
                            if i == 5: dpg.add_text(" | ")

            # --- Middle & Right: Legs & Forces ---
            with dpg.child_window(width=760, height=730):
                dpg.add_text("Robot Configuration", color=(0, 255, 255))
                dpg.add_separator()

                # Feet/Forces (Visual Matrix)
                with dpg.group(horizontal=True):
                    dpg.add_text("Foot Contact Status (Piezo)")
                with dpg.group(horizontal=True):
                    for i, name in enumerate(node.leg_names):
                        label = name.replace("_", " ").title()
                        with dpg.group():
                            dpg.add_text(label)
                            dpg.add_progress_bar(label=f"f_{i}", tag=f"force_{i}", width=110)
                            dpg.add_text("0.000", tag=f"force_val_{i}")

                dpg.add_spacer(height=20)
                
                # Joint Positions (FL to FR)
                with dpg.collapsing_header(label="Joint Positioning (Actual vs Target)", default_open=True):
                    with dpg.group(horizontal=True):
                        for name in node.leg_names:
                            with dpg.child_window(width=120, height=450, border=True):
                                dpg.add_text(name.split('_')[0].upper() + "\n" + name.split('_')[1].upper())
                                dpg.add_separator()
                                # Coxa
                                dpg.add_text("Coxa")
                                dpg.add_slider_float(vertical=True, min_value=-0.5, max_value=0.5, height=80, tag=f"pos_{name}_0", no_input=True)
                                # Femur
                                dpg.add_text("Femur")
                                dpg.add_slider_float(vertical=True, min_value=-1.5, max_value=1.5, height=80, tag=f"pos_{name}_1", no_input=True)
                                # Tibia
                                dpg.add_text("Tibia")
                                dpg.add_slider_float(vertical=True, min_value=-1.5, max_value=1.5, height=80, tag=f"pos_{name}_2", no_input=True)

        # --- Bottom Panel: Power Control ---
        dpg.add_separator()
        with dpg.group(horizontal=True):
            dpg.add_text("System Power Control:")
            dpg.add_button(label="Power ON (Torque Enable)", callback=lambda: node.set_torque(True), width=250, height=40)
            dpg.add_button(label="Power OFF (Torque Disable)", callback=lambda: node.set_torque(False), width=250, height=40)

    dpg.show_viewport()
    
    while dpg.is_dearpygui_running():
        # Update IMU
        dpg.set_value("roll_text", f"{node.attitude['roll']:.3f}")
        dpg.set_value("pitch_text", f"{node.attitude['pitch']:.3f}")
        dpg.set_value("yaw_text", f"{node.attitude['yaw']:.3f}")
        dpg.set_value("roll_plot", [node.time_history, node.roll_history])
        dpg.set_value("pitch_plot", [node.time_history, node.pitch_history])

        # Update Joy
        dpg.set_value("joy_x", node.joy['axes'][1] if len(node.joy['axes']) > 1 else 0.0)
        dpg.set_value("joy_y", node.joy['axes'][0] if len(node.joy['axes']) > 0 else 0.0)
        dpg.set_value("joy_z", node.joy['axes'][3] if len(node.joy['axes']) > 3 else 0.0)
        
        # Update Buttons
        for i in range(12):
            if len(node.joy['buttons']) > i:
                color = (0, 255, 0) if node.joy['buttons'][i] else (50, 50, 50)
                dpg.configure_item(f"btn_{i}", color=color)

        # Update Forces
        for i in range(6):
            dpg.set_value(f"force_{i}", node.forces[i])
            dpg.set_value(f"force_val_{i}", f"{node.forces[i]:.3f}")

        # Update Legs
        for name in node.leg_names:
            for j in range(3):
                dpg.set_value(f"pos_{name}_{j}", node.legs[name][j])

        dpg.render_dearpygui_frame()

    dpg.destroy_context()

def main(args=None):
    rclpy.init(args=args)
    node = VisualizerNode()
    
    # Run ROS 2 spin in a separate thread
    thread = threading.Thread(target=rclpy.spin, args=(node,), daemon=True)
    thread.start()
    
    try:
        create_gui(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
