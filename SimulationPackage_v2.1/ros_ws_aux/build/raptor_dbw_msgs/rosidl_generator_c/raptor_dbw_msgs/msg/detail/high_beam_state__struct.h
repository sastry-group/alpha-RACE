// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/HighBeamState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM_STATE__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SNA'.
enum
{
  raptor_dbw_msgs__msg__HighBeamState__SNA = 0
};

/// Constant 'RESERVED'.
enum
{
  raptor_dbw_msgs__msg__HighBeamState__RESERVED = 1
};

/// Constant 'ON'.
enum
{
  raptor_dbw_msgs__msg__HighBeamState__ON = 2
};

/// Constant 'OFF'.
enum
{
  raptor_dbw_msgs__msg__HighBeamState__OFF = 3
};

/// Struct defined in msg/HighBeamState in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__HighBeamState
{
  uint8_t value;
} raptor_dbw_msgs__msg__HighBeamState;

// Struct for a sequence of raptor_dbw_msgs__msg__HighBeamState.
typedef struct raptor_dbw_msgs__msg__HighBeamState__Sequence
{
  raptor_dbw_msgs__msg__HighBeamState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__HighBeamState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM_STATE__STRUCT_H_
