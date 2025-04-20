from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    npc_controller_param_file = DeclareLaunchArgument(
        'npc_controller_param_file',
        default_value='$(find npc_controller)/config/ims.param.yaml',
        description='Path to param file for lap state machine'
    )

    npc_controller_node = Node(
        # package='npc_controller',
        executable='controller.py',
        output='screen',
        remappings=[
            ('bestpos', 'novatel_top/bestpos'),
            ('wheel_speed_report', 'raptor_dbw_interface/wheel_speed_report'),
            ('pt_report', 'raptor_dbw_interface/pt_report'),
            ('steering_cmd', 'raptor_dbw_interface/steering_cmd'),
            ('accelerator_pedal_cmd', 'raptor_dbw_interface/accelerator_pedal_cmd'),
            ('brake_cmd', 'raptor_dbw_interface/brake_cmd'),
            ('gear_cmd', 'raptor_dbw_interface/gear_cmd'),
        ],
        parameters=[LaunchConfiguration('npc_controller_param_file')]
    )

    return LaunchDescription([
        npc_controller_param_file,
        npc_controller_node
    ])

