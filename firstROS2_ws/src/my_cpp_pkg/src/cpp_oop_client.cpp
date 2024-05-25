// created at 2024/05/25
// author: Diwen Ye (Hayden)
// Cpp client, send two integers and get response, can serve as template

#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

// public inherite the Node class from rclcpp
class AddTwoIntsClientNode : public rclcpp::Node
{
public:
    AddTwoIntsClientNode() : Node("add_two_ints_server")
    {
        //----------bad practise--------------//
        // if we call the function directly here
        // the function will wait until the future_res.get() finish
        // so the constructor need to wait a long time to exit and be called else where
        
        // callAddTwoIntsService(3,5);
        //-----------good practise------------//
        // we need to put any async parts in a seperate thread
        // so that the constructor can exit first and let the function be finished in thread later
        thread1_ = std::thread(std::bind(&AddTwoIntsClientNode::callAddTwoIntsService, this, 3, 5));
    }
    void callAddTwoIntsService(int a, int b)
    {
        auto client  = this->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
        while (!client->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the server to be up...");
        }
        //create and edit request
        auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
        request->a = a;
        request->b = b;
        //file an async request and wait for it to complete
        //different from python one, the logic is to wait & pause the thread while waiting
        //during waiting, we can send other requests by calling function in new threads.
        auto future_res = client->async_send_request(request);
        try
        {
            auto response = future_res.get();
            RCLCPP_INFO(this->get_logger(), "%d + %d = %ld", a, b, response->sum);
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Service call failed");
        }
    }
private: 
    std::thread thread1_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto myOOPNode = std::make_shared<AddTwoIntsClientNode>();
    rclcpp::spin(myOOPNode);
    rclcpp::shutdown();
    return 0;
}