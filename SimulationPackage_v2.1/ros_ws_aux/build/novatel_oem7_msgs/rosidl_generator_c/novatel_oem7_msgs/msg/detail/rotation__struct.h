// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/Rotation.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rotation'
#include "novatel_oem7_msgs/msg/detail/rotational_offset__struct.h"
// Member 'frame'
#include "novatel_oem7_msgs/msg/detail/ins_frame__struct.h"
// Member 'rotation_source'
#include "novatel_oem7_msgs/msg/detail/ins_source_status__struct.h"

/// Struct defined in msg/Rotation in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__Rotation
{
  novatel_oem7_msgs__msg__RotationalOffset rotation;
  novatel_oem7_msgs__msg__INSFrame frame;
  float x_rotation;
  float y_rotation;
  float z_rotation;
  float x_rotation_stdev;
  float y_rotation_stdev;
  float z_rotation_stdev;
  novatel_oem7_msgs__msg__INSSourceStatus rotation_source;
} novatel_oem7_msgs__msg__Rotation;

// Struct for a sequence of novatel_oem7_msgs__msg__Rotation.
typedef struct novatel_oem7_msgs__msg__Rotation__Sequence
{
  novatel_oem7_msgs__msg__Rotation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__Rotation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__ROTATION__STRUCT_H_
