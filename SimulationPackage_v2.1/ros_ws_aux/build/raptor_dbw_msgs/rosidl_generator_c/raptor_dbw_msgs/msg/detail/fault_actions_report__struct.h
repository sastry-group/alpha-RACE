// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/FaultActionsReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__STRUCT_H_

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

/// Struct defined in msg/FaultActionsReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__FaultActionsReport
{
  std_msgs__msg__Header header;
  bool autonomous_disabled_no_brakes;
  bool autonomous_disabled_apply_brakes;
  bool can_gateway_disabled;
  bool inverter_contactor_disabled;
  bool prevent_enter_autonomous_mode;
  bool warn_driver_only;
} raptor_dbw_msgs__msg__FaultActionsReport;

// Struct for a sequence of raptor_dbw_msgs__msg__FaultActionsReport.
typedef struct raptor_dbw_msgs__msg__FaultActionsReport__Sequence
{
  raptor_dbw_msgs__msg__FaultActionsReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__FaultActionsReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__FAULT_ACTIONS_REPORT__STRUCT_H_
