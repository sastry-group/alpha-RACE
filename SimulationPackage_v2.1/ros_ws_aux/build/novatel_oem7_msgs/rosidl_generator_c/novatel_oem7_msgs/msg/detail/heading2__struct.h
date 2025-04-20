// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/HEADING2.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__STRUCT_H_

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
// Member 'sol_status'
#include "novatel_oem7_msgs/msg/detail/solution_status__struct.h"
// Member 'pos_type'
#include "novatel_oem7_msgs/msg/detail/position_or_velocity_type__struct.h"
// Member 'sol_source'
#include "novatel_oem7_msgs/msg/detail/solution_source__struct.h"
// Member 'ext_sol_status'
#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__struct.h"

/// Struct defined in msg/HEADING2 in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__HEADING2
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  novatel_oem7_msgs__msg__SolutionStatus sol_status;
  novatel_oem7_msgs__msg__PositionOrVelocityType pos_type;
  float length;
  float heading;
  float pitch;
  float reserved;
  float heading_stdev;
  float pitch_stdev;
  int8_t rover_stn_id[4];
  int8_t master_stn_id[4];
  uint8_t num_sv_tracked;
  uint8_t num_sv_in_sol;
  uint8_t num_sv_obs;
  uint8_t num_sv_multi;
  novatel_oem7_msgs__msg__SolutionSource sol_source;
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus ext_sol_status;
  uint8_t galileo_beidou_sig_mask;
  uint8_t gps_glonass_sig_mask;
} novatel_oem7_msgs__msg__HEADING2;

// Struct for a sequence of novatel_oem7_msgs__msg__HEADING2.
typedef struct novatel_oem7_msgs__msg__HEADING2__Sequence
{
  novatel_oem7_msgs__msg__HEADING2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__HEADING2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__HEADING2__STRUCT_H_
