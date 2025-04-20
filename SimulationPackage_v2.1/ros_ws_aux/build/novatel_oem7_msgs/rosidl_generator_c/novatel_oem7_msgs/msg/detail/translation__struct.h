// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/Translation.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'translation'
#include "novatel_oem7_msgs/msg/detail/translation_offset__struct.h"
// Member 'frame'
#include "novatel_oem7_msgs/msg/detail/ins_frame__struct.h"
// Member 'translation_source'
#include "novatel_oem7_msgs/msg/detail/ins_source_status__struct.h"

/// Struct defined in msg/Translation in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__Translation
{
  novatel_oem7_msgs__msg__TranslationOffset translation;
  novatel_oem7_msgs__msg__INSFrame frame;
  float x_offset;
  float y_offset;
  float z_offset;
  float x_uncertainty;
  float y_uncertainty;
  float z_uncertainty;
  novatel_oem7_msgs__msg__INSSourceStatus translation_source;
} novatel_oem7_msgs__msg__Translation;

// Struct for a sequence of novatel_oem7_msgs__msg__Translation.
typedef struct novatel_oem7_msgs__msg__Translation__Sequence
{
  novatel_oem7_msgs__msg__Translation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__Translation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__TRANSLATION__STRUCT_H_
