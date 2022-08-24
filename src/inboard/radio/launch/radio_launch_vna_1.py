from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="radio",
            executable="radio",
            name="radio",
            output="screen",
            emulate_tty=True
        )
    ])
/opt/ros/humble/bin/ros2 launch radio radio_launch.py
