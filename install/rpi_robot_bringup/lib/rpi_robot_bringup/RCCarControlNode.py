#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from RCCarInterface import RCCarInterface


class RCCarControlNode(Node):
    def __init__(self):
        super().__init__('RCCar_control_node')


        # RC카의 하드웨어와 통신 설정
        self.hardware_interface = RCCarInterface()
        
        # 제어 인터페이스와 제어 알고리즘 설정
        self.controller = RCCarController()

        # 토픽 구독자
        self.subscription = self.create_subscription(
            Bool,
            'control_topic',
            self.control_callback,
            10
        )
        self.subscription

    def control_callback(self, msg):
        # 이동 명령 수신 및 제어 알고리즘에 전달
        self.controller.set_command(msg.data)

    def run(self):
        # RC카의 제어 시스템 실행
        while rclpy.ok():
            # 하드웨어와 상호작용하여 제어 알고리즘 수행
            control_output = self.controller.control_step(self.hardware_interface.get_state())

            # 제어 출력을 하드웨어에 전달하여 RC카 제어
            self.hardware_interface.send_control_output(control_output)

def main(args=None):
    rclpy.init(args=args)
    node = RCCarControlNode()
    node.run()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


