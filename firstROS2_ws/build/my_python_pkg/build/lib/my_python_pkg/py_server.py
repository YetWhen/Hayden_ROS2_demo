#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts

class AddTwoIntServerNode(Node):
    #constructor, which takes no input argument
    def __init__(self):
        super().__init__("py_add_server1")
        #Node.create_service(<service type>, <name of service>,<callback func>)
        self.server_ = self.create_service(AddTwoInts, "add_two_ints", self.callback_add_two_ints)
        self.get_logger().info("python ros2 server activated, it takes two integer and return their sum")

    def callback_add_two_ints(self, request, response):
        #request and response are passed as struct/class here
        response.sum = request.a + request.b
        self.get_logger().info(str(request.a)+"+"+str(request.b)+"="+str(response.sum))
        return response
    
def main(args=None):
    rclpy.init(args=args)
    myOopNode = AddTwoIntServerNode()
    rclpy.spin(myOopNode)
    rclpy.shutdown()


if __name__ == "__main__":
    main()