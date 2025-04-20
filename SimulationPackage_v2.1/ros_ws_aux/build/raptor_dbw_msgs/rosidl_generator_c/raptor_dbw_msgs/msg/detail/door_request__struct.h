// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_REQUEST__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_REQUEST'.
enum
{
  raptor_dbw_msgs__msg__DoorRequest__NO_REQUEST = 0
};

/// Constant 'CLOSE'.
enum
{
  raptor_dbw_msgs__msg__DoorRequest__CLOSE = 1
};

/// Constant 'OPEN'.
enum
{
  raptor_dbw_msgs__msg__DoorRequest__OPEN = 2
};

/// Struct defined in msg/DoorRequest in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__DoorRequest
{
  uint8_t value;
} raptor_dbw_msgs__msg__DoorRequest;

// Struct for a sequence of raptor_dbw_msgs__msg__DoorRequest.
typedef struct raptor_dbw_msgs__msg__DoorRequest__Sequence
{
  raptor_dbw_msgs__msg__DoorRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__DoorRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DOOR_REQUEST__STRUCT_H_
