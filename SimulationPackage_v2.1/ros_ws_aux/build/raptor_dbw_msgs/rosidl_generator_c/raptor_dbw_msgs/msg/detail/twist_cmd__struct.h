// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/TwistCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/TwistCmd in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__TwistCmd
{
  geometry_msgs__msg__Twist twist;
  /// m/s^2, zero = no limit
  float accel_limit;
  /// m/s^2, zero = no limit
  float decel_limit;
} raptor_dbw_msgs__msg__TwistCmd;

// Struct for a sequence of raptor_dbw_msgs__msg__TwistCmd.
typedef struct raptor_dbw_msgs__msg__TwistCmd__Sequence
{
  raptor_dbw_msgs__msg__TwistCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__TwistCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__TWIST_CMD__STRUCT_H_
