// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/INSReceiverStatus.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RECEIVER_STATUS__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RECEIVER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INS_RESET_BYTE'.
enum
{
  novatel_oem7_msgs__msg__INSReceiverStatus__INS_RESET_BYTE = 0
};

/// Constant 'BYTE_1'.
/**
  * Refer to INSResetType for values
 */
enum
{
  novatel_oem7_msgs__msg__INSReceiverStatus__BYTE_1 = 1
};

/// Constant 'IMU_COMMUNICATION_ERROR'.
enum
{
  novatel_oem7_msgs__msg__INSReceiverStatus__IMU_COMMUNICATION_ERROR = 1
};

/// Struct defined in msg/INSReceiverStatus in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__INSReceiverStatus
{
  /// Bytes 3-4 are reserved
  uint8_t status[4];
} novatel_oem7_msgs__msg__INSReceiverStatus;

// Struct for a sequence of novatel_oem7_msgs__msg__INSReceiverStatus.
typedef struct novatel_oem7_msgs__msg__INSReceiverStatus__Sequence
{
  novatel_oem7_msgs__msg__INSReceiverStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__INSReceiverStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__INS_RECEIVER_STATUS__STRUCT_H_
