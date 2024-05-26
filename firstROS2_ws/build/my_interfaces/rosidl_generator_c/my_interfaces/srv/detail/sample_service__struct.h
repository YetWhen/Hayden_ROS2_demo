// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interfaces:srv/SampleService.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__STRUCT_H_
#define MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SampleService in the package my_interfaces.
typedef struct my_interfaces__srv__SampleService_Request
{
  double a;
  float b;
  int8_t c;
  int16_t d;
  int64_t e;
  uint8_t f;
  bool g;
  uint8_t h;
} my_interfaces__srv__SampleService_Request;

// Struct for a sequence of my_interfaces__srv__SampleService_Request.
typedef struct my_interfaces__srv__SampleService_Request__Sequence
{
  my_interfaces__srv__SampleService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__SampleService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'm'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SampleService in the package my_interfaces.
typedef struct my_interfaces__srv__SampleService_Response
{
  uint8_t i;
  uint16_t j;
  uint32_t k;
  uint64_t l;
  rosidl_runtime_c__String m;
} my_interfaces__srv__SampleService_Response;

// Struct for a sequence of my_interfaces__srv__SampleService_Response.
typedef struct my_interfaces__srv__SampleService_Response__Sequence
{
  my_interfaces__srv__SampleService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interfaces__srv__SampleService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACES__SRV__DETAIL__SAMPLE_SERVICE__STRUCT_H_
