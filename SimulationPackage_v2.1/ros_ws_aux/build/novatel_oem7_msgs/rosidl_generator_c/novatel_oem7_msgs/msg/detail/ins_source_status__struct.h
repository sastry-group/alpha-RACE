// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSSourceStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_SOURCE_STATUS__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_SOURCE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FROM_NVM'.
enum
{
  novatel_oem7_msgs__msg__INSSourceStatus__FROM_NVM = 1ul
};

/// Constant 'CALIBRATING'.
enum
{
  novatel_oem7_msgs__msg__INSSourceStatus__CALIBRATING = 2ul
};

/// Constant 'CALIBRATED'.
enum
{
  novatel_oem7_msgs__msg__INSSourceStatus__CALIBRATED = 3ul
};

/// Constant 'FROM_COMMAND'.
enum
{
  novatel_oem7_msgs__msg__INSSourceStatus__FROM_COMMAND = 4ul
};

/// Constant 'RESET'.
enum
{
  novatel_oem7_msgs__msg__INSSourceStatus__RESET = 5ul
};

/// Constant 'FROM_DUAL_ANT'.
enum
{
  novatel_oem7_msgs__msg__INSSourceStatus__FROM_DUAL_ANT = 6ul
};

/// Constant 'INS_CONVERSING'.
enum
{
  novatel_oem7_msgs__msg__INSSourceStatus__INS_CONVERSING = 7ul
};

/// Constant 'INSUFFICIENT_SPEED'.
enum
{
  novatel_oem7_msgs__msg__INSSourceStatus__INSUFFICIENT_SPEED = 8ul
};

/// Constant 'HIGH_ROTATION'.
enum
{
  novatel_oem7_msgs__msg__INSSourceStatus__HIGH_ROTATION = 9ul
};

/// Struct defined in msg/INSSourceStatus in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSSourceStatus
{
  uint32_t status;
} novatel_oem7_msgs__msg__INSSourceStatus;

// Struct for a sequence of novatel_oem7_msgs__msg__INSSourceStatus.
typedef struct novatel_oem7_msgs__msg__INSSourceStatus__Sequence
{
  novatel_oem7_msgs__msg__INSSourceStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSSourceStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_SOURCE_STATUS__STRUCT_H_
