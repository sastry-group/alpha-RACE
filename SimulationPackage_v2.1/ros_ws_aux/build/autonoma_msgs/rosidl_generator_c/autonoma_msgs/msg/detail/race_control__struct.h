// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autonoma_msgs:msg/RaceControl.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__STRUCT_H_
#define AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__STRUCT_H_

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

/// Struct defined in msg/RaceControl in the package autonoma_msgs.
typedef struct autonoma_msgs__msg__RaceControl
{
  std_msgs__msg__Header header;
  uint8_t base_to_car_heartbeat;
  uint8_t track_flag;
  uint8_t veh_flag;
  uint8_t veh_rank;
  uint8_t sys_state;
  uint8_t lap_count;
  float lap_distance;
  uint8_t round_target_speed;
  uint8_t laps;
  float lap_time;
  float time_stamp;
} autonoma_msgs__msg__RaceControl;

// Struct for a sequence of autonoma_msgs__msg__RaceControl.
typedef struct autonoma_msgs__msg__RaceControl__Sequence
{
  autonoma_msgs__msg__RaceControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autonoma_msgs__msg__RaceControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTONOMA_MSGS__MSG__DETAIL__RACE_CONTROL__STRUCT_H_
