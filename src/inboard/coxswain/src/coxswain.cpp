//
// Created by pat on 22/08/22.
//

#include "../include/coxswain.h"

#include <chrono>
using namespace std::chrono_literals;
#include <functional>


Coxswain::Coxswain(const char * _nodeName) : Node(_nodeName)
											, m_count(0)
{
	RCLCPP_INFO(this->get_logger(), "Starting");

	m_publisher = this->create_publisher<std_msgs::msg::String>("topic", 10);
	m_timer     = this->create_wall_timer(1s, std::bind(&Coxswain::timer_callback, this));
}

Coxswain::~Coxswain()
{
	RCLCPP_INFO(this->get_logger(), "Stopping");
}

void Coxswain::timer_callback()
{
	auto message = std_msgs::msg::String();
	message.data = "Hello, world! " + std::to_string(m_count++);
	RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
	m_publisher->publish(message);
}
