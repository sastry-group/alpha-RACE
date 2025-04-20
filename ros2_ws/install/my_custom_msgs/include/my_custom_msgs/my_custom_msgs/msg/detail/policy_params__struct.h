// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_msgs:msg/PolicyParams.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__STRUCT_H_
#define MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PolicyParams in the package my_custom_msgs.
typedef struct my_custom_msgs__msg__PolicyParams
{
  float sf1;
  float sf2;
  float speed_factor;
  float lookahead_factor;
  float blocking_factor;
} my_custom_msgs__msg__PolicyParams;

// Struct for a sequence of my_custom_msgs__msg__PolicyParams.
typedef struct my_custom_msgs__msg__PolicyParams__Sequence
{
  my_custom_msgs__msg__PolicyParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_msgs__msg__PolicyParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_MSGS__MSG__DETAIL__POLICY_PARAMS__STRUCT_H_
