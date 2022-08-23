//
// Created by pat on 23/08/22.
//

#include "../include/coxswain.h"

int main(int _argc, char * _argv[])
{
	rclcpp::init(_argc, _argv);

	rclcpp::executors::MultiThreadedExecutor executor;

	auto coxswain = std::make_shared<Coxswain>("coxswain1");
	executor.add_node(coxswain);

	executor.spin();

	rclcpp::shutdown();
	return 0;
}
