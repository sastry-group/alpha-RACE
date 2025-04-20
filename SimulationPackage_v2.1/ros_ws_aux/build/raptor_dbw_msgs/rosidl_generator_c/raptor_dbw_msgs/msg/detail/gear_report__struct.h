// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_H_

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
// Member 'state'
#include "raptor_dbw_msgs/msg/detail/gear__struct.h"

/// Struct defined in msg/GearReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__GearReport
{
  std_msgs__msg__Header header;
  /// Current gear enumeration
  raptor_dbw_msgs__msg__Gear state;
  /// Gear reject flag
  bool reject;
  /// Status
  bool driver_activity;
  bool enabled;
  /// Faults
  bool gear_select_system_fault;
} raptor_dbw_msgs__msg__GearReport;

// Struct for a sequence of raptor_dbw_msgs__msg__GearReport.
typedef struct raptor_dbw_msgs__msg__GearReport__Sequence
{
  raptor_dbw_msgs__msg__GearReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__GearReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_REPORT__STRUCT_H_
