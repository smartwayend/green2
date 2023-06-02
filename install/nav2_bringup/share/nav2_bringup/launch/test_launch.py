import launch
import launch_ros.actions

def generate_launch_description():
    robot_description = launch.substitutions.LaunchConfiguration('robot_description', default="$(find xacro)/xacro $(find nav2_bringup)/urdf/test.urdf")

    robot_state_publisher_node = launch_ros.actions.Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        arguments=[robot_description]
    )

    joint_state_publisher_gui_node = launch_ros.actions.Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui'
    )

    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'robot_description',
            default_value=robot_description,
            description='Path to robot description file'
        ),
        robot_state_publisher_node,
        joint_state_publisher_gui_node
    ])

if __name__ == '__main__':
    launch.main()
