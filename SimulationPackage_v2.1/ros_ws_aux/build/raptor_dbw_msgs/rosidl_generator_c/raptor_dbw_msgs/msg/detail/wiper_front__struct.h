// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/WiperFront.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WIPER_FRONT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WIPER_FRONT__STRUCT_H_

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
  raptor_dbw_msgs__msg__WiperFront__OFF = 0
};

/// Constant 'INTERVAL_1'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__INTERVAL_1 = 1
};

/// Constant 'INTERVAL_2'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__INTERVAL_2 = 2
};

/// Constant 'INTERVAL_3'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__INTERVAL_3 = 3
};

/// Constant 'INTERVAL_4'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__INTERVAL_4 = 4
};

/// Constant 'INTERVAL_5'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__INTERVAL_5 = 5
};

/// Constant 'INTERVAL_6'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__INTERVAL_6 = 6
};

/// Constant 'CONSTANT_LOW'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__CONSTANT_LOW = 11
};

/// Constant 'CONSTANT_HIGH'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__CONSTANT_HIGH = 12
};

/// Constant 'WASH_BRIEF'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__WASH_BRIEF = 13
};

/// Constant 'WASH_CONTINUOUS'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__WASH_CONTINUOUS = 14
};

/// Constant 'SNA'.
enum
{
  raptor_dbw_msgs__msg__WiperFront__SNA = 15
};

/// Struct defined in msg/WiperFront in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__WiperFront
{
  uint8_t status;
} raptor_dbw_msgs__msg__WiperFront;

// Struct for a sequence of raptor_dbw_msgs__msg__WiperFront.
typedef struct raptor_dbw_msgs__msg__WiperFront__Sequence
{
  raptor_dbw_msgs__msg__WiperFront * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__WiperFront__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WIPER_FRONT__STRUCT_H_
