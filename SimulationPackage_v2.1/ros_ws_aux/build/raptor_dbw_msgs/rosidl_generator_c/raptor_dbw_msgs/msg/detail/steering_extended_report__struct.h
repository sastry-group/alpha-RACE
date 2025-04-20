// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/SteeringExtendedReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_EXTENDED_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_EXTENDED_REPORT__STRUCT_H_

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

/// Struct defined in msg/SteeringExtendedReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__SteeringExtendedReport
{
  std_msgs__msg__Header header;
  float steering_motor_ang_1;
  float steering_motor_ang_2;
  float steering_motor_ang_3;
} raptor_dbw_msgs__msg__SteeringExtendedReport;

// Struct for a sequence of raptor_dbw_msgs__msg__SteeringExtendedReport.
typedef struct raptor_dbw_msgs__msg__SteeringExtendedReport__Sequence
{
  raptor_dbw_msgs__msg__SteeringExtendedReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__SteeringExtendedReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_EXTENDED_REPORT__STRUCT_H_
