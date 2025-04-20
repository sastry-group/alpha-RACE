// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/LowBeam.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM__STRUCT_H_

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
  raptor_dbw_msgs__msg__LowBeam__OFF = 0
};

/// Constant 'RESERVED'.
enum
{
  raptor_dbw_msgs__msg__LowBeam__RESERVED = 1
};

/// Constant 'ON'.
enum
{
  raptor_dbw_msgs__msg__LowBeam__ON = 2
};

/// Constant 'RESERVED_1'.
enum
{
  raptor_dbw_msgs__msg__LowBeam__RESERVED_1 = 3
};

/// Struct defined in msg/LowBeam in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__LowBeam
{
  uint8_t status;
} raptor_dbw_msgs__msg__LowBeam;

// Struct for a sequence of raptor_dbw_msgs__msg__LowBeam.
typedef struct raptor_dbw_msgs__msg__LowBeam__Sequence
{
  raptor_dbw_msgs__msg__LowBeam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__LowBeam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__LOW_BEAM__STRUCT_H_
