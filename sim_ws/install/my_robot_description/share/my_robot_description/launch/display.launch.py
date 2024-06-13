import os
from launch import LaunchDescription
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_path

#need to be exactly this name
def generate_launch_description():
    #the following line is to search the /share folder path in my_robot_description
    #and join these path, folder name, file name with '/'
    urdf_path=os.path.join(get_package_share_path('my_robot_description'),
                           'urdf', 'my_robot.urdf')
    rviz_config_path=os.path.join(get_package_share_path('my_robot_description'),
                           'rviz', 'my_robot_config.rviz')
    robot_description = ParameterValue(Command(['xacro ', urdf_path]), value_type=str)

    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable = "robot_state_publisher",
        parameters=[{'robot_description': robot_description}]
    )
    joint_state_publisher_node = Node(
        package="joint_state_publisher_gui",
        executable = "joint_state_publisher_gui"
    )
    rviz2_node = Node(
        package="rviz2",
        executable="rviz2",
        arguments=["-d", rviz_config_path]
    )
    return LaunchDescription([
        robot_state_publisher_node,
        joint_state_publisher_node,
        rviz2_node
    ])