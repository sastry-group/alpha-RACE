from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # Get the path to the URDF
    urdf_file = os.path.join(
        get_package_share_directory('my_robot_description'),
        'urdf',
        'car.urdf'
    )

    # Load the URDF file
    with open(urdf_file, 'r') as file:
        robot_description_content = file.read()

    # Define the robot_description parameter
    robot_description = {'robot_description': robot_description_content}

    return LaunchDescription([
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            name='joint_state_publisher_gui'
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[robot_description]
        ),
    ])
