// created at 2024/05/22
// author: Diwen Ye (Hayden)
// a simple publisher example in CPP, can serve for template

// vscode will detect error in this following include code
// ctrl+shift+p, search&edit C/C++ configuration (JSON)
// add to "includePath" with "/opt/ros/<DISTRO_YOU_USE>/include/**"
#include "rclcpp/rclcpp.hpp"
//need to update the dependency in package.xml & CMakeList.txt
#include "example_interfaces/msg/string.hpp"

// public inherite the Node class from rclcpp
class RobotNewsStationNode : public rclcpp::Node
{
public:
    RobotNewsStationNode() : Node("cpp_robot_news_station"), robot_name("CPP_Robot")
    {
        //this refer to the class inherited, the parent class Node
        //note that the topic has the same name as python one, they'll publish to the same topic
        publisher_  = this->create_publisher<example_interfaces::msg::String>("robot_news",10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&RobotNewsStationNode::publishNews, this));

        RCLCPP_INFO(this->get_logger(), "c++ publisher has been started");
    }

private:
    //class rclcpp::Publisher<ros2 msg type>
    //SharedPtr is a helper function to get a sharedPtr of that class type
    rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher_;
    std::string robot_name;
    rclcpp::TimerBase::SharedPtr timer_;
    void publishNews()
    {
        auto msg = example_interfaces::msg::String();
        msg.data = std::string("Hi, this is ") + robot_name + std::string(" from c++ publisher");
        publisher_->publish(msg);
    }
};

// we need to consider the arguments when calling the node,
// so note these with argc argv
int main(int argc, char **argv)
{
    // connect to ros2 system, with the arguments found
    rclcpp::init(argc, argv);
    auto myOOPNode = std::make_shared<RobotNewsStationNode>();
    rclcpp::spin(myOOPNode);
    // close the connection
    rclcpp::shutdown();
    return 0;
}