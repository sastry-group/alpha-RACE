// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/GearCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "raptor_dbw_msgs/msg/detail/gear__struct.h"

/// Struct defined in msg/GearCmd in the package raptor_dbw_msgs.
/**
  * Gear command enumeration
 */
typedef struct raptor_dbw_msgs__msg__GearCmd
{
  raptor_dbw_msgs__msg__Gear cmd;
  bool enable;
  /// Watchdog counter
  uint8_t rolling_counter;
} raptor_dbw_msgs__msg__GearCmd;

// Struct for a sequence of raptor_dbw_msgs__msg__GearCmd.
typedef struct raptor_dbw_msgs__msg__GearCmd__Sequence
{
  raptor_dbw_msgs__msg__GearCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__GearCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR_CMD__STRUCT_H_
