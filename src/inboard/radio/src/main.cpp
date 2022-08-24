//
// Created by pat on 23/08/22.
//

#include "../include/radio.h"

int main(int _argc, char * _argv[])
{
	rclcpp::init(_argc, _argv);

	rclcpp::executors::MultiThreadedExecutor executor;

	auto radio1 = std::make_shared<Radio>("radio1");
	executor.add_node(radio1);

	executor.spin();

	rclcpp::shutdown();
	return 0;
}
