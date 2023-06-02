#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
import RPi.GPIO as GPIO


class RCCarInterface:
    def __init__(self):
        # GPIO 핀 번호 설정

        left_motor1_pin = 22
        left_motor2_pin = 27
        right_motor1_pin = 23
        right_motor2_pin = 24

        # GPIO 핀 모드 설정
        GPIO.setwarnings(False) 
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(left_motor1_pin, GPIO.OUT)
        GPIO.setup(left_motor2_pin, GPIO.OUT)
        GPIO.setup(PWMA,GPIO.OUT)

        GPIO.setup(right_motor1_pin, GPIO.OUT)
        GPIO.setup(right_motor2_pin, GPIO.OUT)
        GPIO.setup(PWMB,GPIO.OUT)
        

        # PWM 객체 생성
        left_motor_pwm_pin = 18
        right_motor_pwm_pin = 23
        self.left_motor_pwm_pin = GPIO.PWM(left_motor_pwm_pin, 18)
        self.right_motor_pwm_pin = GPIO.PWM(right_motor_pwm_pin, 23)
        
        # PWM 시작
        self.left_motor_pwm_pin.start(0)
        self.right_motor_pwm_pin.start(0)


    def set_motor_speed(self, speed):
        # 모터 속도 설정
        self.left_motor_pwm.ChangeDutyCycle(speed)
        self.right_motor_pwm.ChangeDutyCycle(speed)


    def cleanup(self):
        # GPIO 설정 초기화
        GPIO.cleanup()
        
        

