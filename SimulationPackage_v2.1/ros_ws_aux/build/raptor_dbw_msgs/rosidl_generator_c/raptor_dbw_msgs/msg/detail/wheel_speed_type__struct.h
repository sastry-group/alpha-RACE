// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/WheelSpeedType.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_SPEED_TYPE__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_SPEED_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ANGULAR'.
enum
{
  raptor_dbw_msgs__msg__WheelSpeedType__ANGULAR = 0
};

/// Constant 'LINEAR'.
enum
{
  raptor_dbw_msgs__msg__WheelSpeedType__LINEAR = 1
};

/// Struct defined in msg/WheelSpeedType in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__WheelSpeedType
{
  uint8_t value;
} raptor_dbw_msgs__msg__WheelSpeedType;

// Struct for a sequence of raptor_dbw_msgs__msg__WheelSpeedType.
typedef struct raptor_dbw_msgs__msg__WheelSpeedType__Sequence
{
  raptor_dbw_msgs__msg__WheelSpeedType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__WheelSpeedType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WHEEL_SPEED_TYPE__STRUCT_H_
