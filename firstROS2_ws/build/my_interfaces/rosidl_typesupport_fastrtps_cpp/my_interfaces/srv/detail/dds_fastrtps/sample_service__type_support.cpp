// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_interfaces:srv/SampleService.idl
// generated code does not contain a copyright notice
#include "my_interfaces/srv/detail/sample_service__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_interfaces/srv/detail/sample_service__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace my_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
cdr_serialize(
  const my_interfaces::srv::SampleService_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: a
  cdr << ros_message.a;
  // Member: b
  cdr << ros_message.b;
  // Member: c
  cdr << ros_message.c;
  // Member: d
  cdr << ros_message.d;
  // Member: e
  cdr << ros_message.e;
  // Member: f
  cdr << ros_message.f;
  // Member: g
  cdr << (ros_message.g ? true : false);
  // Member: h
  cdr << ros_message.h;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_interfaces::srv::SampleService_Request & ros_message)
{
  // Member: a
  cdr >> ros_message.a;

  // Member: b
  cdr >> ros_message.b;

  // Member: c
  cdr >> ros_message.c;

  // Member: d
  cdr >> ros_message.d;

  // Member: e
  cdr >> ros_message.e;

  // Member: f
  cdr >> ros_message.f;

  // Member: g
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.g = tmp ? true : false;
  }

  // Member: h
  cdr >> ros_message.h;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
get_serialized_size(
  const my_interfaces::srv::SampleService_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b
  {
    size_t item_size = sizeof(ros_message.b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c
  {
    size_t item_size = sizeof(ros_message.c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d
  {
    size_t item_size = sizeof(ros_message.d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: e
  {
    size_t item_size = sizeof(ros_message.e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f
  {
    size_t item_size = sizeof(ros_message.f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: g
  {
    size_t item_size = sizeof(ros_message.g);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: h
  {
    size_t item_size = sizeof(ros_message.h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
max_serialized_size_SampleService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: f
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: g
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: h
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_interfaces::srv::SampleService_Request;
    is_plain =
      (
      offsetof(DataType, h) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SampleService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_interfaces::srv::SampleService_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SampleService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_interfaces::srv::SampleService_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SampleService_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_interfaces::srv::SampleService_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SampleService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SampleService_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SampleService_Request__callbacks = {
  "my_interfaces::srv",
  "SampleService_Request",
  _SampleService_Request__cdr_serialize,
  _SampleService_Request__cdr_deserialize,
  _SampleService_Request__get_serialized_size,
  _SampleService_Request__max_serialized_size
};

static rosidl_message_type_support_t _SampleService_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SampleService_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::srv::SampleService_Request>()
{
  return &my_interfaces::srv::typesupport_fastrtps_cpp::_SampleService_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, srv, SampleService_Request)() {
  return &my_interfaces::srv::typesupport_fastrtps_cpp::_SampleService_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace my_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
cdr_serialize(
  const my_interfaces::srv::SampleService_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: i
  cdr << ros_message.i;
  // Member: j
  cdr << ros_message.j;
  // Member: k
  cdr << ros_message.k;
  // Member: l
  cdr << ros_message.l;
  // Member: m
  cdr << ros_message.m;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_interfaces::srv::SampleService_Response & ros_message)
{
  // Member: i
  cdr >> ros_message.i;

  // Member: j
  cdr >> ros_message.j;

  // Member: k
  cdr >> ros_message.k;

  // Member: l
  cdr >> ros_message.l;

  // Member: m
  cdr >> ros_message.m;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
get_serialized_size(
  const my_interfaces::srv::SampleService_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: i
  {
    size_t item_size = sizeof(ros_message.i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: j
  {
    size_t item_size = sizeof(ros_message.j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k
  {
    size_t item_size = sizeof(ros_message.k);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l
  {
    size_t item_size = sizeof(ros_message.l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.m.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_interfaces
max_serialized_size_SampleService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: i
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: j
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: k
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: m
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_interfaces::srv::SampleService_Response;
    is_plain =
      (
      offsetof(DataType, m) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SampleService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_interfaces::srv::SampleService_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SampleService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_interfaces::srv::SampleService_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SampleService_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_interfaces::srv::SampleService_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SampleService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SampleService_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SampleService_Response__callbacks = {
  "my_interfaces::srv",
  "SampleService_Response",
  _SampleService_Response__cdr_serialize,
  _SampleService_Response__cdr_deserialize,
  _SampleService_Response__get_serialized_size,
  _SampleService_Response__max_serialized_size
};

static rosidl_message_type_support_t _SampleService_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SampleService_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<my_interfaces::srv::SampleService_Response>()
{
  return &my_interfaces::srv::typesupport_fastrtps_cpp::_SampleService_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, srv, SampleService_Response)() {
  return &my_interfaces::srv::typesupport_fastrtps_cpp::_SampleService_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace my_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SampleService__callbacks = {
  "my_interfaces::srv",
  "SampleService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, srv, SampleService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, srv, SampleService_Response)(),
};

static rosidl_service_type_support_t _SampleService__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SampleService__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace my_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<my_interfaces::srv::SampleService>()
{
  return &my_interfaces::srv::typesupport_fastrtps_cpp::_SampleService__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_interfaces, srv, SampleService)() {
  return &my_interfaces::srv::typesupport_fastrtps_cpp::_SampleService__handle;
}

#ifdef __cplusplus
}
#endif
