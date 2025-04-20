// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/Ignition.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__IGNITION__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__IGNITION__STRUCT_H_

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
  raptor_dbw_msgs__msg__Ignition__NO_REQUEST = 0
};

/// Constant 'FORCE_OFF'.
enum
{
  raptor_dbw_msgs__msg__Ignition__FORCE_OFF = 1
};

/// Constant 'ACCESSORY'.
enum
{
  raptor_dbw_msgs__msg__Ignition__ACCESSORY = 2
};

/// Constant 'RUN'.
enum
{
  raptor_dbw_msgs__msg__Ignition__RUN = 3
};

/// Constant 'CRANK'.
enum
{
  raptor_dbw_msgs__msg__Ignition__CRANK = 4
};

/// Struct defined in msg/Ignition in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__Ignition
{
  uint8_t status;
} raptor_dbw_msgs__msg__Ignition;

// Struct for a sequence of raptor_dbw_msgs__msg__Ignition.
typedef struct raptor_dbw_msgs__msg__Ignition__Sequence
{
  raptor_dbw_msgs__msg__Ignition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__Ignition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__IGNITION__STRUCT_H_
