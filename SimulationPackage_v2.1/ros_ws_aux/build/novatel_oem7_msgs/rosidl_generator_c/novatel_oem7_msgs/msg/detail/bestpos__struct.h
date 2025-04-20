// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/BESTPOS.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTPOS__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTPOS__STRUCT_H_

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
// Member 'ext_sol_stat'
#include "novatel_oem7_msgs/msg/detail/best_extended_solution_status__struct.h"

/// Struct defined in msg/BESTPOS in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__BESTPOS
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  novatel_oem7_msgs__msg__SolutionStatus sol_status;
  novatel_oem7_msgs__msg__PositionOrVelocityType pos_type;
  double lat;
  double lon;
  double hgt;
  float undulation;
  uint32_t datum_id;
  float lat_stdev;
  float lon_stdev;
  float hgt_stdev;
  int8_t stn_id[4];
  float diff_age;
  float sol_age;
  uint8_t num_svs;
  uint8_t num_sol_svs;
  uint8_t num_sol_l1_svs;
  uint8_t num_sol_multi_svs;
  uint8_t reserved;
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus ext_sol_stat;
  uint8_t galileo_beidou_sig_mask;
  uint8_t gps_glonass_sig_mask;
} novatel_oem7_msgs__msg__BESTPOS;

// Struct for a sequence of novatel_oem7_msgs__msg__BESTPOS.
typedef struct novatel_oem7_msgs__msg__BESTPOS__Sequence
{
  novatel_oem7_msgs__msg__BESTPOS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__BESTPOS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTPOS__STRUCT_H_
