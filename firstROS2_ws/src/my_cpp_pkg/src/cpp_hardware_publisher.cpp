// created at 2024/05/26
// author: Diwen Ye (Hayden)
// a simple customize msg interface publisher example in CPP, can serve for template

// vscode will detect error in this following include code
// ctrl+shift+p, search&edit C/C++ configuration (JSON)
// add to "includePath" with "/opt/ros/<DISTRO_YOU_USE>/include/**"
// and for customized interface
// "<address to workspace>/install/<interface_pkg>/include/**"
//need to update the dependency in package.xml & CMakeList.txt
#include "rclcpp/rclcpp.hpp"
#include "my_interfaces/msg/hardware_status.hpp"

// public inherite the Node class from rclcpp
class HardwareStatusPublisher : public rclcpp::Node
{
public:
    HardwareStatusPublisher() : Node("cpp_hardware_publisher")
    {
        //create publisher, to topic "hardware_status", with buffer memory up to 10 messages
        publisher_  = this->create_publisher<my_interfaces::msg::HardwareStatus>("hardware_status",10);
        //create a timer which will call publishStatus function every 0.5 sec
        timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&HardwareStatusPublisher::publishStatus, this));
        //post info once when the node is first created
        RCLCPP_INFO(this->get_logger(), "c++ hardware publisher has been started");
    }

private:
    //class rclcpp::Publisher<ros2 msg type>
    //SharedPtr is a helper function to get a sharedPtr of that class type
    rclcpp::Publisher<my_interfaces::msg::HardwareStatus>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    void publishStatus()
    {
        //create and edit message object
        auto msg = my_interfaces::msg::HardwareStatus();
        msg.temperature = 60;
        msg.are_motors_ready = false;
        msg.debug_message = "Motor overheating";
        //publish the message
        publisher_->publish(msg);
    }
};

// we need to consider the arguments when calling the node,
// so note these with argc argv
int main(int argc, char **argv)
{
    // connect to ros2 system, with the arguments found
    rclcpp::init(argc, argv);
    auto myOOPNode = std::make_shared<HardwareStatusPublisher>();
    rclcpp::spin(myOOPNode);
    // close the connection
    rclcpp::shutdown();
    return 0;
}