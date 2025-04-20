#! /bin/bash
source /autoverse_bridge/install/setup.bash
source /root/ros_ws/install/setup.bash
ros2 launch npc_controller autoverse.launch.py car_ip:=127.0.0.1 car_port:=60221
