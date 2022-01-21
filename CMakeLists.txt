cmake_minimum_required(VERSION 3.8)
project(caret_clock)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(LTTngUST REQUIRED)

include_directories(include)

add_executable(clock_recorder src/recorder.cpp src/tp.c)
ament_target_dependencies(clock_recorder rclcpp)

install(TARGETS
  clock_recorder
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
