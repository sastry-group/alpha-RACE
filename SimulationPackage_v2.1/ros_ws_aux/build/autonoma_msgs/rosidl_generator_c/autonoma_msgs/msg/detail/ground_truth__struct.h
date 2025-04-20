// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autonoma_msgs:msg/GroundTruth.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__STRUCT_H_
#define AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__STRUCT_H_

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

/// Struct defined in msg/GroundTruth in the package autonoma_msgs.
typedef struct autonoma_msgs__msg__GroundTruth
{
  std_msgs__msg__Header header;
  uint8_t car_num;
  /// in global coords
  double lat;
  /// in global coords
  double lon;
  /// in global coords
  double hgt;
  /// in veh local coords
  double vx;
  /// in veh local coords
  double vy;
  /// in veh local coords
  double vz;
  /// rad from North, CCW positive
  double yaw;
  /// rad
  double pitch;
  /// rad
  double roll;
  /// in vehicle local coords
  double del_x;
  /// in vehicle local coords
  double del_y;
  /// in vehicle local coords
  double del_z;
} autonoma_msgs__msg__GroundTruth;

// Struct for a sequence of autonoma_msgs__msg__GroundTruth.
typedef struct autonoma_msgs__msg__GroundTruth__Sequence
{
  autonoma_msgs__msg__GroundTruth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autonoma_msgs__msg__GroundTruth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH__STRUCT_H_
