// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  raptor_dbw_msgs__msg__TurnSignal__NONE = 0
};

/// Constant 'LEFT'.
enum
{
  raptor_dbw_msgs__msg__TurnSignal__LEFT = 1
};

/// Constant 'RIGHT'.
enum
{
  raptor_dbw_msgs__msg__TurnSignal__RIGHT = 2
};

/// Constant 'HAZARDS'.
enum
{
  raptor_dbw_msgs__msg__TurnSignal__HAZARDS = 3
};

/// Constant 'SNA'.
enum
{
  raptor_dbw_msgs__msg__TurnSignal__SNA = 7
};

/// Struct defined in msg/TurnSignal in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__TurnSignal
{
  uint8_t value;
} raptor_dbw_msgs__msg__TurnSignal;

// Struct for a sequence of raptor_dbw_msgs__msg__TurnSignal.
typedef struct raptor_dbw_msgs__msg__TurnSignal__Sequence
{
  raptor_dbw_msgs__msg__TurnSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__TurnSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_H_
