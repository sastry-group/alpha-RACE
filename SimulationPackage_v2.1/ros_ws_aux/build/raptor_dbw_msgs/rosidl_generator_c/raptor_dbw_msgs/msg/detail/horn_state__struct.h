// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/HornState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__HORN_STATE__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__HORN_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFF'.
enum
{
  raptor_dbw_msgs__msg__HornState__OFF = 0
};

/// Constant 'ON'.
enum
{
  raptor_dbw_msgs__msg__HornState__ON = 1
};

/// Constant 'SNA'.
enum
{
  raptor_dbw_msgs__msg__HornState__SNA = 2
};

/// Struct defined in msg/HornState in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__HornState
{
  uint8_t status;
} raptor_dbw_msgs__msg__HornState;

// Struct for a sequence of raptor_dbw_msgs__msg__HornState.
typedef struct raptor_dbw_msgs__msg__HornState__Sequence
{
  raptor_dbw_msgs__msg__HornState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__HornState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__HORN_STATE__STRUCT_H_
