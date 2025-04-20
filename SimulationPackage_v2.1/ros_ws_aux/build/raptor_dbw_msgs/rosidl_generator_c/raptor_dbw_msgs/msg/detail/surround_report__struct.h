// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/SurroundReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_H_

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
// Member 'rear_right'
// Member 'rear_left'
// Member 'rear_center'
// Member 'front_right'
// Member 'front_left'
// Member 'front_center'
#include "raptor_dbw_msgs/msg/detail/sonar_arc_num__struct.h"

/// Struct defined in msg/SurroundReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__SurroundReport
{
  std_msgs__msg__Header header;
  /// meters
  float front_radar_object_distance;
  /// meters
  float rear_radar_object_distance;
  raptor_dbw_msgs__msg__SonarArcNum rear_right;
  raptor_dbw_msgs__msg__SonarArcNum rear_left;
  raptor_dbw_msgs__msg__SonarArcNum rear_center;
  raptor_dbw_msgs__msg__SonarArcNum front_right;
  raptor_dbw_msgs__msg__SonarArcNum front_left;
  raptor_dbw_msgs__msg__SonarArcNum front_center;
  bool front_radar_distance_valid;
  bool parking_sonar_data_valid;
} raptor_dbw_msgs__msg__SurroundReport;

// Struct for a sequence of raptor_dbw_msgs__msg__SurroundReport.
typedef struct raptor_dbw_msgs__msg__SurroundReport__Sequence
{
  raptor_dbw_msgs__msg__SurroundReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__SurroundReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__SURROUND_REPORT__STRUCT_H_
