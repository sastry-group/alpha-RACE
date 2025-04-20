// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "raptor_dbw_msgs/msg/detail/turn_signal__struct.h"
// Member 'door_request_right_rear'
// Member 'door_request_left_rear'
// Member 'door_request_lift_gate'
#include "raptor_dbw_msgs/msg/detail/door_request__struct.h"
// Member 'high_beam_cmd'
#include "raptor_dbw_msgs/msg/detail/high_beam__struct.h"
// Member 'front_wiper_cmd'
#include "raptor_dbw_msgs/msg/detail/wiper_front__struct.h"
// Member 'rear_wiper_cmd'
#include "raptor_dbw_msgs/msg/detail/wiper_rear__struct.h"
// Member 'ignition_cmd'
#include "raptor_dbw_msgs/msg/detail/ignition__struct.h"
// Member 'low_beam_cmd'
#include "raptor_dbw_msgs/msg/detail/low_beam__struct.h"

/// Struct defined in msg/MiscCmd in the package raptor_dbw_msgs.
/**
  * Turn signal command enumeration
 */
typedef struct raptor_dbw_msgs__msg__MiscCmd
{
  raptor_dbw_msgs__msg__TurnSignal cmd;
  raptor_dbw_msgs__msg__DoorRequest door_request_right_rear;
  uint8_t rolling_counter;
  raptor_dbw_msgs__msg__HighBeam high_beam_cmd;
  raptor_dbw_msgs__msg__WiperFront front_wiper_cmd;
  raptor_dbw_msgs__msg__WiperRear rear_wiper_cmd;
  raptor_dbw_msgs__msg__Ignition ignition_cmd;
  raptor_dbw_msgs__msg__DoorRequest door_request_left_rear;
  raptor_dbw_msgs__msg__DoorRequest door_request_lift_gate;
  bool block_standard_cruise_buttons;
  bool block_adaptive_cruise_buttons;
  bool block_turn_signal_stalk;
  bool horn_cmd;
  raptor_dbw_msgs__msg__LowBeam low_beam_cmd;
} raptor_dbw_msgs__msg__MiscCmd;

// Struct for a sequence of raptor_dbw_msgs__msg__MiscCmd.
typedef struct raptor_dbw_msgs__msg__MiscCmd__Sequence
{
  raptor_dbw_msgs__msg__MiscCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__MiscCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__MISC_CMD__STRUCT_H_
