// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/Oem7Header.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OEM7MSGTYPE_LOG'.
enum
{
  novatel_oem7_msgs__msg__Oem7Header__OEM7MSGTYPE_LOG = 0
};

// Include directives for member types
// Member 'message_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Oem7Header in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__Oem7Header
{
  rosidl_runtime_c__String message_name;
  uint16_t message_id;
  uint8_t message_type;
  uint32_t sequence_number;
  uint8_t time_status;
  uint16_t gps_week_number;
  uint32_t gps_week_milliseconds;
  uint8_t idle_time;
} novatel_oem7_msgs__msg__Oem7Header;

// Struct for a sequence of novatel_oem7_msgs__msg__Oem7Header.
typedef struct novatel_oem7_msgs__msg__Oem7Header__Sequence
{
  novatel_oem7_msgs__msg__Oem7Header * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__Oem7Header__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__OEM7_HEADER__STRUCT_H_
