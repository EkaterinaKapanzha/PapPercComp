// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef GESTUREDETECTORCOMPDEF_GESTUREDETECTOR_H
#define GESTUREDETECTORCOMPDEF_GESTUREDETECTOR_H

/************************************************************
 GestureDetector class header
 ************************************************************/

#include "GestureDetectorCompdef/Pkg_GestureDetectorCompdef.h"

#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "std_msgs/msg/float32multi_array.hpp"
#include "std_msgs/msg/string.hpp"

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

namespace GestureDetectorCompdef {

/************************************************************/
/**
 * 
 */
class GestureDetector: public rclcpp_lifecycle::LifecycleNode {
public:

	/**
	 * 
	 */
	rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr points_S_sub_;

	/**
	 * 
	 */
	rclcpp_lifecycle::LifecyclePublisher<std_msgs::msg::String>::SharedPtr command_P_pub_;

	/**
	 * 
	 * @param options 
	 */
	GestureDetector(rclcpp::NodeOptions /*in*/options);

};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace GestureDetectorCompdef

/************************************************************
 End of GestureDetector class header
 ************************************************************/

#endif