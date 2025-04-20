// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'control_type'
#include "raptor_dbw_msgs/msg/detail/actuator_control_mode__struct.h"
// Member 'park_brake_cmd'
#include "raptor_dbw_msgs/msg/detail/parking_brake__struct.h"

/// Struct defined in msg/BrakeCmd in the package raptor_dbw_msgs.
/**
  * Brake pedal (%)
 */
typedef struct raptor_dbw_msgs__msg__BrakeCmd
{
  float pedal_cmd;
  /// Enable
  bool enable;
  /// Watchdog counter (optional)
  uint8_t rolling_counter;
  /// %-torque
  float torque_cmd;
  /// m/s^2
  float decel_limit;
  raptor_dbw_msgs__msg__ActuatorControlMode control_type;
  /// m/s^3
  float decel_negative_jerk_limit;
  raptor_dbw_msgs__msg__ParkingBrake park_brake_cmd;
} raptor_dbw_msgs__msg__BrakeCmd;

// Struct for a sequence of raptor_dbw_msgs__msg__BrakeCmd.
typedef struct raptor_dbw_msgs__msg__BrakeCmd__Sequence
{
  raptor_dbw_msgs__msg__BrakeCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__BrakeCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__BRAKE_CMD__STRUCT_H_
