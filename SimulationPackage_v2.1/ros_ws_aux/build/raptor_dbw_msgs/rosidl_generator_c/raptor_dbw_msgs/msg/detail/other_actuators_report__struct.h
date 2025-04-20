// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/OtherActuatorsReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__STRUCT_H_

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
// Member 'turn_signal_state'
#include "raptor_dbw_msgs/msg/detail/turn_signal__struct.h"
// Member 'right_rear_door_state'
// Member 'left_rear_door_state'
// Member 'liftgate_door_state'
#include "raptor_dbw_msgs/msg/detail/door_state__struct.h"
// Member 'high_beam_state'
#include "raptor_dbw_msgs/msg/detail/high_beam_state__struct.h"
// Member 'front_wiper_state'
#include "raptor_dbw_msgs/msg/detail/wiper_front__struct.h"
// Member 'rear_wiper_state'
#include "raptor_dbw_msgs/msg/detail/wiper_rear__struct.h"
// Member 'ignition_state'
#include "raptor_dbw_msgs/msg/detail/ignition__struct.h"
// Member 'horn_state'
#include "raptor_dbw_msgs/msg/detail/horn_state__struct.h"
// Member 'low_beam_state'
#include "raptor_dbw_msgs/msg/detail/low_beam__struct.h"

/// Struct defined in msg/OtherActuatorsReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__OtherActuatorsReport
{
  std_msgs__msg__Header header;
  raptor_dbw_msgs__msg__TurnSignal turn_signal_state;
  raptor_dbw_msgs__msg__DoorState right_rear_door_state;
  raptor_dbw_msgs__msg__HighBeamState high_beam_state;
  raptor_dbw_msgs__msg__WiperFront front_wiper_state;
  raptor_dbw_msgs__msg__WiperRear rear_wiper_state;
  raptor_dbw_msgs__msg__Ignition ignition_state;
  raptor_dbw_msgs__msg__DoorState left_rear_door_state;
  raptor_dbw_msgs__msg__DoorState liftgate_door_state;
  raptor_dbw_msgs__msg__HornState horn_state;
  raptor_dbw_msgs__msg__LowBeam low_beam_state;
  uint8_t rolling_counter;
} raptor_dbw_msgs__msg__OtherActuatorsReport;

// Struct for a sequence of raptor_dbw_msgs__msg__OtherActuatorsReport.
typedef struct raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence
{
  raptor_dbw_msgs__msg__OtherActuatorsReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__OtherActuatorsReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__OTHER_ACTUATORS_REPORT__STRUCT_H_
