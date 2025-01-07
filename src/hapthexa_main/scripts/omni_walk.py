#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from sensor_msgs.msg import Joy

from hapthexa_msgs.action import MoveLeg

from functools import partial

import math
import numpy as np
from scipy.spatial.transform import Rotation

import signal


class OmniWalk(Node):

    def __init__(self):
        super().__init__('omni_walk')
        self._leg_names = ['front_left', 'middle_left', 'rear_left', 'rear_right', 'middle_right', 'front_right']
        self._leg_args  = [math.pi/6.0, math.pi/2.0, math.pi*5.0/6.0, -math.pi*5.0/6.0, -math.pi/2.0, -math.pi/6.0]
        self._w = 9.0
        self._depth = 12.5
        self._shrink = 8
        self._past_leg  = np.array([[0, 0,0], [0, 0,0], [0, 0,0], [0, 0,0],[0, 0,0], [0, 0,0]],dtype=float)
        self._phase = 0
        self._move_succeed_leg_count = 0
        self._h = 2.0
        self._theta = 0
        self._r = 0
        self.theta = 0
        self.r = 0
        self._exit = False
        self._back = 0
        self._up_retry = False
        self._down_retry = False
        self._left_retry = False
        self._right_retry = False
        self._end = False
        signal.signal(signal.SIGINT, self.sigint_callback)
        self.subscription = self.create_subscription(Joy,'joy', self.listener_callback, 3)
        self._action_clients = []
        for leg_name in self._leg_names:
            self._action_clients.append(ActionClient(self, MoveLeg, 'hapthexa/leg/'+leg_name+'/move_leg'))

        self._send_goal_future = [0]*6
        self._get_result_future = [0]*6
        self._goal_handle = [0]*6
        timer_period = 0.01
        self.timer = self.create_timer(timer_period, self.timer_callback)
        for i in range(6):
            self.generate_trajectory(i, 6 if i%2 else 3)


    def listener_callback(self, Joy):
        self._theta = math.atan2(Joy.axes[0],Joy.axes[1])
        self._r = math.sqrt((Joy.axes[0]*Joy.axes[0]) + (Joy.axes[1]*Joy.axes[1])) / math.sqrt(2)
        
        if Joy.buttons[10] == 1 and self._back == 0:
            future = self._goal_handle[0].cancel_goal_async()
            future = self._goal_handle[1].cancel_goal_async()
            future = self._goal_handle[2].cancel_goal_async()
            future = self._goal_handle[3].cancel_goal_async()
            future = self._goal_handle[4].cancel_goal_async()
            future = self._goal_handle[5].cancel_goal_async()
            self._end = True
        self._back = Joy.buttons[10]
        if Joy.axes[5] > 0.9:
            self._up_retry = True
            self._down_retry = False
        elif Joy.axes[5] < -0.9:
            self._up_retry = False
            self._down_retry = True
        else:
            self._up_retry = False
            self._down_retry = False
        if Joy.axes[4] > 0.9:
            self._left_retry = True
            self._right_retry = False
        elif Joy.axes[4] < -0.9:
            self._left_retry = False
            self._right_retry = True
        else:
            self._left_retry = False
            self._right_retry = False

    def generate_trajectory(self, num, phase):
        r = Rotation.from_rotvec([0, 0, self._leg_args[num]])
        t = np.dot(np.array(r.as_matrix()),np.array([[22-self._shrink, 0, 0]]).T) + np.array([[0, 0, -self._depth]]).T
        if   phase == 1:
            t1 = np.array([[self._past_leg[num][0], self._past_leg[num][1], self._h]]).T
        elif phase == 2:
            t1 = np.array([[ self._w/2.0*math.cos(self.theta)*self.r, self._w/2.0*math.sin(self.theta)*self.r, self._h]]).T
        elif phase == 3:
            t1 = np.array([[ self._w/2.0*math.cos(self.theta)*self.r, self._w/2.0*math.sin(self.theta)*self.r,       0]]).T
        elif phase == 4:
            t1 = np.array([[self._past_leg[num][0], self._past_leg[num][1],       0]]).T
        elif phase == 5:
            t1 = np.array([[-self._w/2.0*math.cos(self.theta)*self.r, -self._w/2.0*math.sin(self.theta)*self.r,       0]]).T
        elif phase == 6:
            t1 = np.array([[-self._w/2.0*math.cos(self.theta)*self.r, -self._w/2.0*math.sin(self.theta)*self.r,       0]]).T
        print(t1[0][0])
        self._past_leg[num][0] = t1[0][0]
        self._past_leg[num][1] = t1[1][0]
        self._past_leg[num][2] = t1[2][0]
        t+=t1
        self.move_leg(num, t[0], t[1], t[2])
    def move_leg(self, num, x, y, z):
        msg = MoveLeg.Goal()
        msg.x = float(x)
        msg.y = float(y)
        msg.z = float(z)
        self._action_clients[num].wait_for_server()
        self._send_goal_future[num] = self._action_clients[num].send_goal_async(msg, partial(self.feedback_callback, num))
        self._send_goal_future[num].add_done_callback(lambda future, num=num: self.goal_response_callback(future, num))

    def feedback_callback(self, num, feedback):
        self.get_logger().info("leg num = %d" % num)
        self.get_logger().info("value = %f" % feedback.feedback.piezo)

    def goal_response_callback(self, future, num):
        self._goal_handle[num] = future.result()
        if not self._goal_handle[num].accepted:
            return
        self._get_result_future[num] = self._goal_handle[num].get_result_async()
        self._get_result_future[num].add_done_callback((lambda future: self.get_result_callback(future, num)))

    def sigint_callback(self, sig, frame):
        self._exit = True

    def get_result_callback(self, future, num):
        result = future.result().result
        self.get_logger().info('result recieved {0}'.format(num))

        self._move_succeed_leg_count += 1
        if self._move_succeed_leg_count == 6:
            if self._exit:
                self.get_logger().info('SIGINT')
                rclpy.shutdown()
                exit()
            self._move_succeed_leg_count = 0
            if(self._phase == 6):
                self._phase = 1
                self._end = True
                return
            else:
                self._phase += 1
            if(self._phase == 4):
                self.r = self._r
                self.theta = self._theta
            print(type(self._past_leg[1][0]))
            print(self._past_leg[1][1])
            print(self._past_leg[1][2])
            for i in range(6):
                self.generate_trajectory(i, self._phase if i%2 else self._phase + 3 if self._phase in {1, 2, 3} else self._phase - 3)

    def timer_callback(self): 
        if self._exit:
            self.get_logger().info('SIGINT')
            rclpy.shutdown()
            exit()
        if(self._end == True):
            if(self._up_retry == True):
                self._depth += 1
                self._end = False
                self.r = self._r
                self.theta = self._theta
                for i in range(6):
                    self.generate_trajectory(i, self._phase if i%2 else self._phase + 3 if self._phase in {1, 2, 3} else self._phase - 3)
                return 
            if(self._down_retry == True):
                self._depth -= 1
                self._end = False
                self.r = self._r
                self.theta = self._theta
                for i in range(6):
                    self.generate_trajectory(i, self._phase if i%2 else self._phase + 3 if self._phase in {1, 2, 3} else self._phase - 3)
                return 
            if(self._left_retry == True):
                self._shrink += 1
                self._end = False
                self.r = self._r
                self.theta = self._theta
                for i in range(6):
                    self.generate_trajectory(i, self._phase if i%2 else self._phase + 3 if self._phase in {1, 2, 3} else self._phase - 3)
                return 
            if(self._right_retry == True):
                self._shrink -= 1
                self._end = False
                self.r = self._r
                self.theta = self._theta
                for i in range(6):
                    self.generate_trajectory(i, self._phase if i%2 else self._phase + 3 if self._phase in {1, 2, 3} else self._phase - 3)
                return 
            if(self._r > 0.1):
                self._end = False
                self.r = self._r
                self.theta = self._theta
                for i in range(6):
                    self.generate_trajectory(i, self._phase if i%2 else self._phase + 3 if self._phase in {1, 2, 3} else self._phase - 3)
                return


def main(args=None):
    rclpy.init(args=args)
    omniwalk = OmniWalk()
    rclpy.spin(omniwalk)
    omniwalk.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
