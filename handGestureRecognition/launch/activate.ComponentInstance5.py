import launch.actions
import launch_ros
import lifecycle_msgs.msg

from launch_ros.events.lifecycle import ChangeState
from launch import LaunchDescription
from launch_ros.actions import LifecycleNode
from launch_ros.events.lifecycle import ChangeState
from ament_index_python.packages import get_package_share_directory

share_dir = get_package_share_directory('handgesturerecognition')

def generate_launch_description():

	# Launch Description
	ld = launch.LaunchDescription()

	# Add the actions to the launch description.
	# The order they are added reflects the order in which they will be executed.
	ComponentInstance5_node = LifecycleNode(
		node_name='ComponentInstance5',
		package='data2rviz', node_executable='Data2RViz',
		remappings=[
			('image_S', 'ComponentInstance5/Image/image_P'), ('points_S', 'ComponentInstance4/Float32MultiArray/points_P'), ('command_S', 'ComponentInstance4/String/command_P')
		],
		parameters=[share_dir+'/launch/cfg/param.yaml'],
		output='screen',
		emulate_tty=True	# assure that RCLCPP output gets flushed
	)
	ld.add_entity(ComponentInstance5_node)

	# transition to configure after startup
	configure_ComponentInstance5 = launch.actions.RegisterEventHandler(
		launch.event_handlers.on_process_start.OnProcessStart(
			target_action=ComponentInstance5_node,
			on_start=[
	 			launch.actions.EmitEvent(
					event=launch_ros.events.lifecycle.ChangeState(
						lifecycle_node_matcher=launch.events.matches_action(ComponentInstance5_node),
						transition_id=lifecycle_msgs.msg.Transition.TRANSITION_CONFIGURE
					)
				)
			]
		)
	)
	ld.add_entity(configure_ComponentInstance5)

	# transition to activate, once inactive
	activate_ComponentInstance5 = launch.actions.RegisterEventHandler(
		launch_ros.event_handlers.OnStateTransition(
			target_lifecycle_node=ComponentInstance5_node,
			start_state='configuring', goal_state='inactive',
			entities=[
				launch.actions.EmitEvent(
					event=launch_ros.events.lifecycle.ChangeState(
						lifecycle_node_matcher=launch.events.matches_action(ComponentInstance5_node),
						transition_id=lifecycle_msgs.msg.Transition.TRANSITION_ACTIVATE
					)
				)
			]
		)
	)
	ld.add_entity(activate_ComponentInstance5)

	return ld
