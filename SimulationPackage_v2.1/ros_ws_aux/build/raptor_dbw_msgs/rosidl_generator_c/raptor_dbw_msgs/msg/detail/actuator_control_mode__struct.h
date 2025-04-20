// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/ActuatorControlMode.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__ACTUATOR_CONTROL_MODE__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__ACTUATOR_CONTROL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OPEN_LOOP'.
enum
{
  raptor_dbw_msgs__msg__ActuatorControlMode__OPEN_LOOP = 0
};

/// Constant 'CLOSED_LOOP_ACTUATOR'.
enum
{
  raptor_dbw_msgs__msg__ActuatorControlMode__CLOSED_LOOP_ACTUATOR = 1
};

/// Constant 'CLOSED_LOOP_VEHICLE'.
enum
{
  raptor_dbw_msgs__msg__ActuatorControlMode__CLOSED_LOOP_VEHICLE = 2
};

/// Constant 'NONE'.
enum
{
  raptor_dbw_msgs__msg__ActuatorControlMode__NONE = 255
};

/// Struct defined in msg/ActuatorControlMode in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__ActuatorControlMode
{
  uint8_t value;
} raptor_dbw_msgs__msg__ActuatorControlMode;

// Struct for a sequence of raptor_dbw_msgs__msg__ActuatorControlMode.
typedef struct raptor_dbw_msgs__msg__ActuatorControlMode__Sequence
{
  raptor_dbw_msgs__msg__ActuatorControlMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__ActuatorControlMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__ACTUATOR_CONTROL_MODE__STRUCT_H_
