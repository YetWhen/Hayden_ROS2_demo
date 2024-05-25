// created at 2024/05/25
// author: Diwen Ye (Hayden)
// Cpp server, add two integers, can serve as template

#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using std::placeholders::_1;
using std::placeholders::_2;
// public inherite the Node class from rclcpp
class AddTwoIntsServerNode : public rclcpp::Node
{
public:
    AddTwoIntsServerNode() : Node("add_two_ints_server")
    {
        //node->create_service<service_type>(<srv_name>,<callback func>)
        //when the server get request, it will call the callback function
        //std::placeholders::_1, _2 are for arguments of callback function
        server_ = this->create_service<example_interfaces::srv::AddTwoInts>(
            "add_two_ints",
            std::bind(&AddTwoIntsServerNode::callbackAddTwoInts,this,_1,_2));
        RCLCPP_INFO(this->get_logger(), "Service server has been started.");
    }

private: 
    //input: sharedPtr of request and response class
    void callbackAddTwoInts(const example_interfaces::srv::AddTwoInts::Request::SharedPtr request,
                            const example_interfaces::srv::AddTwoInts::Response::SharedPtr response)
    {
        //response will be automatically sent back to client
        response->sum = request->a + request->b;
        RCLCPP_INFO(this->get_logger(), "%ld + %ld = %ld", request->a, request->b, response->sum);
    }
    rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr server_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto myOOPNode = std::make_shared<AddTwoIntsServerNode>();
    rclcpp::spin(myOOPNode);
    rclcpp::shutdown();
    return 0;
}