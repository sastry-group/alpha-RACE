// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vectornav_msgs:msg/TimeStatus.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/time_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vectornav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vectornav_msgs/msg/detail/time_status__struct.h"
#include "vectornav_msgs/msg/detail/time_status__functions.h"
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


using _TimeStatus__ros_msg_type = vectornav_msgs__msg__TimeStatus;

static bool _TimeStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TimeStatus__ros_msg_type * ros_message = static_cast<const _TimeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: time_ok
  {
    cdr << (ros_message->time_ok ? true : false);
  }

  // Field name: date_ok
  {
    cdr << (ros_message->date_ok ? true : false);
  }

  // Field name: utctime_ok
  {
    cdr << (ros_message->utctime_ok ? true : false);
  }

  return true;
}

static bool _TimeStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TimeStatus__ros_msg_type * ros_message = static_cast<_TimeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: time_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->time_ok = tmp ? true : false;
  }

  // Field name: date_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->date_ok = tmp ? true : false;
  }

  // Field name: utctime_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->utctime_ok = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vectornav_msgs
size_t get_serialized_size_vectornav_msgs__msg__TimeStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TimeStatus__ros_msg_type * ros_message = static_cast<const _TimeStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time_ok
  {
    size_t item_size = sizeof(ros_message->time_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name date_ok
  {
    size_t item_size = sizeof(ros_message->date_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name utctime_ok
  {
    size_t item_size = sizeof(ros_message->utctime_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TimeStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vectornav_msgs__msg__TimeStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vectornav_msgs
size_t max_serialized_size_vectornav_msgs__msg__TimeStatus(
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

  // member: time_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: date_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: utctime_ok
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
    using DataType = vectornav_msgs__msg__TimeStatus;
    is_plain =
      (
      offsetof(DataType, utctime_ok) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TimeStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vectornav_msgs__msg__TimeStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TimeStatus = {
  "vectornav_msgs::msg",
  "TimeStatus",
  _TimeStatus__cdr_serialize,
  _TimeStatus__cdr_deserialize,
  _TimeStatus__get_serialized_size,
  _TimeStatus__max_serialized_size
};

static rosidl_message_type_support_t _TimeStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TimeStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, TimeStatus)() {
  return &_TimeStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
