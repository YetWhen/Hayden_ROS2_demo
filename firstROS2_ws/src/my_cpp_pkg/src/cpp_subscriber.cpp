// created at 2024/05/22
// author: Diwen Ye (Hayden)
// a simple c++ subscriber, can serve as subscriber template

// vscode will detect error in this following include code
// ctrl+shift+p, search&edit C/C++ configuration (JSON)
// add to "includePath" with "/opt/ros/<DISTRO_YOU_USE>/include/**"
#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

// public inherite the Node class from rclcpp
class SmartphoneNode : public rclcpp::Node
{
public:
    // call parent class' constructor Node(<name>) for constructor MyNode()
    // if you want argument, MyNode(auto arg): Node(arg) {}
    // the counter(0) here at the end is initializing the variable
    SmartphoneNode() : Node("cpp_subscriber")
    {   
        //if there's inputs in callback function to bind, 
        //std::bind() takes 3rd argument std::placeholders::_1 (or _2 for 2 inputs, _3, _n)
        subscriber_ = this->create_subscription<example_interfaces::msg::String>(
            "robot_news",10,
            std::bind(&SmartphoneNode::callbackRobotNews, this, std::placeholders::_1));
        RCLCPP_INFO(this->get_logger(), "c++ subscriber has been started");
    }

private:
    void callbackRobotNews(const example_interfaces::msg::String::SharedPtr msg)
    {
        //msg->data is already a std::string, we use std::string.c_str() to reformat it
        RCLCPP_INFO(this->get_logger(), "%s", msg->data.c_str());
    }

    rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_;
};

// we need to consider the arguments when calling the node,
// so note these with argc argv
int main(int argc, char **argv)
{
    // connect to ros2 system, with the arguments found
    rclcpp::init(argc, argv);
    auto myOOPNode = std::make_shared<SmartphoneNode>();
    rclcpp::spin(myOOPNode);
    // close the connection
    rclcpp::shutdown();
    return 0;
}