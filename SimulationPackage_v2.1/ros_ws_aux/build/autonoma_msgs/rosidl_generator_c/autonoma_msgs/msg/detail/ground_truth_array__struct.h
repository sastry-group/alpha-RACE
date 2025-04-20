// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autonoma_msgs:msg/GroundTruthArray.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__STRUCT_H_
#define AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'vehicles'
#include "autonoma_msgs/msg/detail/ground_truth__struct.h"

/// Struct defined in msg/GroundTruthArray in the package autonoma_msgs.
typedef struct autonoma_msgs__msg__GroundTruthArray
{
  std_msgs__msg__Header header;
  autonoma_msgs__msg__GroundTruth__Sequence vehicles;
} autonoma_msgs__msg__GroundTruthArray;

// Struct for a sequence of autonoma_msgs__msg__GroundTruthArray.
typedef struct autonoma_msgs__msg__GroundTruthArray__Sequence
{
  autonoma_msgs__msg__GroundTruthArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autonoma_msgs__msg__GroundTruthArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__STRUCT_H_
