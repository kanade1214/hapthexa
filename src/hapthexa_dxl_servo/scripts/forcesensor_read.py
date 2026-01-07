#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy

from hapthexa_msgs.msg import ForceSensor
from hapthexa_msgs.msg import Attitude

from math import pi

import serial, serial.tools.list_ports
import time

class ForcesensorRead(Node):

    def __init__(self):
        super().__init__('forcesensor_read')
        
        # QoS設定: ジッターを抑えるためにBest Effortに設定
        qos_profile = QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)

        self.front_left_pub_ = self.create_publisher(ForceSensor, 'hapthexa/leg/front_left/force_sensor_raw', qos_profile)
        self.middle_left_pub_ = self.create_publisher(ForceSensor, 'hapthexa/leg/middle_left/force_sensor_raw', qos_profile)
        self.rear_left_pub_ = self.create_publisher(ForceSensor, 'hapthexa/leg/rear_left/force_sensor_raw', qos_profile)
        self.front_right_pub_ = self.create_publisher(ForceSensor, 'hapthexa/leg/front_right/force_sensor_raw', qos_profile)
        self.middle_right_pub_ = self.create_publisher(ForceSensor, 'hapthexa/leg/middle_right/force_sensor_raw', qos_profile)
        self.rear_right_pub_ = self.create_publisher(ForceSensor, 'hapthexa/leg/rear_right/force_sensor_raw', qos_profile)

        self.attitude_pub = self.create_publisher(Attitude, 'hapthexa/attitude', qos_profile)

        timer_period = 0.001  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.sensor = serial.Serial()
        self.sensor.baudrate = 115200
        self.sensor.port = "/dev/ttyACM0"
        self.sensor.timeout = 0 # 非ブロッキング
        self.sensor.open()

    def timer_callback(self):
        # シリアルバッファにたまっているデータを処理
        while self.sensor.in_waiting >= 23:
            header = self.sensor.read(1)
            if header == b'\xff':
                data = self.sensor.read(22)
                if len(data) < 22:
                    break
                
                checksum = 0
                for i in range(21):
                    checksum += data[i]
                
                if (checksum & 0xff) == data[21]:
                    self.publish_sensor_data(data)
                # チェックサム不一致の場合は次のバイトから同期を試みる（ループ継続）
            # ヘッダ不一致の場合もループ継続して次を探す

    def publish_sensor_data(self, data):
        # 各脚のパブリッシュ（メッセージインスタンスを分けることで安全性を確保）
        def create_and_fill(l1, p, l2, raw_p, z_threshold=127):
            msg = ForceSensor()
            msg.loadcell1_raw = l1
            msg.loadcell2_raw = l2
            msg.piezo_raw = raw_p
            msg.piezo = float(raw_p)/255.0
            msg.z = raw_p > z_threshold
            return msg

        self.front_left_pub_.publish(create_and_fill(data[3], data[4], data[5], data[4]))
        self.middle_left_pub_.publish(create_and_fill(data[6], data[7], data[8], data[7]))
        self.rear_left_pub_.publish(create_and_fill(data[9], data[10], data[11], data[10]))
        self.rear_right_pub_.publish(create_and_fill(data[12], data[13], data[14], data[13]))
        self.middle_right_pub_.publish(create_and_fill(data[15], data[16], data[17], data[16]))
        self.front_right_pub_.publish(create_and_fill(data[0], data[1], data[2], data[1]))

        attitude = Attitude()
        attitude.roll = (data[18] if data[18] < 128 else data[18] - 255)/127*pi
        attitude.pitch = (data[19] if data[19] < 128 else data[19] - 255)/127*pi
        attitude.yaw = (data[20] if data[20] < 128 else data[20] - 255)/127*pi
        self.attitude_pub.publish(attitude)


def main(args=None):
    rclpy.init(args=args)

    forcesensor_read = ForcesensorRead()

    rclpy.spin(forcesensor_read)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    forcesensor_read.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()