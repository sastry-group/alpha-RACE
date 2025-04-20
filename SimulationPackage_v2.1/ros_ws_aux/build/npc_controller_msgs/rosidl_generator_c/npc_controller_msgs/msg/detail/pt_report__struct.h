// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from npc_controller_msgs:msg/PtReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__PT_REPORT__STRUCT_H_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__PT_REPORT__STRUCT_H_

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

/// Struct defined in msg/PtReport in the package npc_controller_msgs.
typedef struct npc_controller_msgs__msg__PtReport
{
  builtin_interfaces__msg__Time stamp;
  float map_sensor;
  float lambda_sensor;
  float fuel_level;
  float fuel_pressure;
  float engine_oil_pressure;
  float engine_oil_temperature;
  float engine_coolant_temperature;
  float engine_coolant_pressure;
  float engine_rpm;
  bool engine_on_status;
  bool engine_run_switch_status;
  float throttle_position;
  int8_t current_gear;
  int8_t gear_shift_status;
  float transmission_oil_pressure;
  float transmission_accumulator_pressure;
  float transmission_oil_temperature;
  float vehicle_speed_kmph;
  float torque_wheels;
} npc_controller_msgs__msg__PtReport;

// Struct for a sequence of npc_controller_msgs__msg__PtReport.
typedef struct npc_controller_msgs__msg__PtReport__Sequence
{
  npc_controller_msgs__msg__PtReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} npc_controller_msgs__msg__PtReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__PT_REPORT__STRUCT_H_
