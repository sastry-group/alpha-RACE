// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSPVAX.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__STRUCT_H_

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
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.h"
// Member 'ins_status'
#include "novatel_oem7_msgs/msg/detail/inertial_solution_status__struct.h"
// Member 'pos_type'
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__struct.h"
// Member 'ext_sol_status'
#include "novatel_oem7_msgs/msg/detail/ins_extended_solution_status__struct.h"

/// Struct defined in msg/INSPVAX in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSPVAX
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  novatel_oem7_msgs__msg__InertialSolutionStatus ins_status;
  novatel_oem7_msgs__msg__PositionOrVelocityType pos_type;
  double latitude;
  double longitude;
  double height;
  float undulation;
  double north_velocity;
  double east_velocity;
  double up_velocity;
  double roll;
  double pitch;
  double azimuth;
  float latitude_stdev;
  float longitude_stdev;
  float height_stdev;
  float north_velocity_stdev;
  float east_velocity_stdev;
  float up_velocity_stdev;
  float roll_stdev;
  float pitch_stdev;
  float azimuth_stdev;
  novatel_oem7_msgs__msg__INSExtendedSolutionStatus ext_sol_status;
  uint16_t time_since_update;
} novatel_oem7_msgs__msg__INSPVAX;

// Struct for a sequence of novatel_oem7_msgs__msg__INSPVAX.
typedef struct novatel_oem7_msgs__msg__INSPVAX__Sequence
{
  novatel_oem7_msgs__msg__INSPVAX * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSPVAX__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSPVAX__STRUCT_H_
