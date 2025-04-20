// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from foxglove_msgs:msg/Transform.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__TRANSFORM__STRUCT_H_
#define FOXGLOVE_MSGS__MSG__DETAIL__TRANSFORM__STRUCT_H_

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
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'rotation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/Transform in the package foxglove_msgs.
/**
  * Generated from Transform by @foxglove/schemas
 */
typedef struct foxglove_msgs__msg__Transform
{
  /// Transform time
  builtin_interfaces__msg__Time timestamp;
  /// Translation component of the transform
  geometry_msgs__msg__Vector3 translation;
  /// Rotation component of the transform
  geometry_msgs__msg__Quaternion rotation;
} foxglove_msgs__msg__Transform;

// Struct for a sequence of foxglove_msgs__msg__Transform.
typedef struct foxglove_msgs__msg__Transform__Sequence
{
  foxglove_msgs__msg__Transform * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} foxglove_msgs__msg__Transform__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__TRANSFORM__STRUCT_H_
