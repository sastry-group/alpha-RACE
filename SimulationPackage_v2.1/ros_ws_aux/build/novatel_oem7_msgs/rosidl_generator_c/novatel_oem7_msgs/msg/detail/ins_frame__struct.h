// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSFrame.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_FRAME__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IMUBODY'.
enum
{
  novatel_oem7_msgs__msg__INSFrame__IMUBODY = 0ul
};

/// Constant 'VEHICLE'.
enum
{
  novatel_oem7_msgs__msg__INSFrame__VEHICLE = 1ul
};

/// Struct defined in msg/INSFrame in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSFrame
{
  uint32_t frame;
} novatel_oem7_msgs__msg__INSFrame;

// Struct for a sequence of novatel_oem7_msgs__msg__INSFrame.
typedef struct novatel_oem7_msgs__msg__INSFrame__Sequence
{
  novatel_oem7_msgs__msg__INSFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_FRAME__STRUCT_H_
