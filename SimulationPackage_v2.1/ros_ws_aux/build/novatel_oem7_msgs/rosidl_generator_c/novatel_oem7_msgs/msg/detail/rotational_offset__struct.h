// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/RotationalOffset.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATIONAL_OFFSET__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATIONAL_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'USER'.
enum
{
  novatel_oem7_msgs__msg__RotationalOffset__USER = 4ul
};

/// Constant 'MARK1'.
enum
{
  novatel_oem7_msgs__msg__RotationalOffset__MARK1 = 5ul
};

/// Constant 'MARK2'.
enum
{
  novatel_oem7_msgs__msg__RotationalOffset__MARK2 = 6ul
};

/// Constant 'ALIGN'.
enum
{
  novatel_oem7_msgs__msg__RotationalOffset__ALIGN = 8ul
};

/// Constant 'MARK3'.
enum
{
  novatel_oem7_msgs__msg__RotationalOffset__MARK3 = 9ul
};

/// Constant 'MARK4'.
enum
{
  novatel_oem7_msgs__msg__RotationalOffset__MARK4 = 10ul
};

/// Constant 'RBV'.
enum
{
  novatel_oem7_msgs__msg__RotationalOffset__RBV = 11ul
};

/// Constant 'RBM'.
enum
{
  novatel_oem7_msgs__msg__RotationalOffset__RBM = 12ul
};

/// Struct defined in msg/RotationalOffset in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__RotationalOffset
{
  uint32_t offset;
} novatel_oem7_msgs__msg__RotationalOffset;

// Struct for a sequence of novatel_oem7_msgs__msg__RotationalOffset.
typedef struct novatel_oem7_msgs__msg__RotationalOffset__Sequence
{
  novatel_oem7_msgs__msg__RotationalOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__RotationalOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATIONAL_OFFSET__STRUCT_H_
