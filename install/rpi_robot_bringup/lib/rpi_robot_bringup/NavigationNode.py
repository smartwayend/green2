import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from sensor_msgs.msg import Image, LaserScan
from nav_msgs.msg import OccupancyGrid
import math

class NavigationNode(Node):
    def __init__(self):
        super().__init__('navigation_node')

        # 토픽 발행자
        self.publisher = self.create_publisher(Bool, 'control_topic', 10)

    def move_command_callback(self, move_command):
        # 이동 명령을 받아서 RC카의 제어 노드에 전달
        msg = Bool()
        msg.data = move_command
        self.publisher.publish(msg)

class RCCarSLAMNode(Node):
    def __init__(self):
        super().__init__('rc_car_slam_node')

        # 카메라 및 라이다 센서를 위한 토픽 구독자 생성
        self.camera_subscription = self.create_subscription(
            Image,
            'camera_topic',
            self.camera_callback,
            10
        )
        self.lidar_subscription = self.create_subscription(
            LaserScan,
            'lidar_topic',
            self.lidar_callback,
            10
        )

        # SLAM 객체 생성
        self.slam = SLAM()

    def camera_callback(self, msg):
        # 카메라 데이터를 SLAM에 전달하여 지도 업데이트
        image_data = msg.data
        self.slam.process_camera_data(image_data)

    def lidar_callback(self, msg):
        # 라이다 데이터를 SLAM에 전달하여 위치 추정
        lidar_data = msg.data
        self.slam.process_lidar_data(lidar_data)

    def generate_map(self):
        # SLAM으로부터 생성된 지도를 가져와서 OccupancyGrid 메시지로 변환
        map_data = self.slam.get_map()
        occupancy_grid = OccupancyGrid()
        # 지도 데이터를 occupancy_grid 변수에 설정

        # OccupancyGrid 메시지를 발행

class PathPlanner:
    def __init__(self, map_data):
        self.map_data = map_data

    def plan_path(self, start, goal):
        # A* 알고리즘을 사용하여 경로를 계획
        path = self.a_star(start, goal)
        return path

    def a_star(self, start, goal):
        # A* 알고리즘으로 경로 계획
        open_set = [start]
        closed_set = []

        g_score = {start: 0}
        f_score = {start: self.heuristic(start, goal)}

        while open_set:
            current = self.get_lowest_f_score(open_set, f_score)
            if current == goal:
                return self.reconstruct_path(goal)

            open_set.remove(current)
            closed_set.append(current)

            for neighbor in self.get_neighbors(current):
                if neighbor in closed_set:
                    continue

                tentative_g_score = g_score[current] + self.distance(current, neighbor)
                if neighbor not in open_set or tentative_g_score < g_score[neighbor]:
                    g_score[neighbor] = tentative_g_score
                    f_score[neighbor] = tentative_g_score + self.heuristic(neighbor, goal)
                    if neighbor not in open_set:
                        open_set.append(neighbor)

        return None

    def heuristic(self, point1, point2):
        # 휴리스틱 함수로서 Euclidean 거리를 사용
        return math.sqrt((point1[0] - point2[0]) ** 2 + (point1[1] - point2[1]) ** 2)

    def distance(self, point1, point2):
        # 두 점 사이의 거리를 계산
        return math.sqrt((point1[0] - point2[0]) ** 2 + (point1[1] - point2[1]) ** 2)

    def get_neighbors(self, point):
        # 주어진 점의 이웃들을 가져옴
        # 예시: 주어진 점의 상, 하, 좌, 우 이웃들을 가져옴
        x, y = point
        neighbors = [(x - 1, y), (x + 1, y), (x, y - 1), (x, y + 1)]
        valid_neighbors = []
        for neighbor in neighbors:
            if self.is_valid(neighbor):
                valid_neighbors.append(neighbor)
        return valid_neighbors

    def is_valid(self, point):
        # 주어진 점이 유효한지 확인
        # 예시: 주어진 점이 장애물이 없는 영역인지 확인
        x, y = point
        if self.map_data[x][y] == 0:
            return True
        else:
            return False

    def get_lowest_f_score(self, open_set, f_score):
        # open_set에서 f_score가 가장 낮은 점을 가져옴
        lowest_f_score = float('inf')
        lowest_point = None
        for point in open_set:
            if f_score[point] < lowest_f_score:
                lowest_f_score = f_score[point]
                lowest_point = point
        return lowest_point

    def reconstruct_path(self, goal):
        # A* 알고리즘으로부터 얻은 경로를 재구성
        current = goal
        path = [current]
        while current in self.came_from:
            current = self.came_from[current]
            path.append(current)
        path.reverse()
        return path


def convert_path_to_commands(path):
    # 경로를 RC카의 제어 명령으로 변환하는 함수
    commands = []
    for i in range(len(path) - 1):
        current_point = path[i]
        next_point = path[i + 1]
        # 예시: 현재 점과 다음 점 사이의 방향을 계산하여 RC카의 제어 명령으로 변환
        direction = calculate_direction(current_point, next_point)
        commands.append(direction)
    return commands


def calculate_direction(current_point, next_point):
    # 현재 점과 다음 점 사이의 방향을 계산하여 RC카의 제어 명령으로 변환
    # 예시: 현재 점과 다음 점의 상대적인 위치를 이용하여 RC카의 제어 명령을 계산
    direction = calculate_direction_based_on_relative_position(current_point, next_point)
    return direction


def main(args=None):
    rclpy.init(args=args)
    
    navigation_node = NavigationNode()
    rc_car_slam_node = RCCarSLAMNode()

    rclpy.spin(navigation_node)
    rclpy.spin(rc_car_slam_node)

    navigation_node.destroy_node()
    rc_car_slam_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
