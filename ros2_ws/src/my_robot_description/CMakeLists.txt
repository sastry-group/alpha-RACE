cmake_minimum_required(VERSION 3.8)
project(my_robot_description)

# Find dependencies
find_package(ament_cmake REQUIRED)

# Install the URDF and meshes
install(DIRECTORY urdf meshes
  DESTINATION share/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()