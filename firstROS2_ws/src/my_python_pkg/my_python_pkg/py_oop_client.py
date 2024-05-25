#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from example_interfaces.srv import AddTwoInts

class AddTwoIntClientNode(Node):
    #constructor, which takes no input argument
    def __init__(self):
        super().__init__("py_oop_add_client")
        self.call_add_two_ints_server(8,9)

    #the function which calls the server
    def call_add_two_ints_server(self, a, b):
        client = self.create_client(AddTwoInts, "add_two_ints")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server Add Two Ints ...")
        request = AddTwoInts.Request()
        request.a = a
        request.b = b

        future_res = client.call_async(request)
        #the callback_call_add_two_ints handle here can only access future_res argument here
        #as it is called from future_res.add_done_callback()
        #partial() allow us to set the the other argument's value
        future_res.add_done_callback(partial(self.callback_call_add_two_ints, a=a, b=b))
    
    #the function deal with async response
    def callback_call_add_two_ints(self, future_res, a, b):
        try:
            response = future_res.result()
            self.get_logger().info(str(a)+"+"+str(b)+"="+str(response.sum))
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    
def main(args=None):
    rclpy.init(args=args)
    myOopNode = AddTwoIntClientNode()
    #Since we cannot access future object in client node here
    #rclpy.spin_until_future_complete(node, future_res) cannot be called
    #so the add_done_callback() method is used in node class
    rclpy.spin(myOopNode)
    rclpy.shutdown()


if __name__ == "__main__":
    main()