#! /bin/bash
source /root/ros_ws/install/setup.bash
ros2 launch npc_controller dspace.launch.py car_ip:=10.6.0.5 car_port:=60221
