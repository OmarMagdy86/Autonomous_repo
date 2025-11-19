cmake_minimum_required(VERSION 3.8)
project(turtle_control_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 1. Find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# 2. Install Python executable scripts
install(PROGRAMS
  turtle_control_pkg/turtle_control.py
  turtle_control_pkg/simple_publisher.py
  turtle_control_pkg/simple_subscriber.py
  turtle_control_pkg/client_example.py
  turtle_control_pkg/server_example.py
  turtle_control_pkg/fibonacci_action_server.py
  turtle_control_pkg/fibonacci_action_client.py
  DESTINATION lib/${PROJECT_NAME}
)

# 3. Install Directories (Launch, Worlds, URDF, RViz)
# ⬇️ ADDED: 'rviz' is now included since you have created the folder
install(DIRECTORY
  launch
  worlds
  urdf
  rviz
  DESTINATION share/${PROJECT_NAME}
)

# 4. Generate Interfaces (Messages/Services/Actions)
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Num.msg"
  "srv/AddThreeInts.srv"
  "action/Fibonacci.action"
  DEPENDENCIES geometry_msgs
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()