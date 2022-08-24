cmake_minimum_required(VERSION 3.8)
project(coxswain)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(coxswain
        src/coxswain.cpp
        include/coxswain.h
        src/main.cpp
        )

target_include_directories(coxswain PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)

install(DIRECTORY launch
        DESTINATION share/${PROJECT_NAME}
        )

ament_target_dependencies(coxswain
        rclcpp
        std_msgs
        )

install(TARGETS
        coxswain
        DESTINATION lib/${PROJECT_NAME}
        )

ament_package()
