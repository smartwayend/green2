import RPi.GPIO as GPIO
import time

class RCCarInterface:
    def __init__(self):
        # GPIO 핀 번호 설정
        self.left_motor_pin = 17
        self.right_motor_pin = 18
        self.steering_pin = 19

        # GPIO 핀 모드 설정
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(self.left_motor_pin, GPIO.OUT)
        GPIO.setup(self.right_motor_pin, GPIO.OUT)
        GPIO.setup(self.steering_pin, GPIO.OUT)

        # PWM 객체 생성
        self.left_motor_pwm = GPIO.PWM(self.left_motor_pin, 100)
        self.right_motor_pwm = GPIO.PWM(self.right_motor_pin, 100)
        self.steering_pwm = GPIO.PWM(self.steering_pin, 100)

        # PWM 시작
        self.left_motor_pwm.start(0)
        self.right_motor_pwm.start(0)
        self.steering_pwm.start(0)

    def set_motor_speed(self, speed):
        # 모터 속도 설정
        self.left_motor_pwm.ChangeDutyCycle(speed)
        self.right_motor_pwm.ChangeDutyCycle(speed)

    def set_steering_angle(self, angle):
        # 스티어링 각도 설정
        self.steering_pwm.ChangeDutyCycle(angle)

    def cleanup(self):
        # GPIO 설정 초기화
        GPIO.cleanup()
