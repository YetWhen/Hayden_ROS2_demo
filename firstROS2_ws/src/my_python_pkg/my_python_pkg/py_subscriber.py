#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import String

# for OOP coding style
# create a class inheriting from Node object
class MyNode(Node):
    #constructor, which takes no input argument
    def __init__(self):
        super().__init__("py_smartphone")
        #similar to publisher, publisher takes <ros2 msg type> and <topic name>
        #but the 3rd argument is callback function, 4th is queue/buffer size
        self.subscriber_ = self.create_subscription(
            String, "robot_news", self.callback_robot_news, 10)
        self.get_logger().info("Subscriber has been started")

    def callback_robot_news(self, msg):
        #the msg type is example_interfaces/msg/String
        #which has 1 member data of type string
        #it prints the content of msg to log
        self.get_logger().info(msg.data)

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