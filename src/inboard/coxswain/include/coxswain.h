//
// Created by pat on 22/08/22.
//

#pragma once

#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class Coxswain
		: public rclcpp::Node
{
public:

	Coxswain(const char * _nodeName);
	virtual ~Coxswain();

private:

	void timer_callback();

private:

	rclcpp::TimerBase::SharedPtr                        m_timer;
	rclcpp::Publisher<std_msgs::msg::String>::SharedPtr m_publisher;
	size_t                                              m_count;
};
