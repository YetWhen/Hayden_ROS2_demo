// created at 2024/05/25
// author: Diwen Ye (Hayden)
// Cpp client, send two integers and get response, can serve as template

#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    //create a client
    auto node = std::make_shared<rclcpp::Node>("cpp_add_client");
    auto client = node->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
    //wait for server to be up
    while (!client->wait_for_service(std::chrono::seconds(1)))
    {
        RCLCPP_WARN(node->get_logger(), "Waiting for the server to be up...");
    }
    //create and edit request
    auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
    request->a = 3;
    request->b = 8;
    //file an async request and wait for it to complete
    auto future_res = client->async_send_request(request);
    if(rclcpp::spin_until_future_complete(node, future_res) == rclcpp::FutureReturnCode::SUCCESS)
    {
        RCLCPP_INFO(node->get_logger(), "%ld + %ld = %ld", request->a, request->b, future_res.get()->sum);
    }
    else 
    {
        RCLCPP_ERROR(node->get_logger(), "Error while calling service");
    }
    rclcpp::shutdown();
    return 0;
}