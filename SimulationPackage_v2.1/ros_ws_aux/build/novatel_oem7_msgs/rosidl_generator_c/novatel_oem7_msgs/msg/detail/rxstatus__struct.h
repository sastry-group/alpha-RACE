// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:msg/RXSTATUS.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__STRUCT_H_
#define NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__STRUCT_H_

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
// Member 'nov_header'
#include "novatel_oem7_msgs/msg/detail/oem7_header__struct.h"
// Member 'error_bits'
// Member 'rxstat_bits'
// Member 'aux1_stat_bits'
// Member 'aux2_stat_bits'
// Member 'aux3_stat_bits'
// Member 'aux4_stat_bits'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'error_strs'
// Member 'rxstat_strs'
// Member 'aux1_stat_strs'
// Member 'aux2_stat_strs'
// Member 'aux3_stat_strs'
// Member 'aux4_stat_strs'
#include "rosidl_runtime_c/string.h"

// constants for array fields with an upper bound
// error_bits
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__error_bits__MAX_SIZE = 32
};
// error_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__error_strs__MAX_SIZE = 32
};
// error_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__error_strs__MAX_STRING_SIZE = 256
};
// rxstat_bits
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__rxstat_bits__MAX_SIZE = 32
};
// rxstat_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__rxstat_strs__MAX_SIZE = 32
};
// rxstat_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__rxstat_strs__MAX_STRING_SIZE = 256
};
// aux1_stat_bits
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux1_stat_bits__MAX_SIZE = 32
};
// aux1_stat_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux1_stat_strs__MAX_SIZE = 32
};
// aux1_stat_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux1_stat_strs__MAX_STRING_SIZE = 256
};
// aux2_stat_bits
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux2_stat_bits__MAX_SIZE = 32
};
// aux2_stat_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux2_stat_strs__MAX_SIZE = 32
};
// aux2_stat_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux2_stat_strs__MAX_STRING_SIZE = 256
};
// aux3_stat_bits
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux3_stat_bits__MAX_SIZE = 32
};
// aux3_stat_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux3_stat_strs__MAX_SIZE = 32
};
// aux3_stat_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux3_stat_strs__MAX_STRING_SIZE = 256
};
// aux4_stat_bits
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux4_stat_bits__MAX_SIZE = 32
};
// aux4_stat_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux4_stat_strs__MAX_SIZE = 32
};
// aux4_stat_strs
enum
{
  novatel_oem7_msgs__msg__RXSTATUS__aux4_stat_strs__MAX_STRING_SIZE = 256
};

/// Struct defined in msg/RXSTATUS in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__msg__RXSTATUS
{
  std_msgs__msg__Header header;
  novatel_oem7_msgs__msg__Oem7Header nov_header;
  uint32_t error;
  uint32_t num_status_codes;
  uint32_t rxstat;
  uint32_t rxstat_pri_mask;
  uint32_t rxstat_set_mask;
  uint32_t rxstat_clr_mask;
  uint32_t aux1_stat;
  uint32_t aux1_stat_pri;
  uint32_t aux1_stat_set;
  uint32_t aux1_stat_clr;
  uint32_t aux2_stat;
  uint32_t aux2_stat_pri;
  uint32_t aux2_stat_set;
  uint32_t aux2_stat_clr;
  uint32_t aux3_stat;
  uint32_t aux3_stat_pri;
  uint32_t aux3_stat_set;
  uint32_t aux3_stat_clr;
  uint32_t aux4_stat;
  uint32_t aux4_stat_pri;
  uint32_t aux4_stat_set;
  uint32_t aux4_stat_clr;
  rosidl_runtime_c__uint8__Sequence error_bits;
  rosidl_runtime_c__String__Sequence error_strs;
  rosidl_runtime_c__uint8__Sequence rxstat_bits;
  rosidl_runtime_c__String__Sequence rxstat_strs;
  rosidl_runtime_c__uint8__Sequence aux1_stat_bits;
  rosidl_runtime_c__String__Sequence aux1_stat_strs;
  rosidl_runtime_c__uint8__Sequence aux2_stat_bits;
  rosidl_runtime_c__String__Sequence aux2_stat_strs;
  rosidl_runtime_c__uint8__Sequence aux3_stat_bits;
  rosidl_runtime_c__String__Sequence aux3_stat_strs;
  rosidl_runtime_c__uint8__Sequence aux4_stat_bits;
  rosidl_runtime_c__String__Sequence aux4_stat_strs;
} novatel_oem7_msgs__msg__RXSTATUS;

// Struct for a sequence of novatel_oem7_msgs__msg__RXSTATUS.
typedef struct novatel_oem7_msgs__msg__RXSTATUS__Sequence
{
  novatel_oem7_msgs__msg__RXSTATUS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__msg__RXSTATUS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__MSG__DETAIL__RXSTATUS__STRUCT_H_
