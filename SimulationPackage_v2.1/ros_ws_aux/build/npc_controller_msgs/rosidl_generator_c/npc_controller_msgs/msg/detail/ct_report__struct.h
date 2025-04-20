// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from npc_controller_msgs:msg/CtReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__STRUCT_H_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/CtReport in the package npc_controller_msgs.
typedef struct npc_controller_msgs__msg__CtReport
{
  builtin_interfaces__msg__Time stamp;
  uint8_t track_flag_ack;
  uint8_t veh_flag_ack;
  uint8_t ct_state;
  uint8_t target_speed;
  uint8_t rolling_counter;
} npc_controller_msgs__msg__CtReport;

// Struct for a sequence of npc_controller_msgs__msg__CtReport.
typedef struct npc_controller_msgs__msg__CtReport__Sequence
{
  npc_controller_msgs__msg__CtReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} npc_controller_msgs__msg__CtReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__CT_REPORT__STRUCT_H_
