#!/usr/bin/env python3

import rospy

if __name__ == '__main__':
    rospy.init_node('time_example')

    # 현재 시간 가져오기
    current_time = rospy.Time.now()

    # 현재 시간 출력
    rospy.loginfo('Current time: %f', current_time.to_sec())

    rospy.spin()
