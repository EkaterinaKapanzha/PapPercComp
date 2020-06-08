// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define Data2RVizCompdef_Data2RViz_BODY

/************************************************************
 Data2RViz class body
 ************************************************************/

// include associated header file
#include "Data2RVizCompdef/Data2RViz.h"

// Derived includes directives
#include "Data2RVizCompdef/Data2RViz_impl.h"
#include "rclcpp/rclcpp.hpp"

// Include from Include declaration (body)
// declare options
rclcpp::NodeOptions data2rviz_options;

int main(int argc, char **argv) {
	rclcpp::init(argc, argv);

	auto data2rviz = std::make_shared<Data2RVizCompdef::Data2RViz_impl>(
			data2rviz_options);

	RCLCPP_INFO(data2rviz->get_logger(), "Data2RViz has been initialized");

	rclcpp::executors::MultiThreadedExecutor executor;

	executor.add_node(data2rviz->get_node_base_interface());

	executor.spin();
	rclcpp::shutdown();
}

// End of Include declaration (body)

namespace Data2RVizCompdef {

// static attributes (if any)

/**
 * 
 * @param options 
 */
Data2RViz::Data2RViz(rclcpp::NodeOptions /*in*/options) :
		rclcpp_lifecycle::LifecycleNode("Data2RViz", options) {
	image_S_sub_ = create_subscription<sensor_msgs::msg::Image>("image_S",
			rclcpp::QoS(rclcpp::KeepLast(100)).best_effort(),
			std::bind(&Data2RVizCompdef::Data2RViz_impl::commandsHandler,
					(Data2RViz_impl*) this, std::placeholders::_1));

	points_S_sub_ = create_subscription<std_msgs::msg::Float32MultiArray>(
			"points_S", rclcpp::QoS(rclcpp::KeepLast(100)).best_effort(),
			std::bind(&Data2RVizCompdef::Data2RViz_impl::commandsHandler,
					(Data2RViz_impl*) this, std::placeholders::_1));

	command_S_sub_ = create_subscription<std_msgs::msg::String>("command_S",
			rclcpp::QoS(rclcpp::KeepLast(100)).best_effort(),
			std::bind(&Data2RVizCompdef::Data2RViz_impl::commandsHandler,
					(Data2RViz_impl*) this, std::placeholders::_1));

}

} // of namespace Data2RVizCompdef

/************************************************************
 End of Data2RViz class body
 ************************************************************/