// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSUpdate.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_UPDATE__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/INSUpdate in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSUpdate
{
  uint8_t update[4];
} novatel_oem7_msgs__msg__INSUpdate;

// Struct for a sequence of novatel_oem7_msgs__msg__INSUpdate.
typedef struct novatel_oem7_msgs__msg__INSUpdate__Sequence
{
  novatel_oem7_msgs__msg__INSUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_UPDATE__STRUCT_H_
