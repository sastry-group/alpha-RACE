// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/TranslationOffset.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION_OFFSET__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ANT1'.
enum
{
  novatel_oem7_msgs__msg__TranslationOffset__ANT1 = 1ul
};

/// Constant 'ANT2'.
enum
{
  novatel_oem7_msgs__msg__TranslationOffset__ANT2 = 2ul
};

/// Constant 'EXTERNAL'.
enum
{
  novatel_oem7_msgs__msg__TranslationOffset__EXTERNAL = 3ul
};

/// Constant 'USER'.
enum
{
  novatel_oem7_msgs__msg__TranslationOffset__USER = 4ul
};

/// Constant 'MARK1'.
enum
{
  novatel_oem7_msgs__msg__TranslationOffset__MARK1 = 5ul
};

/// Constant 'MARK2'.
enum
{
  novatel_oem7_msgs__msg__TranslationOffset__MARK2 = 6ul
};

/// Constant 'GIMBAL'.
enum
{
  novatel_oem7_msgs__msg__TranslationOffset__GIMBAL = 7ul
};

/// Constant 'MARK3'.
enum
{
  novatel_oem7_msgs__msg__TranslationOffset__MARK3 = 9ul
};

/// Constant 'MARK4'.
enum
{
  novatel_oem7_msgs__msg__TranslationOffset__MARK4 = 10ul
};

/// Struct defined in msg/TranslationOffset in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__TranslationOffset
{
  uint32_t type;
} novatel_oem7_msgs__msg__TranslationOffset;

// Struct for a sequence of novatel_oem7_msgs__msg__TranslationOffset.
typedef struct novatel_oem7_msgs__msg__TranslationOffset__Sequence
{
  novatel_oem7_msgs__msg__TranslationOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__TranslationOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION_OFFSET__STRUCT_H_
