// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/SolutionSource.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_SOURCE__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_SOURCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESERVED1'.
/**
  * 0x3
 */
enum
{
  novatel_oem7_msgs__msg__SolutionSource__RESERVED1 = 3
};

/// Constant 'SOURCE_ANTENNA_MASK'.
/**
  * 0xC
 */
enum
{
  novatel_oem7_msgs__msg__SolutionSource__SOURCE_ANTENNA_MASK = 12
};

/// Constant 'PRIMARY_ANTENNA'.
enum
{
  novatel_oem7_msgs__msg__SolutionSource__PRIMARY_ANTENNA = 0
};

/// Constant 'SECONDARY_ANTENNA'.
enum
{
  novatel_oem7_msgs__msg__SolutionSource__SECONDARY_ANTENNA = 0
};

/// Constant 'RESERVED2'.
/**
  * 0xF0
 */
enum
{
  novatel_oem7_msgs__msg__SolutionSource__RESERVED2 = 240
};

/// Struct defined in msg/SolutionSource in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__SolutionSource
{
  uint8_t source;
} novatel_oem7_msgs__msg__SolutionSource;

// Struct for a sequence of novatel_oem7_msgs__msg__SolutionSource.
typedef struct novatel_oem7_msgs__msg__SolutionSource__Sequence
{
  novatel_oem7_msgs__msg__SolutionSource * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__SolutionSource__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__SOLUTION_SOURCE__STRUCT_H_
