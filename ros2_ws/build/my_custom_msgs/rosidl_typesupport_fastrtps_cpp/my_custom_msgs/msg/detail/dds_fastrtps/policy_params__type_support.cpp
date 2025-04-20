// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_custom_msgs:msg/PolicyParams.idl
// generated code does not contain a copyright notice
#include "my_custom_msgs/msg/detail/policy_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_custom_msgs/msg/detail/policy_params__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace my_custom_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_msgs
cdr_serialize(
  const my_custom_msgs::msg::PolicyParams & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sf1
  cdr << ros_message.sf1;
  // Member: sf2
  cdr << ros_message.sf2;
  // Member: speed_factor
  cdr << ros_message.speed_factor;
  // Member: lookahead_factor
  cdr << ros_message.lookahead_factor;
  // Member: blocking_factor
  cdr << ros_message.blocking_factor;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_custom_msgs::msg::PolicyParams & ros_message)
{
  // Member: sf1
  cdr >> ros_message.sf1;

  // Member: sf2
  cdr >> ros_message.sf2;

  // Member: speed_factor
  cdr >> ros_message.speed_factor;

  // Member: lookahead_factor
  cdr >> ros_message.lookahead_factor;

  // Member: blocking_factor
  cdr >> ros_message.blocking_factor;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_msgs
get_serialized_size(
  const my_custom_msgs::msg::PolicyParams & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sf1
  {
    size_t item_size = sizeof(ros_message.sf1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sf2
  {
    size_t item_size = sizeof(ros_message.sf2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_factor
  {
    size_t item_size = sizeof(ros_message.speed_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lookahead_factor
  {
    size_t item_size = sizeof(ros_message.lookahead_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blocking_factor
  {
    size_t item_size = sizeof(ros_message.blocking_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_custom_msgs
max_serialized_size_PolicyParams(
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


  // Member: sf1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sf2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lookahead_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: blocking_factor
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
    using DataType = my_custom_msgs::msg::PolicyParams;
    is_plain =
      (
      offsetof(DataType, blocking_factor) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PolicyParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_custom_msgs::msg::PolicyParams *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PolicyParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_custom_msgs::msg::PolicyParams *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PolicyParams__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_custom_msgs::msg::PolicyParams *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PolicyParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PolicyParams(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PolicyParams__callbacks = {
  "my_custom_msgs::msg",
  "PolicyParams",
  _PolicyParams__cdr_serialize,
  _PolicyParams__cdr_deserialize,
  _PolicyParams__get_serialized_size,
  _PolicyParams__max_serialized_size
};

static rosidl_message_type_support_t _PolicyParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PolicyParams__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_custom_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_custom_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<my_custom_msgs::msg::PolicyParams>()
{
  return &my_custom_msgs::msg::typesupport_fastrtps_cpp::_PolicyParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_msgs, msg, PolicyParams)() {
  return &my_custom_msgs::msg::typesupport_fastrtps_cpp::_PolicyParams__handle;
}

#ifdef __cplusplus
}
#endif
