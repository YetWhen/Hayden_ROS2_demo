#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts

def main(args=None):
    rclpy.init(args=args)
    node = Node("py_add_client")

    client = node.create_client(AddTwoInts, "add_two_ints", )
    #some times the client is called when server is not up yet
    #clinet.wait_for_service(<timeout, wait time between each loop, in sec>)
    while not client.wait_for_service(1.0):
        #when timeout, execute the following lines
        node.get_logger().warn("Waiting for server Add Two Ints ...")
    request = AddTwoInts.Request()
    request.a = 4
    request.b = 9
    #client.call() will pause and wait until get the response
    #client.call_async() allows system to keep operating
    #which means, 
    #the object storing response will be callable and empty in the beginning
    #but it will be updated when service respond
    #in ros2, we usually use call_async(request)
    future_res = client.call_async(request)
    rclpy.spin_until_future_complete(node, future_res)
    try:
        #result() has exception cases, so we need to catch that
        response = future_res.result()
        node.get_logger().info(str(request.a)+"+"+str(request.b)+"="+str(response.sum))
    except Exception as e:
        node.get_logger().error("Service call failed %r" % (e,))


    rclpy.shutdown()


if __name__ == "__main__":
    main()