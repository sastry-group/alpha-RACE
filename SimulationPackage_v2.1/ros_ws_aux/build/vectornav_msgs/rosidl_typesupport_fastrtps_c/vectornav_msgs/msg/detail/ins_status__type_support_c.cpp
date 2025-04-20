// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vectornav_msgs:msg/InsStatus.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/ins_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vectornav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vectornav_msgs/msg/detail/ins_status__struct.h"
#include "vectornav_msgs/msg/detail/ins_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _InsStatus__ros_msg_type = vectornav_msgs__msg__InsStatus;

static bool _InsStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InsStatus__ros_msg_type * ros_message = static_cast<const _InsStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: gps_fix
  {
    cdr << (ros_message->gps_fix ? true : false);
  }

  // Field name: time_error
  {
    cdr << (ros_message->time_error ? true : false);
  }

  // Field name: imu_error
  {
    cdr << (ros_message->imu_error ? true : false);
  }

  // Field name: mag_pres_error
  {
    cdr << (ros_message->mag_pres_error ? true : false);
  }

  // Field name: gps_error
  {
    cdr << (ros_message->gps_error ? true : false);
  }

  // Field name: gps_heading_ins
  {
    cdr << (ros_message->gps_heading_ins ? true : false);
  }

  // Field name: gps_compass
  {
    cdr << (ros_message->gps_compass ? true : false);
  }

  return true;
}

static bool _InsStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InsStatus__ros_msg_type * ros_message = static_cast<_InsStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: gps_fix
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_fix = tmp ? true : false;
  }

  // Field name: time_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->time_error = tmp ? true : false;
  }

  // Field name: imu_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->imu_error = tmp ? true : false;
  }

  // Field name: mag_pres_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mag_pres_error = tmp ? true : false;
  }

  // Field name: gps_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_error = tmp ? true : false;
  }

  // Field name: gps_heading_ins
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_heading_ins = tmp ? true : false;
  }

  // Field name: gps_compass
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_compass = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vectornav_msgs
size_t get_serialized_size_vectornav_msgs__msg__InsStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InsStatus__ros_msg_type * ros_message = static_cast<const _InsStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_fix
  {
    size_t item_size = sizeof(ros_message->gps_fix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_error
  {
    size_t item_size = sizeof(ros_message->time_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_error
  {
    size_t item_size = sizeof(ros_message->imu_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_pres_error
  {
    size_t item_size = sizeof(ros_message->mag_pres_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_error
  {
    size_t item_size = sizeof(ros_message->gps_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_heading_ins
  {
    size_t item_size = sizeof(ros_message->gps_heading_ins);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_compass
  {
    size_t item_size = sizeof(ros_message->gps_compass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InsStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vectornav_msgs__msg__InsStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vectornav_msgs
size_t max_serialized_size_vectornav_msgs__msg__InsStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_fix
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: time_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: imu_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_pres_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_heading_ins
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_compass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vectornav_msgs__msg__InsStatus;
    is_plain =
      (
      offsetof(DataType, gps_compass) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _InsStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vectornav_msgs__msg__InsStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InsStatus = {
  "vectornav_msgs::msg",
  "InsStatus",
  _InsStatus__cdr_serialize,
  _InsStatus__cdr_deserialize,
  _InsStatus__get_serialized_size,
  _InsStatus__max_serialized_size
};

static rosidl_message_type_support_t _InsStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InsStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, InsStatus)() {
  return &_InsStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
