// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSOutputFrame.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_OUTPUT_FRAME__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_OUTPUT_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROVER'.
enum
{
  novatel_oem7_msgs__msg__INSOutputFrame__ROVER = 1ul
};

/// Constant 'MASTER'.
enum
{
  novatel_oem7_msgs__msg__INSOutputFrame__MASTER = 2ul
};

/// Constant 'ECEF'.
enum
{
  novatel_oem7_msgs__msg__INSOutputFrame__ECEF = 3ul
};

/// Constant 'LOCALEVEL'.
enum
{
  novatel_oem7_msgs__msg__INSOutputFrame__LOCALEVEL = 4ul
};

/// Struct defined in msg/INSOutputFrame in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSOutputFrame
{
  uint32_t frame;
} novatel_oem7_msgs__msg__INSOutputFrame;

// Struct for a sequence of novatel_oem7_msgs__msg__INSOutputFrame.
typedef struct novatel_oem7_msgs__msg__INSOutputFrame__Sequence
{
  novatel_oem7_msgs__msg__INSOutputFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSOutputFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_OUTPUT_FRAME__STRUCT_H_
