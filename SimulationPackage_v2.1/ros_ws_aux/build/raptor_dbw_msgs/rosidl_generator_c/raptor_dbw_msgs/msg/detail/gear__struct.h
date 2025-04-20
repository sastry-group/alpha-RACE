// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/Gear.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR__STRUCT_H_

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
  raptor_dbw_msgs__msg__Gear__NONE = 0
};

/// Constant 'PARK'.
enum
{
  raptor_dbw_msgs__msg__Gear__PARK = 1
};

/// Constant 'REVERSE'.
enum
{
  raptor_dbw_msgs__msg__Gear__REVERSE = 2
};

/// Constant 'NEUTRAL'.
enum
{
  raptor_dbw_msgs__msg__Gear__NEUTRAL = 3
};

/// Constant 'DRIVE'.
enum
{
  raptor_dbw_msgs__msg__Gear__DRIVE = 4
};

/// Constant 'LOW'.
enum
{
  raptor_dbw_msgs__msg__Gear__LOW = 5
};

/// Struct defined in msg/Gear in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__Gear
{
  uint8_t gear;
} raptor_dbw_msgs__msg__Gear;

// Struct for a sequence of raptor_dbw_msgs__msg__Gear.
typedef struct raptor_dbw_msgs__msg__Gear__Sequence
{
  raptor_dbw_msgs__msg__Gear * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__Gear__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__GEAR__STRUCT_H_
