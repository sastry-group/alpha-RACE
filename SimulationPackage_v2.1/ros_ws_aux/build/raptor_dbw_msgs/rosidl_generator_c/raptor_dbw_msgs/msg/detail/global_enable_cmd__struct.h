// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/GlobalEnableCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GlobalEnableCmd in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__GlobalEnableCmd
{
  bool global_enable;
  bool enable_joystick_limits;
  uint16_t ecu_build_number;
  uint8_t rolling_counter;
} raptor_dbw_msgs__msg__GlobalEnableCmd;

// Struct for a sequence of raptor_dbw_msgs__msg__GlobalEnableCmd.
typedef struct raptor_dbw_msgs__msg__GlobalEnableCmd__Sequence
{
  raptor_dbw_msgs__msg__GlobalEnableCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__GlobalEnableCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GLOBAL_ENABLE_CMD__STRUCT_H_
