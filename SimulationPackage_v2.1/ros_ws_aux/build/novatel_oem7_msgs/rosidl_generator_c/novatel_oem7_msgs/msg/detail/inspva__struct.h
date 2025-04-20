// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSPVA.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVA__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVA__STRUCT_H_

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
// Member 'status'
#include "novatel_oem7_msgs/msg/detail/inertial_solution_status__struct.h"

/// Struct defined in msg/INSPVA in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSPVA
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  double latitude;
  double longitude;
  double height;
  double north_velocity;
  double east_velocity;
  double up_velocity;
  double roll;
  double pitch;
  double azimuth;
  novatel_oem7_msgs__msg__InertialSolutionStatus status;
} novatel_oem7_msgs__msg__INSPVA;

// Struct for a sequence of novatel_oem7_msgs__msg__INSPVA.
typedef struct novatel_oem7_msgs__msg__INSPVA__Sequence
{
  novatel_oem7_msgs__msg__INSPVA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSPVA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVA__STRUCT_H_
