// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from npc_controller_msgs:msg/NPCDebug.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__STRUCT_H_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NPCDebug in the package npc_controller_msgs.
/**
  * This message contains debugging information for the NPC Controller
 */
typedef struct npc_controller_msgs__msg__NPCDebug
{
  /// Long Control Vehicle States
  double desired_acceleration;
  double desired_velocity;
  double current_acceleration;
  double current_velocity;
  double error_acceleration;
  double error_velocity;
  double output_throttle;
  double output_brake;
  /// PID Terms for Acc, Throttle, and Brake
  double vel_p;
  double vel_i;
  double vel_d;
  double thr_p;
  double thr_i;
  double thr_d;
  double brk_p;
  double brk_i;
  double brk_d;
  /// Deadband Terms
  double throttle_deadband;
  double brake_deadband;
  double max_throttle;
  /// Lap State Machine
  uint8_t ct_state;
  uint8_t vehicle_flag;
  uint8_t track_flag;
  uint8_t lap_state;
  uint8_t track_loc;
  double center_s;
  double pit_s;
  /// Drive by Wire State Machine
  uint8_t sys_state;
} npc_controller_msgs__msg__NPCDebug;

// Struct for a sequence of npc_controller_msgs__msg__NPCDebug.
typedef struct npc_controller_msgs__msg__NPCDebug__Sequence
{
  npc_controller_msgs__msg__NPCDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} npc_controller_msgs__msg__NPCDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__NPC_DEBUG__STRUCT_H_
