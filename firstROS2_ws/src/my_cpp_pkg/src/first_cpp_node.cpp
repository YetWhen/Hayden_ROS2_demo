// created at 2024/05/19
// author: Diwen Ye (Hayden)
// First cpp node, for demonstration of how to create C++ node in ROS2

// vscode will detect error in this following include code
// ctrl+shift+p, search&edit C/C++ configuration (JSON)
// add to "includePath" with "/opt/ros/<DISTRO_YOU_USE>/include/**"
#include "rclcpp/rclcpp.hpp"

// public inherite the Node class from rclcpp
class MyNode : public rclcpp::Node
{
public:
    // call parent class' constructor Node(<name>) for constructor MyNode()
    // if you want argument, MyNode(auto arg): Node(arg) {}
    // the counter(0) here at the end is initializing the variable
    MyNode() : Node("cpp_test_oop"), counter(0)
    {
        // the get_logger() function (public) is inherited by MyNode
        // therefore this->get_logger()
        RCLCPP_INFO(this->get_logger(), "[oop] Hello C++ Node");
        // arguments: 1 sec with std::chrono::seconds() function,
        // bind the function to be called with current object (this)
        timer = this->create_wall_timer(std::chrono::seconds(1),
                                        std::bind(&MyNode::timerCallback, this));
    }

private:
    void timerCallback()
    {
        counter ++;
        RCLCPP_INFO(this->get_logger(), "Hello %d", counter);
    }
    // the SharedPtr is a helper function added in most of the ros2 obejcts
    // so that user won't need to refer to std::shared_ptr<super_long_type_name> all the time
    rclcpp::TimerBase::SharedPtr timer;
    int counter;
};

// we need to consider the arguments when calling the node,
// so note these with argc argv
int main(int argc, char **argv)
{
    // connect to ros2 system, with the arguments found
    rclcpp::init(argc, argv);

    // create a node instance from rcl library
    // std::make_shared constructs an object of <type> with (arguments), using <type>'s constructor
    // and wraps it in shared_ptr,  shared_ptr allows multiple pointers sharing the ownership
    auto myNode = std::make_shared<rclcpp::Node>("cpp_test");
    // RCLCPP_INFO pass a piece of information through Logger provided
    RCLCPP_INFO(myNode->get_logger(), "[main] Hello C++ Node");

    // OOP
    auto myOOPNode = std::make_shared<MyNode>();
    // hold the node against program shutdown, ctrl+c to exit
    // rclcpp::spin(myNode);
    rclcpp::spin(myOOPNode);
    // close the connection
    rclcpp::shutdown();
    return 0;
}