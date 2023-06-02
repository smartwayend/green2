import rclpy
from rclpy.node import Node

class RCCarControllerNode(Node):
    def __init__(self):
        super().__init__('rc_car_controller_node')
        # Controller와 RC카의 하드웨어 인터페이스를 관리하는 코드 작성
        # 메시지나 서비스를 통해 이동 명령을 수신하는 코드 작성

        # 예시: 이동 명령을 받기 위한 Subscriber 설정
        self.cmd_vel_subscriber = self.create_subscription(
            Twist,
            'cmd_vel',
            self.cmd_vel_callback,
            10
        )
        self.cmd_vel_subscriber

        # 예시: RC카의 제어 인터페이스를 관리하는 Controller 인스턴스 생성
        self.controller = RCCarController()

        # 예시: RC카의 하드웨어 인터페이스를 관리하는 HardwareInterface 인스턴스 생성
        self.hardware_interface = RCCarHardwareInterface()

        # 예시: Controller와 HardwareInterface를 연결
        self.controller.configure(self.hardware_interface)

    def cmd_vel_callback(self, msg):
        # 이동 명령 수신 시 호출되는 콜백 함수
        # 수신된 이동 명령을 Controller에 전달
        self.controller.set_command(msg.linear.x, msg.angular.z)

def main(args=None):
    rclpy.init(args=args)
    rc_car_controller_node = RCCarControllerNode()
    rclpy.spin(rc_car_controller_node)
    rc_car_controller_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

