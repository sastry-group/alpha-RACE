// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/BESTVEL.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__STRUCT_H_

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
// Member 'sol_status'
#include "novatel_oem7_msgs/msg/detail/solution_status__struct.h"
// Member 'vel_type'
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__struct.h"

/// Struct defined in msg/BESTVEL in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__BESTVEL
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  novatel_oem7_msgs__msg__SolutionStatus sol_status;
  novatel_oem7_msgs__msg__PositionOrVelocityType vel_type;
  float latency;
  float diff_age;
  double hor_speed;
  double trk_gnd;
  double ver_speed;
  float reserved;
} novatel_oem7_msgs__msg__BESTVEL;

// Struct for a sequence of novatel_oem7_msgs__msg__BESTVEL.
typedef struct novatel_oem7_msgs__msg__BESTVEL__Sequence
{
  novatel_oem7_msgs__msg__BESTVEL * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__BESTVEL__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTVEL__STRUCT_H_
