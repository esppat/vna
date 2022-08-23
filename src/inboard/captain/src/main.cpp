//
// Created by pat on 23/08/22.
//

#include "../include/captain.h"

int main(int _argc, char * _argv[])
{
	rclcpp::init(_argc, _argv);

	rclcpp::executors::MultiThreadedExecutor executor;

	auto captain1 = std::make_shared<Captain>("captain1");
	executor.add_node(captain1);

//	auto captain2 = std::make_shared<Captain>("captain2");
//	executor.add_node(captain2);

	executor.spin();

	rclcpp::shutdown();
	return 0;
}
