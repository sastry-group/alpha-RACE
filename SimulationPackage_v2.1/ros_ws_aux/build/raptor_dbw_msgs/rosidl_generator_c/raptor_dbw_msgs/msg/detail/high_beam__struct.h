// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/HighBeam.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM__STRUCT_H_

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
  raptor_dbw_msgs__msg__HighBeam__OFF = 0
};

/// Constant 'ON'.
enum
{
  raptor_dbw_msgs__msg__HighBeam__ON = 1
};

/// Constant 'FORCE_ON'.
enum
{
  raptor_dbw_msgs__msg__HighBeam__FORCE_ON = 2
};

/// Constant 'RESERVED'.
enum
{
  raptor_dbw_msgs__msg__HighBeam__RESERVED = 3
};

/// Struct defined in msg/HighBeam in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__HighBeam
{
  uint8_t status;
} raptor_dbw_msgs__msg__HighBeam;

// Struct for a sequence of raptor_dbw_msgs__msg__HighBeam.
typedef struct raptor_dbw_msgs__msg__HighBeam__Sequence
{
  raptor_dbw_msgs__msg__HighBeam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__HighBeam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__HIGH_BEAM__STRUCT_H_
