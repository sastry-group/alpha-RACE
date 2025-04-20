// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/LowVoltageSystemReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__STRUCT_H_

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

/// Struct defined in msg/LowVoltageSystemReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__LowVoltageSystemReport
{
  std_msgs__msg__Header header;
  /// Volts
  float dbw_battery_volts;
  /// Volts
  float vehicle_battery_volts;
  /// Amps
  float vehicle_battery_current;
  /// Amps
  float vehicle_alternator_current;
  /// Amps
  float dcdc_current;
  /// Amps
  float alternator_current;
  /// On/Off
  bool aux_inverter_contactor;
} raptor_dbw_msgs__msg__LowVoltageSystemReport;

// Struct for a sequence of raptor_dbw_msgs__msg__LowVoltageSystemReport.
typedef struct raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence
{
  raptor_dbw_msgs__msg__LowVoltageSystemReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__LowVoltageSystemReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_VOLTAGE_SYSTEM_REPORT__STRUCT_H_
