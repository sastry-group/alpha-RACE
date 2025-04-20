// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/WiperRear.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WIPER_REAR__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WIPER_REAR__STRUCT_H_

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
  raptor_dbw_msgs__msg__WiperRear__OFF = 0
};

/// Constant 'INTERVAL_1'.
enum
{
  raptor_dbw_msgs__msg__WiperRear__INTERVAL_1 = 1
};

/// Constant 'CONSTANT_LOW'.
enum
{
  raptor_dbw_msgs__msg__WiperRear__CONSTANT_LOW = 11
};

/// Constant 'CONSTANT_HIGH'.
enum
{
  raptor_dbw_msgs__msg__WiperRear__CONSTANT_HIGH = 12
};

/// Constant 'WASH_BRIEF'.
enum
{
  raptor_dbw_msgs__msg__WiperRear__WASH_BRIEF = 13
};

/// Constant 'WASH_CONTINUOUS'.
enum
{
  raptor_dbw_msgs__msg__WiperRear__WASH_CONTINUOUS = 14
};

/// Constant 'SNA'.
enum
{
  raptor_dbw_msgs__msg__WiperRear__SNA = 15
};

/// Struct defined in msg/WiperRear in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__WiperRear
{
  uint8_t status;
} raptor_dbw_msgs__msg__WiperRear;

// Struct for a sequence of raptor_dbw_msgs__msg__WiperRear.
typedef struct raptor_dbw_msgs__msg__WiperRear__Sequence
{
  raptor_dbw_msgs__msg__WiperRear * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__WiperRear__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WIPER_REAR__STRUCT_H_
