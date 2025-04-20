// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/CORRIMU.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__CORRIMU__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__CORRIMU__STRUCT_H_

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

/// Struct defined in msg/CORRIMU in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__CORRIMU
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  uint32_t imu_data_count;
  double pitch_rate;
  double roll_rate;
  double yaw_rate;
  double lateral_acc;
  double longitudinal_acc;
  double vertical_acc;
  uint32_t reserved1;
  uint32_t reserved2;
} novatel_oem7_msgs__msg__CORRIMU;

// Struct for a sequence of novatel_oem7_msgs__msg__CORRIMU.
typedef struct novatel_oem7_msgs__msg__CORRIMU__Sequence
{
  novatel_oem7_msgs__msg__CORRIMU * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__CORRIMU__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__CORRIMU__STRUCT_H_
