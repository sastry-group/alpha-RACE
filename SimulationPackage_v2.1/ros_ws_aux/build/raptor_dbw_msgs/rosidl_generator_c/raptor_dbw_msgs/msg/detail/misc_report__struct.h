// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__STRUCT_H_

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

/// Struct defined in msg/MiscReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__MiscReport
{
  std_msgs__msg__Header header;
  /// %
  float fuel_level;
  bool drive_by_wire_enabled;
  /// km/h
  float vehicle_speed;
  uint16_t software_build_number;
  bool general_actuator_fault;
  bool by_wire_ready;
  bool general_driver_activity;
  bool comms_fault;
  /// degrees-C
  float ambient_temp;
} raptor_dbw_msgs__msg__MiscReport;

// Struct for a sequence of raptor_dbw_msgs__msg__MiscReport.
typedef struct raptor_dbw_msgs__msg__MiscReport__Sequence
{
  raptor_dbw_msgs__msg__MiscReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__MiscReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_REPORT__STRUCT_H_
