#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

#this is to import the message type from an existing package
#need to add the dependency in package.xml
from example_interfaces.msg import String

# for OOP coding style
# create a class inheriting from Node object
class MyNode(Node):
    #constructor, which takes no input argument
    def __init__(self):
        super().__init__("py_robot_news_station")
        #declare parameter
        #can be set when calling node by adding --ros-args -p <param>:=<value>
        self.declare_parameter("number_to_publish", 2)
        self.declare_parameter("publish_frequency", 1.0)
        #read parameter
        self.number = self.get_parameter("number_to_publish").value
        self.publish_frequency = self.get_parameter("publish_frequency").value
        #arguments: <ros2_data_type>, <topic_name>, <queue_size>
        self.publisher_ = self.create_publisher(String, "robot_news", 10)
        
        #create a timer, whose callback function is publish_news
        self.timer_ = self.create_timer(1.0/self.publish_frequency, self.publish_news)
        self.get_logger().info("Robot News Station has been started")

    def publish_news(self):
        #msg is assigned with data structure created by example_interfaces/msg/String constructor
        msg = String()
        #to find ros2 message types's corresponding data type such as example_interfaces/msg/String
        #ros2 interface show example_interfaces/msg/String
        #which returns 
        #string data
        #it shows <example_interfaces/msg/String> object has member named "data", which is string
        msg.data = "py_publisher says: the number got is " + str(self.number)
        self.publisher_.publish(msg)


def main(args=None):
    #initialize the python-ros2 communication
    rclpy.init(args=args)
    myOopNode = MyNode()

    rclpy.spin(myOopNode)
    #shutdown the python-ros2 communication, automatically clear out all node 
    #and their contents
    rclpy.shutdown()


if __name__ == "__main__":
    main()