// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/TIME.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__STRUCT_H_

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
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.h"

/// Struct defined in msg/TIME in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__TIME
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  uint32_t clock_status;
  double offset;
  double offset_std;
  double utc_offset;
  uint32_t utc_year;
  uint8_t utc_month;
  uint8_t utc_day;
  uint8_t utc_hour;
  uint8_t utc_min;
  uint32_t utc_msec;
  uint32_t utc_status;
} novatel_oem7_msgs__msg__TIME;

// Struct for a sequence of novatel_oem7_msgs__msg__TIME.
typedef struct novatel_oem7_msgs__msg__TIME__Sequence
{
  novatel_oem7_msgs__msg__TIME * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__TIME__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__TIME__STRUCT_H_
