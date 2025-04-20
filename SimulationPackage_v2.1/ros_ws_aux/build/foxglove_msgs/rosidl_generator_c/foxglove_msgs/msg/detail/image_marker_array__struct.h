// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from foxglove_msgs:msg/ImageMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_MARKER_ARRAY__STRUCT_H_
#define FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_MARKER_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/image_marker__struct.h"

/// Struct defined in msg/ImageMarkerArray in the package foxglove_msgs.
typedef struct foxglove_msgs__msg__ImageMarkerArray
{
  visualization_msgs__msg__ImageMarker__Sequence markers;
} foxglove_msgs__msg__ImageMarkerArray;

// Struct for a sequence of foxglove_msgs__msg__ImageMarkerArray.
typedef struct foxglove_msgs__msg__ImageMarkerArray__Sequence
{
  foxglove_msgs__msg__ImageMarkerArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} foxglove_msgs__msg__ImageMarkerArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__IMAGE_MARKER_ARRAY__STRUCT_H_
