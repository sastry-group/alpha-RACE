// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/HmiGlobalEnableReport.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__STRUCT_H_

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

/// Struct defined in msg/HmiGlobalEnableReport in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__HmiGlobalEnableReport
{
  std_msgs__msg__Header header;
  bool enable_request;
  bool disable_request;
  uint8_t checksum;
  uint16_t ecu_build_number;
  uint8_t rolling_counter;
} raptor_dbw_msgs__msg__HmiGlobalEnableReport;

// Struct for a sequence of raptor_dbw_msgs__msg__HmiGlobalEnableReport.
typedef struct raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence
{
  raptor_dbw_msgs__msg__HmiGlobalEnableReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__HmiGlobalEnableReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__HMI_GLOBAL_ENABLE_REPORT__STRUCT_H_
