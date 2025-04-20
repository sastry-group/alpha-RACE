// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autonoma_msgs:msg/ToRaptor.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__TO_RAPTOR__STRUCT_H_
#define AUTONOMA_MSGS__MSG__DETAIL__TO_RAPTOR__STRUCT_H_

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

/// Struct defined in msg/ToRaptor in the package autonoma_msgs.
typedef struct autonoma_msgs__msg__ToRaptor
{
  std_msgs__msg__Header header;
  /// track flag
  uint8_t track_cond_ack;
  /// vehicle flag
  uint8_t veh_sig_ack;
  uint8_t ct_state;
  uint8_t rolling_counter;
  uint8_t veh_num;
} autonoma_msgs__msg__ToRaptor;

// Struct for a sequence of autonoma_msgs__msg__ToRaptor.
typedef struct autonoma_msgs__msg__ToRaptor__Sequence
{
  autonoma_msgs__msg__ToRaptor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autonoma_msgs__msg__ToRaptor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTONOMA_MSGS__MSG__DETAIL__TO_RAPTOR__STRUCT_H_
