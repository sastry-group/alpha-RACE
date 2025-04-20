// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/DoorState.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_STATE__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNDEFINED'.
enum
{
  raptor_dbw_msgs__msg__DoorState__UNDEFINED = 0
};

/// Constant 'CLOSED'.
enum
{
  raptor_dbw_msgs__msg__DoorState__CLOSED = 1
};

/// Constant 'OPEN'.
enum
{
  raptor_dbw_msgs__msg__DoorState__OPEN = 2
};

/// Constant 'SNA'.
enum
{
  raptor_dbw_msgs__msg__DoorState__SNA = 3
};

/// Struct defined in msg/DoorState in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__DoorState
{
  uint8_t value;
} raptor_dbw_msgs__msg__DoorState;

// Struct for a sequence of raptor_dbw_msgs__msg__DoorState.
typedef struct raptor_dbw_msgs__msg__DoorState__Sequence
{
  raptor_dbw_msgs__msg__DoorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__DoorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_STATE__STRUCT_H_
