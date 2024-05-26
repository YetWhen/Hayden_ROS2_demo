// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:srv/SampleService.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__STRUCT_HPP_
#define MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interfaces__srv__SampleService_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__srv__SampleService_Request __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SampleService_Request_
{
  using Type = SampleService_Request_<ContainerAllocator>;

  explicit SampleService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0f;
      this->c = 0;
      this->d = 0;
      this->e = 0ll;
      this->f = 0;
      this->g = false;
      this->h = 0;
    }
  }

  explicit SampleService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0f;
      this->c = 0;
      this->d = 0;
      this->e = 0ll;
      this->f = 0;
      this->g = false;
      this->h = 0;
    }
  }

  // field types and members
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    float;
  _b_type b;
  using _c_type =
    int8_t;
  _c_type c;
  using _d_type =
    int16_t;
  _d_type d;
  using _e_type =
    int64_t;
  _e_type e;
  using _f_type =
    unsigned char;
  _f_type f;
  using _g_type =
    bool;
  _g_type g;
  using _h_type =
    uint8_t;
  _h_type h;

  // setters for named parameter idiom
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const float & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const int8_t & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__d(
    const int16_t & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__e(
    const int64_t & _arg)
  {
    this->e = _arg;
    return *this;
  }
  Type & set__f(
    const unsigned char & _arg)
  {
    this->f = _arg;
    return *this;
  }
  Type & set__g(
    const bool & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__h(
    const uint8_t & _arg)
  {
    this->h = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::srv::SampleService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::srv::SampleService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::srv::SampleService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::srv::SampleService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::srv::SampleService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::srv::SampleService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::srv::SampleService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::srv::SampleService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::srv::SampleService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::srv::SampleService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__srv__SampleService_Request
    std::shared_ptr<my_interfaces::srv::SampleService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__srv__SampleService_Request
    std::shared_ptr<my_interfaces::srv::SampleService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SampleService_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->e != other.e) {
      return false;
    }
    if (this->f != other.f) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->h != other.h) {
      return false;
    }
    return true;
  }
  bool operator!=(const SampleService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SampleService_Request_

// alias to use template instance with default allocator
using SampleService_Request =
  my_interfaces::srv::SampleService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_interfaces


#ifndef _WIN32
# define DEPRECATED__my_interfaces__srv__SampleService_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__srv__SampleService_Response __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SampleService_Response_
{
  using Type = SampleService_Response_<ContainerAllocator>;

  explicit SampleService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->i = 0;
      this->j = 0;
      this->k = 0ul;
      this->l = 0ull;
      this->m = "";
    }
  }

  explicit SampleService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->i = 0;
      this->j = 0;
      this->k = 0ul;
      this->l = 0ull;
      this->m = "";
    }
  }

  // field types and members
  using _i_type =
    uint8_t;
  _i_type i;
  using _j_type =
    uint16_t;
  _j_type j;
  using _k_type =
    uint32_t;
  _k_type k;
  using _l_type =
    uint64_t;
  _l_type l;
  using _m_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _m_type m;

  // setters for named parameter idiom
  Type & set__i(
    const uint8_t & _arg)
  {
    this->i = _arg;
    return *this;
  }
  Type & set__j(
    const uint16_t & _arg)
  {
    this->j = _arg;
    return *this;
  }
  Type & set__k(
    const uint32_t & _arg)
  {
    this->k = _arg;
    return *this;
  }
  Type & set__l(
    const uint64_t & _arg)
  {
    this->l = _arg;
    return *this;
  }
  Type & set__m(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->m = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::srv::SampleService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::srv::SampleService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::srv::SampleService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::srv::SampleService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::srv::SampleService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::srv::SampleService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::srv::SampleService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::srv::SampleService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::srv::SampleService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::srv::SampleService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__srv__SampleService_Response
    std::shared_ptr<my_interfaces::srv::SampleService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__srv__SampleService_Response
    std::shared_ptr<my_interfaces::srv::SampleService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SampleService_Response_ & other) const
  {
    if (this->i != other.i) {
      return false;
    }
    if (this->j != other.j) {
      return false;
    }
    if (this->k != other.k) {
      return false;
    }
    if (this->l != other.l) {
      return false;
    }
    if (this->m != other.m) {
      return false;
    }
    return true;
  }
  bool operator!=(const SampleService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SampleService_Response_

// alias to use template instance with default allocator
using SampleService_Response =
  my_interfaces::srv::SampleService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_interfaces

namespace my_interfaces
{

namespace srv
{

struct SampleService
{
  using Request = my_interfaces::srv::SampleService_Request;
  using Response = my_interfaces::srv::SampleService_Response;
};

}  // namespace srv

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__STRUCT_HPP_
