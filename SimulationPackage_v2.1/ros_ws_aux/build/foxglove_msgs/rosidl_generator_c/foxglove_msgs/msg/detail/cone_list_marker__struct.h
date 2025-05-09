// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from foxglove_msgs:msg/ConeListMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CONE_LIST_MARKER__STRUCT_H_
#define FOXGLOVE_MSGS__MSG__DETAIL__CONE_LIST_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'frame_id'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'metadata'
#include "foxglove_msgs/msg/detail/key_value_pair__struct.h"
// Member 'attributes'
#include "foxglove_msgs/msg/detail/cone_attributes__struct.h"

/// Struct defined in msg/ConeListMarker in the package foxglove_msgs.
/**
  * foxglove_msgs/msg/ConeListMarker
  * A marker representing a list of possibly truncated, possibly elliptic cones or cylinders
 */
typedef struct foxglove_msgs__msg__ConeListMarker
{
  /// Generated by https://github.com/foxglove/schemas
  /// Timestamp of the marker
  builtin_interfaces__msg__Time timestamp;
  /// Frame of reference
  rosidl_runtime_c__String frame_id;
  /// Identifier for the marker. A marker will replace any prior marker on the same topic with the same `id`.
  rosidl_runtime_c__String id;
  /// Length of time (relative to `timestamp`) after which the marker should be automatically removed. Zero value indicates the marker should remain visible until it is replaced or deleted.
  builtin_interfaces__msg__Duration lifetime;
  /// Whether the marker should keep its location in the fixed frame (false) or follow the frame specified in `frame_id` as it moves relative to the fixed frame (true)
  bool frame_locked;
  /// Additional user-provided metadata associated with the marker. Keys must be unique.
  foxglove_msgs__msg__KeyValuePair__Sequence metadata;
  /// Attributes of each cone
  foxglove_msgs__msg__ConeAttributes__Sequence attributes;
} foxglove_msgs__msg__ConeListMarker;

// Struct for a sequence of foxglove_msgs__msg__ConeListMarker.
typedef struct foxglove_msgs__msg__ConeListMarker__Sequence
{
  foxglove_msgs__msg__ConeListMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} foxglove_msgs__msg__ConeListMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CONE_LIST_MARKER__STRUCT_H_
