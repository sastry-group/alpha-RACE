// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_H_

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

/// Struct defined in msg/DiagnosticReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__DiagnosticReport
{
  std_msgs__msg__Header header;
  bool sd_system_warning;
  bool sd_system_failure;
  bool sd_brake_warning1;
  bool sd_brake_warning2;
  bool sd_brake_warning3;
  bool sd_steer_warning1;
  bool sd_steer_warning2;
  bool sd_steer_warning3;
  int8_t motec_warning;
  bool front_brk_failure;
  bool rear_brk_failure;
  bool low_eng_speed;
  bool sd_comms_loss;
  bool motec_comms_loss;
  bool sd_ebrake;
  bool adlink_hb_lost;
  bool rc_lost;
} raptor_dbw_msgs__msg__DiagnosticReport;

// Struct for a sequence of raptor_dbw_msgs__msg__DiagnosticReport.
typedef struct raptor_dbw_msgs__msg__DiagnosticReport__Sequence
{
  raptor_dbw_msgs__msg__DiagnosticReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__DiagnosticReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DIAGNOSTIC_REPORT__STRUCT_H_
