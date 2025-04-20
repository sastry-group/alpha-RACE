// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSAlignmentMode.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_ALIGNMENT_MODE__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_ALIGNMENT_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNAIDED'.
enum
{
  novatel_oem7_msgs__msg__INSAlignmentMode__UNAIDED = 0ul
};

/// Constant 'AIDED_TRANSFER'.
enum
{
  novatel_oem7_msgs__msg__INSAlignmentMode__AIDED_TRANSFER = 2ul
};

/// Constant 'AUTOMATIC'.
enum
{
  novatel_oem7_msgs__msg__INSAlignmentMode__AUTOMATIC = 3ul
};

/// Constant 'STATIC'.
enum
{
  novatel_oem7_msgs__msg__INSAlignmentMode__STATIC = 4ul
};

/// Constant 'KINEMATIC'.
enum
{
  novatel_oem7_msgs__msg__INSAlignmentMode__KINEMATIC = 5ul
};

/// Struct defined in msg/INSAlignmentMode in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSAlignmentMode
{
  uint32_t mode;
} novatel_oem7_msgs__msg__INSAlignmentMode;

// Struct for a sequence of novatel_oem7_msgs__msg__INSAlignmentMode.
typedef struct novatel_oem7_msgs__msg__INSAlignmentMode__Sequence
{
  novatel_oem7_msgs__msg__INSAlignmentMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSAlignmentMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_ALIGNMENT_MODE__STRUCT_H_
