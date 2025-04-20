// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_custom_msgs:msg/PolicyParams.idl
// generated code does not contain a copyright notice
#include "my_custom_msgs/msg/detail/policy_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_custom_msgs/msg/detail/policy_params__struct.h"
#include "my_custom_msgs/msg/detail/policy_params__functions.h"
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


using _PolicyParams__ros_msg_type = my_custom_msgs__msg__PolicyParams;

static bool _PolicyParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PolicyParams__ros_msg_type * ros_message = static_cast<const _PolicyParams__ros_msg_type *>(untyped_ros_message);
  // Field name: sf1
  {
    cdr << ros_message->sf1;
  }

  // Field name: sf2
  {
    cdr << ros_message->sf2;
  }

  // Field name: speed_factor
  {
    cdr << ros_message->speed_factor;
  }

  // Field name: lookahead_factor
  {
    cdr << ros_message->lookahead_factor;
  }

  // Field name: blocking_factor
  {
    cdr << ros_message->blocking_factor;
  }

  return true;
}

static bool _PolicyParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PolicyParams__ros_msg_type * ros_message = static_cast<_PolicyParams__ros_msg_type *>(untyped_ros_message);
  // Field name: sf1
  {
    cdr >> ros_message->sf1;
  }

  // Field name: sf2
  {
    cdr >> ros_message->sf2;
  }

  // Field name: speed_factor
  {
    cdr >> ros_message->speed_factor;
  }

  // Field name: lookahead_factor
  {
    cdr >> ros_message->lookahead_factor;
  }

  // Field name: blocking_factor
  {
    cdr >> ros_message->blocking_factor;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_msgs
size_t get_serialized_size_my_custom_msgs__msg__PolicyParams(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PolicyParams__ros_msg_type * ros_message = static_cast<const _PolicyParams__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sf1
  {
    size_t item_size = sizeof(ros_message->sf1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sf2
  {
    size_t item_size = sizeof(ros_message->sf2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_factor
  {
    size_t item_size = sizeof(ros_message->speed_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lookahead_factor
  {
    size_t item_size = sizeof(ros_message->lookahead_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blocking_factor
  {
    size_t item_size = sizeof(ros_message->blocking_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PolicyParams__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_custom_msgs__msg__PolicyParams(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_msgs
size_t max_serialized_size_my_custom_msgs__msg__PolicyParams(
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

  // member: sf1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sf2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lookahead_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: blocking_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_custom_msgs__msg__PolicyParams;
    is_plain =
      (
      offsetof(DataType, blocking_factor) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PolicyParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_custom_msgs__msg__PolicyParams(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PolicyParams = {
  "my_custom_msgs::msg",
  "PolicyParams",
  _PolicyParams__cdr_serialize,
  _PolicyParams__cdr_deserialize,
  _PolicyParams__get_serialized_size,
  _PolicyParams__max_serialized_size
};

static rosidl_message_type_support_t _PolicyParams__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PolicyParams,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_msgs, msg, PolicyParams)() {
  return &_PolicyParams__type_support;
}

#if defined(__cplusplus)
}
#endif
