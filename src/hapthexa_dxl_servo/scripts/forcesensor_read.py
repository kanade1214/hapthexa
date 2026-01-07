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
        # シリアルバッファにたまっているデータを一括処理
        while self.sensor.in_waiting >= 23:
            # ヘッダ 0xff を探す
            if self.sensor.read(1) != b'\xff':
                continue
            
            # データ22バイトを一度に読み取る
            data = self.sensor.read(22)
            if len(data) < 22:
                # 22バイトに満たない場合は、不完全なパケットとして破棄または
                # 次のタイマーコールで処理されるようにバッファに残る必要があるが、
                # read(22)した時点で消えているため、このパケットは失敗として扱う
                break
            
            # チェックサム計算 (21バイト分の合計)
            checksum = 0
            for i in range(21):
                checksum += data[i]
            
            if (checksum & 0xff) == data[21]:
                self.publish_sensor_data(data)
            else:
                # 同期ズレの可能性があるため警告（デバッグ用）
                # self.get_logger().warn('Checksum error')
                pass

    def publish_sensor_data(self, data):
        # データの物理的な意味に合わせてパブリッシュ
        # Piezoデータなどのスケール変換
        def create_and_fill(l1, d4, l2, piezo_raw, is_z_bit=False):
            msg = ForceSensor()
            msg.loadcell1_raw = int(l1)
            msg.loadcell2_raw = int(l2)
            msg.piezo_raw = int(piezo_raw)
            # piezo_raw を float に変換 (0.0 - 1.0)
            msg.piezo = float(piezo_raw) / 255.0
            # z軸の判定（オリジナル実装に則る）
            msg.z = piezo_raw > 127
            return msg

        # オリジナルのマッピングを維持
        self.front_left_pub_.publish(create_and_fill(data[3], data[4], data[5], data[4]))
        self.middle_left_pub_.publish(create_and_fill(data[6], data[7], data[8], data[7]))
        self.rear_left_pub_.publish(create_and_fill(data[9], data[10], data[11], data[10]))
        self.rear_right_pub_.publish(create_and_fill(data[12], data[13], data[14], data[13]))
        self.middle_right_pub_.publish(create_and_fill(data[15], data[16], data[17], data[16]))
        self.front_right_pub_.publish(create_and_fill(data[0], data[1], data[2], data[1]))

        # 姿勢データの処理
        attitude = Attitude()
        # 符号付き1バイトとして処理 (-127 to 127) -> ラジアン変換
        def to_rad(val):
            signed_val = val if val < 128 else val - 256
            return float(signed_val) / 127.0 * pi

        attitude.roll = to_rad(data[18])
        attitude.pitch = to_rad(data[19])
        attitude.yaw = to_rad(data[20])
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