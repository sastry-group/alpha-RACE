// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/DriverInputReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__STRUCT_H_

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
// Member 'turn_signal'
#include "raptor_dbw_msgs/msg/detail/turn_signal__struct.h"
// Member 'high_beam_headlights'
#include "raptor_dbw_msgs/msg/detail/high_beam__struct.h"
// Member 'wiper'
#include "raptor_dbw_msgs/msg/detail/wiper_front__struct.h"

/// Struct defined in msg/DriverInputReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__DriverInputReport
{
  std_msgs__msg__Header header;
  /// Turn Signal enumeration
  raptor_dbw_msgs__msg__TurnSignal turn_signal;
  /// High beams
  raptor_dbw_msgs__msg__HighBeam high_beam_headlights;
  /// Front Windshield Wipers enumeration
  raptor_dbw_msgs__msg__WiperFront wiper;
  /// Buttons
  bool cruise_resume_button;
  bool cruise_cancel_button;
  bool cruise_accel_button;
  bool cruise_decel_button;
  bool cruise_on_off_button;
  bool adaptive_cruise_on_off_button;
  bool adaptive_cruise_increase_distance_button;
  bool adaptive_cruise_decrease_distance_button;
  /// Door status
  bool driver_door_ajar;
  bool passenger_door_ajar;
  bool rear_left_door_ajar;
  bool rear_right_door_ajar;
  bool liftgate_ajar;
  bool any_seatbelt_unbuckled;
  bool airbag_deployed;
  bool door_or_hood_ajar;
} raptor_dbw_msgs__msg__DriverInputReport;

// Struct for a sequence of raptor_dbw_msgs__msg__DriverInputReport.
typedef struct raptor_dbw_msgs__msg__DriverInputReport__Sequence
{
  raptor_dbw_msgs__msg__DriverInputReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__DriverInputReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__DRIVER_INPUT_REPORT__STRUCT_H_
