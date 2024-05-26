#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

#my_interfaces package/folder, msg folder
from my_interfaces.msg import HardwareStatus

class HardwareStatusPublisher(Node):
    def __init__(self):
        super().__init__("hardware_status_publisher")
        #create publisher in class
        self.hardware_publisher_ = self.create_publisher(HardwareStatus, "hardware_status", 10)
        #create a timer, every 1 sec it will call the publish_hw_status function
        self.timer_= self.create_timer(1.0, self.publish_hw_status)
        #the following info will be posted once in the beginning when creating node
        self.get_logger().info("Hardware status publisher has been started")

    def publish_hw_status(self):
        #create and edit msg object
        msg = HardwareStatus()
        msg.temperature = 45
        msg.are_motors_ready = True
        msg.debug_message = "Nothing special here"
        #call the publisher and publish message to topic
        self.hardware_publisher_.publish(msg)

     
def main(args=None):
    rclpy.init(args=args)
    myOopNode = HardwareStatusPublisher()
    rclpy.spin(myOopNode)
    rclpy.shutdown()


if __name__ == "__main__":
    main()