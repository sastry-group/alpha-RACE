// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from foxglove_msgs:msg/TextAnnotation.idl
// generated code does not contain a copyright notice
#include "foxglove_msgs/msg/detail/text_annotation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "foxglove_msgs/msg/detail/text_annotation__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace foxglove_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const foxglove_msgs::msg::Point2 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  foxglove_msgs::msg::Point2 &);
size_t get_serialized_size(
  const foxglove_msgs::msg::Point2 &,
  size_t current_alignment);
size_t
max_serialized_size_Point2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace foxglove_msgs

namespace foxglove_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const foxglove_msgs::msg::Color &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  foxglove_msgs::msg::Color &);
size_t get_serialized_size(
  const foxglove_msgs::msg::Color &,
  size_t current_alignment);
size_t
max_serialized_size_Color(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace foxglove_msgs

// functions for foxglove_msgs::msg::Color already declared above


namespace foxglove_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_foxglove_msgs
cdr_serialize(
  const foxglove_msgs::msg::TextAnnotation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.timestamp,
    cdr);
  // Member: position
  foxglove_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.position,
    cdr);
  // Member: text
  cdr << ros_message.text;
  // Member: font_size
  cdr << ros_message.font_size;
  // Member: text_color
  foxglove_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.text_color,
    cdr);
  // Member: background_color
  foxglove_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.background_color,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_foxglove_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  foxglove_msgs::msg::TextAnnotation & ros_message)
{
  // Member: timestamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.timestamp);

  // Member: position
  foxglove_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.position);

  // Member: text
  cdr >> ros_message.text;

  // Member: font_size
  cdr >> ros_message.font_size;

  // Member: text_color
  foxglove_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.text_color);

  // Member: background_color
  foxglove_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.background_color);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_foxglove_msgs
get_serialized_size(
  const foxglove_msgs::msg::TextAnnotation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.timestamp, current_alignment);
  // Member: position

  current_alignment +=
    foxglove_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.position, current_alignment);
  // Member: text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.text.size() + 1);
  // Member: font_size
  {
    size_t item_size = sizeof(ros_message.font_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: text_color

  current_alignment +=
    foxglove_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.text_color, current_alignment);
  // Member: background_color

  current_alignment +=
    foxglove_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.background_color, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_foxglove_msgs
max_serialized_size_TextAnnotation(
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


  // Member: timestamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: position
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        foxglove_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: text
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: font_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: text_color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        foxglove_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Color(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: background_color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        foxglove_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Color(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = foxglove_msgs::msg::TextAnnotation;
    is_plain =
      (
      offsetof(DataType, background_color) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TextAnnotation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const foxglove_msgs::msg::TextAnnotation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TextAnnotation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<foxglove_msgs::msg::TextAnnotation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TextAnnotation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const foxglove_msgs::msg::TextAnnotation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TextAnnotation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TextAnnotation(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TextAnnotation__callbacks = {
  "foxglove_msgs::msg",
  "TextAnnotation",
  _TextAnnotation__cdr_serialize,
  _TextAnnotation__cdr_deserialize,
  _TextAnnotation__get_serialized_size,
  _TextAnnotation__max_serialized_size
};

static rosidl_message_type_support_t _TextAnnotation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TextAnnotation__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace foxglove_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_foxglove_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<foxglove_msgs::msg::TextAnnotation>()
{
  return &foxglove_msgs::msg::typesupport_fastrtps_cpp::_TextAnnotation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, foxglove_msgs, msg, TextAnnotation)() {
  return &foxglove_msgs::msg::typesupport_fastrtps_cpp::_TextAnnotation__handle;
}

#ifdef __cplusplus
}
#endif
