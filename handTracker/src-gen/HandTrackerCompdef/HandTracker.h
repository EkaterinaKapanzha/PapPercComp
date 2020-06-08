// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef HANDTRACKERCOMPDEF_HANDTRACKER_H
#define HANDTRACKERCOMPDEF_HANDTRACKER_H

/************************************************************
 HandTracker class header
 ************************************************************/

#include "HandTrackerCompdef/Pkg_HandTrackerCompdef.h"

#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "std_msgs/msg/float32multi_array.hpp"

// Include from Include stereotype (header)
#include <rclcpp/rclcpp.hpp>

// End of Include stereotype (header)

namespace ros2Library {
namespace rclcpp {
class NodeOptions;
}
}
namespace ros2Library {
namespace rclcpp {
class Subscription;
}
}

namespace HandTrackerCompdef {

/************************************************************/
/**
 * 
 */
class HandTracker: public rclcpp_lifecycle::LifecycleNode {
public:

	/**
	 * 
	 */
	rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_S_sub_;

	/**
	 * 
	 */
	rclcpp_lifecycle::LifecyclePublisher<std_msgs::msg::Float32MultiArray>::SharedPtr points_P_pub_;

	/**
	 * 
	 * @param options 
	 */
	HandTracker(rclcpp::NodeOptions /*in*/options);

};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace HandTrackerCompdef

/************************************************************
 End of HandTracker class header
 ************************************************************/

#endif
