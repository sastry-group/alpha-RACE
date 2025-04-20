// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autonoma_msgs:msg/VehicleInputs.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__STRUCT_H_
#define AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/VehicleInputs in the package autonoma_msgs.
typedef struct autonoma_msgs__msg__VehicleInputs
{
  std_msgs__msg__Header header;
  /// Throttle command (%)
  float throttle_cmd;
  uint8_t throttle_cmd_count;
  /// Brake pressure command (kPa)
  float brake_cmd;
  uint8_t brake_cmd_count;
  /// Steering motor angle command (degrees)
  float steering_cmd;
  uint8_t steering_cmd_count;
  /// Gear command
  uint8_t gear_cmd;
} autonoma_msgs__msg__VehicleInputs;

// Struct for a sequence of autonoma_msgs__msg__VehicleInputs.
typedef struct autonoma_msgs__msg__VehicleInputs__Sequence
{
  autonoma_msgs__msg__VehicleInputs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autonoma_msgs__msg__VehicleInputs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTONOMA_MSGS__MSG__DETAIL__VEHICLE_INPUTS__STRUCT_H_
