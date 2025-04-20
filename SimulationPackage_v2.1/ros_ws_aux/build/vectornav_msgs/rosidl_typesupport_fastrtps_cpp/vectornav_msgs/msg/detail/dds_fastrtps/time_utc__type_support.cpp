// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from vectornav_msgs:msg/TimeUTC.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/time_utc__rosidl_typesupport_fastrtps_cpp.hpp"
#include "vectornav_msgs/msg/detail/time_utc__struct.hpp"

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

namespace vectornav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vectornav_msgs
cdr_serialize(
  const vectornav_msgs::msg::TimeUTC & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: year
  cdr << ros_message.year;
  // Member: month
  cdr << ros_message.month;
  // Member: day
  cdr << ros_message.day;
  // Member: hour
  cdr << ros_message.hour;
  // Member: min
  cdr << ros_message.min;
  // Member: sec
  cdr << ros_message.sec;
  // Member: ms
  cdr << ros_message.ms;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vectornav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vectornav_msgs::msg::TimeUTC & ros_message)
{
  // Member: year
  cdr >> ros_message.year;

  // Member: month
  cdr >> ros_message.month;

  // Member: day
  cdr >> ros_message.day;

  // Member: hour
  cdr >> ros_message.hour;

  // Member: min
  cdr >> ros_message.min;

  // Member: sec
  cdr >> ros_message.sec;

  // Member: ms
  cdr >> ros_message.ms;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vectornav_msgs
get_serialized_size(
  const vectornav_msgs::msg::TimeUTC & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: year
  {
    size_t item_size = sizeof(ros_message.year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: month
  {
    size_t item_size = sizeof(ros_message.month);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: day
  {
    size_t item_size = sizeof(ros_message.day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hour
  {
    size_t item_size = sizeof(ros_message.hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min
  {
    size_t item_size = sizeof(ros_message.min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sec
  {
    size_t item_size = sizeof(ros_message.sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ms
  {
    size_t item_size = sizeof(ros_message.ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vectornav_msgs
max_serialized_size_TimeUTC(
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


  // Member: year
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: month
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: day
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hour
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vectornav_msgs::msg::TimeUTC;
    is_plain =
      (
      offsetof(DataType, ms) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TimeUTC__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const vectornav_msgs::msg::TimeUTC *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TimeUTC__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<vectornav_msgs::msg::TimeUTC *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TimeUTC__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const vectornav_msgs::msg::TimeUTC *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TimeUTC__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TimeUTC(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TimeUTC__callbacks = {
  "vectornav_msgs::msg",
  "TimeUTC",
  _TimeUTC__cdr_serialize,
  _TimeUTC__cdr_deserialize,
  _TimeUTC__get_serialized_size,
  _TimeUTC__max_serialized_size
};

static rosidl_message_type_support_t _TimeUTC__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TimeUTC__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace vectornav_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vectornav_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<vectornav_msgs::msg::TimeUTC>()
{
  return &vectornav_msgs::msg::typesupport_fastrtps_cpp::_TimeUTC__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, msg, TimeUTC)() {
  return &vectornav_msgs::msg::typesupport_fastrtps_cpp::_TimeUTC__handle;
}

#ifdef __cplusplus
}
#endif
