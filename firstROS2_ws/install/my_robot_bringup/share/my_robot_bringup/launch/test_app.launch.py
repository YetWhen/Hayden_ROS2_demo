from launch import LaunchDescription
from launch_ros.actions import Node


#create a function with name EXACTLY like follows
#which will be picked up by launch functionality
def generate_launch_description():
    ld = LaunchDescription()
    # package and executable are those you use in ros2 run command
    py_publish_node = Node(
        package="my_python_pkg",
        executable="py_publisher1",
        name="py_number_publisher",
        remappings=[
            ("robot_news", "number"),  #rename item "robot_news" with "number", which is topic names here
        ],
        parameters=[
            {"number_to_publish": 4},  #assign parameters with values
            {"publish_frequency": 2.0},
        ]
    )

    cpp_subscriber_node = Node(
        package="my_cpp_pkg",
        executable="cpp_subscriber1",
        name="cpp_number_subscriber",
        remappings=[
            ("robot_news", "number"),  #rename item "robot_news" with "number", which is topic names here
        ]
    )

    ld.add_action(py_publish_node)
    ld.add_action(cpp_subscriber_node)
    return ld