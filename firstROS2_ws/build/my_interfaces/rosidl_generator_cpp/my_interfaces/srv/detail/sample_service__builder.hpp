// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/SampleService.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/sample_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleService_Request_h
{
public:
  explicit Init_SampleService_Request_h(::my_interfaces::srv::SampleService_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::SampleService_Request h(::my_interfaces::srv::SampleService_Request::_h_type arg)
  {
    msg_.h = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Request msg_;
};

class Init_SampleService_Request_g
{
public:
  explicit Init_SampleService_Request_g(::my_interfaces::srv::SampleService_Request & msg)
  : msg_(msg)
  {}
  Init_SampleService_Request_h g(::my_interfaces::srv::SampleService_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_SampleService_Request_h(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Request msg_;
};

class Init_SampleService_Request_f
{
public:
  explicit Init_SampleService_Request_f(::my_interfaces::srv::SampleService_Request & msg)
  : msg_(msg)
  {}
  Init_SampleService_Request_g f(::my_interfaces::srv::SampleService_Request::_f_type arg)
  {
    msg_.f = std::move(arg);
    return Init_SampleService_Request_g(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Request msg_;
};

class Init_SampleService_Request_e
{
public:
  explicit Init_SampleService_Request_e(::my_interfaces::srv::SampleService_Request & msg)
  : msg_(msg)
  {}
  Init_SampleService_Request_f e(::my_interfaces::srv::SampleService_Request::_e_type arg)
  {
    msg_.e = std::move(arg);
    return Init_SampleService_Request_f(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Request msg_;
};

class Init_SampleService_Request_d
{
public:
  explicit Init_SampleService_Request_d(::my_interfaces::srv::SampleService_Request & msg)
  : msg_(msg)
  {}
  Init_SampleService_Request_e d(::my_interfaces::srv::SampleService_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_SampleService_Request_e(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Request msg_;
};

class Init_SampleService_Request_c
{
public:
  explicit Init_SampleService_Request_c(::my_interfaces::srv::SampleService_Request & msg)
  : msg_(msg)
  {}
  Init_SampleService_Request_d c(::my_interfaces::srv::SampleService_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_SampleService_Request_d(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Request msg_;
};

class Init_SampleService_Request_b
{
public:
  explicit Init_SampleService_Request_b(::my_interfaces::srv::SampleService_Request & msg)
  : msg_(msg)
  {}
  Init_SampleService_Request_c b(::my_interfaces::srv::SampleService_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_SampleService_Request_c(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Request msg_;
};

class Init_SampleService_Request_a
{
public:
  Init_SampleService_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SampleService_Request_b a(::my_interfaces::srv::SampleService_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_SampleService_Request_b(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SampleService_Request>()
{
  return my_interfaces::srv::builder::Init_SampleService_Request_a();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleService_Response_m
{
public:
  explicit Init_SampleService_Response_m(::my_interfaces::srv::SampleService_Response & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::SampleService_Response m(::my_interfaces::srv::SampleService_Response::_m_type arg)
  {
    msg_.m = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Response msg_;
};

class Init_SampleService_Response_l
{
public:
  explicit Init_SampleService_Response_l(::my_interfaces::srv::SampleService_Response & msg)
  : msg_(msg)
  {}
  Init_SampleService_Response_m l(::my_interfaces::srv::SampleService_Response::_l_type arg)
  {
    msg_.l = std::move(arg);
    return Init_SampleService_Response_m(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Response msg_;
};

class Init_SampleService_Response_k
{
public:
  explicit Init_SampleService_Response_k(::my_interfaces::srv::SampleService_Response & msg)
  : msg_(msg)
  {}
  Init_SampleService_Response_l k(::my_interfaces::srv::SampleService_Response::_k_type arg)
  {
    msg_.k = std::move(arg);
    return Init_SampleService_Response_l(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Response msg_;
};

class Init_SampleService_Response_j
{
public:
  explicit Init_SampleService_Response_j(::my_interfaces::srv::SampleService_Response & msg)
  : msg_(msg)
  {}
  Init_SampleService_Response_k j(::my_interfaces::srv::SampleService_Response::_j_type arg)
  {
    msg_.j = std::move(arg);
    return Init_SampleService_Response_k(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Response msg_;
};

class Init_SampleService_Response_i
{
public:
  Init_SampleService_Response_i()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SampleService_Response_j i(::my_interfaces::srv::SampleService_Response::_i_type arg)
  {
    msg_.i = std::move(arg);
    return Init_SampleService_Response_j(msg_);
  }

private:
  ::my_interfaces::srv::SampleService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::SampleService_Response>()
{
  return my_interfaces::srv::builder::Init_SampleService_Response_i();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__BUILDER_HPP_
