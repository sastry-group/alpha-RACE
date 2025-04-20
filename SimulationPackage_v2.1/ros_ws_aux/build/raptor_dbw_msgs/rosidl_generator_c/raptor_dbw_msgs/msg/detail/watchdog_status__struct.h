// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raptor_dbw_msgs:msg/WatchdogStatus.idl
// generated code does not contain a copyright notice

#ifndef RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__STRUCT_H_
#define RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
/**
  * No source for watchdog counter fault
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__NONE = 0
};

/// Constant 'OTHER_BRAKE'.
/**
  * Fault determined by brake controller
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__OTHER_BRAKE = 1
};

/// Constant 'OTHER_ACCELERATOR_PEDAL'.
/**
  * Fault determined by accelerator pedal controller
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__OTHER_ACCELERATOR_PEDAL = 2
};

/// Constant 'OTHER_STEERING'.
/**
  * Fault determined by steering controller
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__OTHER_STEERING = 3
};

/// Constant 'BRAKE_COUNTER'.
/**
  * Brake command counter failed to increment
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__BRAKE_COUNTER = 4
};

/// Constant 'BRAKE_DISABLED'.
/**
  * Brake transition to disabled while in gear or moving
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__BRAKE_DISABLED = 5
};

/// Constant 'BRAKE_COMMAND'.
/**
  * Brake command timeout after 100ms
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__BRAKE_COMMAND = 6
};

/// Constant 'BRAKE_REPORT'.
/**
  * Brake report timeout after 100ms
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__BRAKE_REPORT = 7
};

/// Constant 'ACCELERATOR_PEDAL_COUNTER'.
/**
  * Accelerator pedal command counter failed to increment
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__ACCELERATOR_PEDAL_COUNTER = 8
};

/// Constant 'ACCELERATOR_PEDAL_DISABLED'.
/**
  * Accelerator pedal transition to disabled while in gear or moving
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__ACCELERATOR_PEDAL_DISABLED = 9
};

/// Constant 'ACCELERATOR_PEDAL_COMMAND'.
/**
  * Accelerator pedal command timeout after 100ms
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__ACCELERATOR_PEDAL_COMMAND = 10
};

/// Constant 'ACCELERATOR_PEDAL_REPORT'.
/**
  * Accelerator pedal report timeout after 100ms
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__ACCELERATOR_PEDAL_REPORT = 11
};

/// Constant 'STEERING_COUNTER'.
/**
  * Steering command counter failed to increment
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__STEERING_COUNTER = 12
};

/// Constant 'STEERING_DISABLED'.
/**
  * Steering transition to disabled while in gear or moving
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__STEERING_DISABLED = 13
};

/// Constant 'STEERING_COMMAND'.
/**
  * Steering command timeout after 100ms
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__STEERING_COMMAND = 14
};

/// Constant 'STEERING_REPORT'.
/**
  * Steering report timeout after 100ms
 */
enum
{
  raptor_dbw_msgs__msg__WatchdogStatus__STEERING_REPORT = 15
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/WatchdogStatus in the package raptor_dbw_msgs.
typedef struct raptor_dbw_msgs__msg__WatchdogStatus
{
  std_msgs__msg__Header header;
  uint8_t source;
} raptor_dbw_msgs__msg__WatchdogStatus;

// Struct for a sequence of raptor_dbw_msgs__msg__WatchdogStatus.
typedef struct raptor_dbw_msgs__msg__WatchdogStatus__Sequence
{
  raptor_dbw_msgs__msg__WatchdogStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raptor_dbw_msgs__msg__WatchdogStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RAPTOR_DBW_MSGS__MSG__DETAIL__WATCHDOG_STATUS__STRUCT_H_
