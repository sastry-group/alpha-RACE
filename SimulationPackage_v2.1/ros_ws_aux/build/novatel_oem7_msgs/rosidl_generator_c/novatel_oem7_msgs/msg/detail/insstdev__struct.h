// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSSTDEV.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSSTDEV__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSSTDEV__STRUCT_H_

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
// Member 'ext_sol_status'
#include "novatel_oem7_msgs/msg/detail/ins_extended_solution_status__struct.h"

/// Struct defined in msg/INSSTDEV in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSSTDEV
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
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
  uint16_t time_since_last_update;
  uint16_t reserved1;
  uint32_t reserved2;
  uint32_t reserved3;
} novatel_oem7_msgs__msg__INSSTDEV;

// Struct for a sequence of novatel_oem7_msgs__msg__INSSTDEV.
typedef struct novatel_oem7_msgs__msg__INSSTDEV__Sequence
{
  novatel_oem7_msgs__msg__INSSTDEV * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSSTDEV__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSSTDEV__STRUCT_H_
