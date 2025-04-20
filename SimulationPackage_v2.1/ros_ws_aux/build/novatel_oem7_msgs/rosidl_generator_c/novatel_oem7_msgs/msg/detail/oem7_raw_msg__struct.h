// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/Oem7RawMsg.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_RAW_MSG__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_RAW_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'message_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Oem7RawMsg in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__Oem7RawMsg
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint8__Sequence message_data;
} novatel_oem7_msgs__msg__Oem7RawMsg;

// Struct for a sequence of novatel_oem7_msgs__msg__Oem7RawMsg.
typedef struct novatel_oem7_msgs__msg__Oem7RawMsg__Sequence
{
  novatel_oem7_msgs__msg__Oem7RawMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__Oem7RawMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_RAW_MSG__STRUCT_H_
