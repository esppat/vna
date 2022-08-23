from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="coxswain",
            executable="coxswain",
            name="coxswain",
            output="screen",
            emulate_tty=True
        )
    ])
/opt/ros/humble/bin/ros2 launch coxswain coxswain_launch.py
