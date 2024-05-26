// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interfaces:srv/SampleService.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__TRAITS_HPP_
#define MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_interfaces/srv/detail/sample_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SampleService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << ", ";
  }

  // member: e
  {
    out << "e: ";
    rosidl_generator_traits::value_to_yaml(msg.e, out);
    out << ", ";
  }

  // member: f
  {
    out << "f: ";
    rosidl_generator_traits::character_value_to_yaml(msg.f, out);
    out << ", ";
  }

  // member: g
  {
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << ", ";
  }

  // member: h
  {
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SampleService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }

  // member: e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e: ";
    rosidl_generator_traits::value_to_yaml(msg.e, out);
    out << "\n";
  }

  // member: f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f: ";
    rosidl_generator_traits::character_value_to_yaml(msg.f, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SampleService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::srv::SampleService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::srv::SampleService_Request & msg)
{
  return my_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::srv::SampleService_Request>()
{
  return "my_interfaces::srv::SampleService_Request";
}

template<>
inline const char * name<my_interfaces::srv::SampleService_Request>()
{
  return "my_interfaces/srv/SampleService_Request";
}

template<>
struct has_fixed_size<my_interfaces::srv::SampleService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interfaces::srv::SampleService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interfaces::srv::SampleService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SampleService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: i
  {
    out << "i: ";
    rosidl_generator_traits::value_to_yaml(msg.i, out);
    out << ", ";
  }

  // member: j
  {
    out << "j: ";
    rosidl_generator_traits::value_to_yaml(msg.j, out);
    out << ", ";
  }

  // member: k
  {
    out << "k: ";
    rosidl_generator_traits::value_to_yaml(msg.k, out);
    out << ", ";
  }

  // member: l
  {
    out << "l: ";
    rosidl_generator_traits::value_to_yaml(msg.l, out);
    out << ", ";
  }

  // member: m
  {
    out << "m: ";
    rosidl_generator_traits::value_to_yaml(msg.m, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SampleService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i: ";
    rosidl_generator_traits::value_to_yaml(msg.i, out);
    out << "\n";
  }

  // member: j
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j: ";
    rosidl_generator_traits::value_to_yaml(msg.j, out);
    out << "\n";
  }

  // member: k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k: ";
    rosidl_generator_traits::value_to_yaml(msg.k, out);
    out << "\n";
  }

  // member: l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l: ";
    rosidl_generator_traits::value_to_yaml(msg.l, out);
    out << "\n";
  }

  // member: m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m: ";
    rosidl_generator_traits::value_to_yaml(msg.m, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SampleService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_interfaces::srv::SampleService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_interfaces::srv::SampleService_Response & msg)
{
  return my_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_interfaces::srv::SampleService_Response>()
{
  return "my_interfaces::srv::SampleService_Response";
}

template<>
inline const char * name<my_interfaces::srv::SampleService_Response>()
{
  return "my_interfaces/srv/SampleService_Response";
}

template<>
struct has_fixed_size<my_interfaces::srv::SampleService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interfaces::srv::SampleService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interfaces::srv::SampleService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interfaces::srv::SampleService>()
{
  return "my_interfaces::srv::SampleService";
}

template<>
inline const char * name<my_interfaces::srv::SampleService>()
{
  return "my_interfaces/srv/SampleService";
}

template<>
struct has_fixed_size<my_interfaces::srv::SampleService>
  : std::integral_constant<
    bool,
    has_fixed_size<my_interfaces::srv::SampleService_Request>::value &&
    has_fixed_size<my_interfaces::srv::SampleService_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_interfaces::srv::SampleService>
  : std::integral_constant<
    bool,
    has_bounded_size<my_interfaces::srv::SampleService_Request>::value &&
    has_bounded_size<my_interfaces::srv::SampleService_Response>::value
  >
{
};

template<>
struct is_service<my_interfaces::srv::SampleService>
  : std::true_type
{
};

template<>
struct is_service_request<my_interfaces::srv::SampleService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_interfaces::srv::SampleService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__TRAITS_HPP_
