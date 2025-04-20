// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/SteeringReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_H_

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
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.h"

/// Struct defined in msg/SteeringReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__SteeringReport
{
  std_msgs__msg__Header header;
  /// Steering Wheel
  /// degrees
  float steering_wheel_angle;
  /// degrees
  float steering_wheel_angle_cmd;
  /// 0 to 100%
  float steering_wheel_torque;
  /// Status
  bool enabled;
  bool driver_activity;
  bool fault_steering_system;
  bool overheat_prevention_mode;
  uint8_t rolling_counter;
  raptor_dbw_msgs__msg__ActuatorControlMode control_type;
  bool steering_overheat_warning;
} raptor_dbw_msgs__msg__SteeringReport;

// Struct for a sequence of raptor_dbw_msgs__msg__SteeringReport.
typedef struct raptor_dbw_msgs__msg__SteeringReport__Sequence
{
  raptor_dbw_msgs__msg__SteeringReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__SteeringReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__STEERING_REPORT__STRUCT_H_
