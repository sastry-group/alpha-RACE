// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/BESTUTM.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTUTM__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTUTM__STRUCT_H_

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

/// Struct defined in msg/BESTUTM in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__BESTUTM
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  novatel_oem7_msgs__msg__SolutionStatus sol_status;
  novatel_oem7_msgs__msg__PositionOrVelocityType pos_type;
  uint32_t lon_zone_number;
  uint32_t lat_zone_letter;
  double northing;
  double easting;
  double height;
  float undulation;
  uint32_t datum_id;
  float northing_stddev;
  float easting_stddev;
  float height_stddev;
  int8_t stn_id[4];
  float diff_age;
  float sol_age;
  uint8_t num_svs;
  uint8_t num_sol_svs;
  uint8_t num_sol_ggl1_svs;
  uint8_t num_sol_multi_svs;
  uint8_t reserved;
  novatel_oem7_msgs__msg__BestExtendedSolutionStatus ext_sol_stat;
  uint8_t galileo_beidou_sig_mask;
  uint8_t gps_glonass_sig_mask;
} novatel_oem7_msgs__msg__BESTUTM;

// Struct for a sequence of novatel_oem7_msgs__msg__BESTUTM.
typedef struct novatel_oem7_msgs__msg__BESTUTM__Sequence
{
  novatel_oem7_msgs__msg__BESTUTM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__BESTUTM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__BESTUTM__STRUCT_H_
