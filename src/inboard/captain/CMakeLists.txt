cmake_minimum_required(VERSION 3.8)
project(captain)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(captain
        src/radio.cpp
        include/captain.h
        src/main.cpp
        )

target_include_directories(captain PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)

install(
        DIRECTORY launch
        DESTINATION share/${PROJECT_NAME}
        )

ament_target_dependencies(captain
        rclcpp
        std_msgs
        )

install(TARGETS
        captain
        DESTINATION lib/${PROJECT_NAME})

ament_package()
