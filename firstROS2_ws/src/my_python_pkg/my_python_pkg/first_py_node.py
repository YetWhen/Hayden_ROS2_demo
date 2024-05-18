#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

# for OOP coding style
# create a class inheriting from Node object
class MyNode(Node):
    #constructor, which takes no input argument
    def __init__(self):
        #this will call/borrow the __init__() function (constructor) of Node in library
        #argument is the node name
        super().__init__("py_test_oop")
        #the following can be split to child functions to be called in main()
        self.get_logger().info("[oop] Hello ROS2")
        #create_timer(wait time in sec, function to call)
        #the following will call timer_callback() every 0.5 sec, = 2Hz
        self.counter_ = 0
        self.create_timer(0.5,self.timer_callback)
    def timer_callback(self):
        self.counter_ += 1
        self.get_logger().info("[oop] timer_callback:hello "+str(self.counter_)+" -- from MyNode class")

def main(args=None):
    #initialize the python-ros2 communication
    rclpy.init(args=args)
    '''non oop style'''
    #create a node with Node("node_name") constructor in rclpy.node library
    mynode = Node("py_test")
    #add an info to log
    mynode.get_logger().info("[main] Hello ROS2 - Hayden Ye")

    '''oop style'''
    myOopNode = MyNode()

    #spin() will pause the program, so that the node will stay active 
    #instead of shutdown()
    #now you need ctrl+c to exit program
    '''important: spin will pause the system on the node you pass to it,
    if you spin one node first, the following codes won't be executed,
    the following node won't be run, except for the code in their constructor
    when they're constructed previously
    You can have multiple nodes created in one script, but don't do it '''
    #rclpy.spin(mynode)
    rclpy.spin(myOopNode)
    #shutdown the python-ros2 communication, automatically clear out all node 
    #and their contents
    rclpy.shutdown()


if __name__ == "__main__":
    main()