// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSCONFIG.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__STRUCT_H_

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
// Member 'alignment_mode'
#include "novatel_oem7_msgs/msg/detail/ins_alignment_mode__struct.h"
// Member 'relative_ins_output_frame'
#include "novatel_oem7_msgs/msg/detail/ins_output_frame__struct.h"
// Member 'ins_receiver_status'
#include "novatel_oem7_msgs/msg/detail/ins_receiver_status__struct.h"
// Member 'translations'
#include "novatel_oem7_msgs/msg/detail/translation__struct.h"
// Member 'rotations'
#include "novatel_oem7_msgs/msg/detail/rotation__struct.h"

/// Struct defined in msg/INSCONFIG in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSCONFIG
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  uint32_t imu_type;
  uint8_t mapping;
  uint8_t initial_alignment_velocity;
  uint16_t heave_window;
  uint32_t profile;
  uint8_t enabled_updates[4];
  novatel_oem7_msgs__msg__INSAlignmentMode alignment_mode;
  novatel_oem7_msgs__msg__INSOutputFrame relative_ins_output_frame;
  bool relative_ins_output_direction;
  novatel_oem7_msgs__msg__INSReceiverStatus ins_receiver_status;
  uint8_t ins_seed_enabled;
  uint8_t ins_seed_validation;
  uint16_t reserved_1;
  uint32_t reserved_2;
  uint32_t reserved_3;
  uint32_t reserved_4;
  uint32_t reserved_5;
  uint32_t reserved_6;
  uint32_t reserved_7;
  uint32_t number_of_translations;
  novatel_oem7_msgs__msg__Translation__Sequence translations;
  uint32_t number_of_rotations;
  novatel_oem7_msgs__msg__Rotation__Sequence rotations;
} novatel_oem7_msgs__msg__INSCONFIG;

// Struct for a sequence of novatel_oem7_msgs__msg__INSCONFIG.
typedef struct novatel_oem7_msgs__msg__INSCONFIG__Sequence
{
  novatel_oem7_msgs__msg__INSCONFIG * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSCONFIG__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INSCONFIG__STRUCT_H_
