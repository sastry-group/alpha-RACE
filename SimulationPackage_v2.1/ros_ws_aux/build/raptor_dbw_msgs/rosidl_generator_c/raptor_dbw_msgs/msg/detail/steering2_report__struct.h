// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/Steering2Report.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__STRUCT_H_

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

/// Struct defined in msg/Steering2Report in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__Steering2Report
{
  std_msgs__msg__Header header;
  /// units are 1/m
  float vehicle_curvature_actual;
  /// %-Torque
  float max_torque_driver;
  /// %-Torque
  float max_torque_motor;
} raptor_dbw_msgs__msg__Steering2Report;

// Struct for a sequence of raptor_dbw_msgs__msg__Steering2Report.
typedef struct raptor_dbw_msgs__msg__Steering2Report__Sequence
{
  raptor_dbw_msgs__msg__Steering2Report * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__Steering2Report__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING2_REPORT__STRUCT_H_
