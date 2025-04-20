// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/RAWIMU.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__RAWIMU__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__RAWIMU__STRUCT_H_

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
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/RAWIMU in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__RAWIMU
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  uint32_t gnss_week;
  double gnss_seconds;
  uint32_t status;
  geometry_msgs__msg__Vector3 linear_acceleration;
  geometry_msgs__msg__Vector3 angular_velocity;
} novatel_oem7_msgs__msg__RAWIMU;

// Struct for a sequence of novatel_oem7_msgs__msg__RAWIMU.
typedef struct novatel_oem7_msgs__msg__RAWIMU__Sequence
{
  novatel_oem7_msgs__msg__RAWIMU * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__RAWIMU__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__RAWIMU__STRUCT_H_
