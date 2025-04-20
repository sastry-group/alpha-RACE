// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from novatel_oem7_msgs:srv/Oem7AbasciiCmd.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__STRUCT_H_
#define NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Oem7AbasciiCmd in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request
{
  rosidl_runtime_c__String cmd;
} novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request;

// Struct for a sequence of novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request.
typedef struct novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence
{
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'rsp'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Oem7AbasciiCmd in the package novatel_oem7_msgs.
typedef struct novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response
{
  rosidl_runtime_c__String rsp;
} novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response;

// Struct for a sequence of novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response.
typedef struct novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence
{
  novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__STRUCT_H_
