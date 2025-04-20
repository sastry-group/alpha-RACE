// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/AcceleratorPedalReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__STRUCT_H_

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

/// Struct defined in msg/AcceleratorPedalReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__AcceleratorPedalReport
{
  std_msgs__msg__Header header;
  /// Accelerator pedal
  /// 0 to 100%
  float pedal_input;
  float pedal_output;
  /// Status
  bool enabled;
  bool ignore_driver;
  /// Driver activity
  bool driver_activity;
  bool fault_accel_pedal_system;
  /// Faults
  bool fault_ch1;
  bool fault_ch2;
  uint8_t rolling_counter;
  /// 0 to 100%
  float torque_actual;
  raptor_dbw_msgs__msg__ActuatorControlMode control_type;
} raptor_dbw_msgs__msg__AcceleratorPedalReport;

// Struct for a sequence of raptor_dbw_msgs__msg__AcceleratorPedalReport.
typedef struct raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence
{
  raptor_dbw_msgs__msg__AcceleratorPedalReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__AcceleratorPedalReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACCELERATOR_PEDAL_REPORT__STRUCT_H_
