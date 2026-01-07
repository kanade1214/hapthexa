cmake_minimum_required(VERSION 3.5)
project(hapthexa_visualizer)

find_package(ament_cmake REQUIRED)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

install(PROGRAMS
  scripts/visualizer_node.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
