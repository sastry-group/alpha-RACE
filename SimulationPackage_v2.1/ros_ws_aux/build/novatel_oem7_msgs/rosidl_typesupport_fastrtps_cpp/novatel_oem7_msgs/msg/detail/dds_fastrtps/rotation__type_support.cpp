// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from novatel_oem7_msgs:msg/Rotation.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/rotation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "novatel_oem7_msgs/msg/detail/rotation__struct.hpp"

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
namespace novatel_oem7_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const novatel_oem7_msgs::msg::RotationalOffset &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  novatel_oem7_msgs::msg::RotationalOffset &);
size_t get_serialized_size(
  const novatel_oem7_msgs::msg::RotationalOffset &,
  size_t current_alignment);
size_t
max_serialized_size_RotationalOffset(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace novatel_oem7_msgs

namespace novatel_oem7_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const novatel_oem7_msgs::msg::INSFrame &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  novatel_oem7_msgs::msg::INSFrame &);
size_t get_serialized_size(
  const novatel_oem7_msgs::msg::INSFrame &,
  size_t current_alignment);
size_t
max_serialized_size_INSFrame(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace novatel_oem7_msgs

namespace novatel_oem7_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const novatel_oem7_msgs::msg::INSSourceStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  novatel_oem7_msgs::msg::INSSourceStatus &);
size_t get_serialized_size(
  const novatel_oem7_msgs::msg::INSSourceStatus &,
  size_t current_alignment);
size_t
max_serialized_size_INSSourceStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace novatel_oem7_msgs


namespace novatel_oem7_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
cdr_serialize(
  const novatel_oem7_msgs::msg::Rotation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rotation
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rotation,
    cdr);
  // Member: frame
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.frame,
    cdr);
  // Member: x_rotation
  cdr << ros_message.x_rotation;
  // Member: y_rotation
  cdr << ros_message.y_rotation;
  // Member: z_rotation
  cdr << ros_message.z_rotation;
  // Member: x_rotation_stdev
  cdr << ros_message.x_rotation_stdev;
  // Member: y_rotation_stdev
  cdr << ros_message.y_rotation_stdev;
  // Member: z_rotation_stdev
  cdr << ros_message.z_rotation_stdev;
  // Member: rotation_source
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rotation_source,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  novatel_oem7_msgs::msg::Rotation & ros_message)
{
  // Member: rotation
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rotation);

  // Member: frame
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.frame);

  // Member: x_rotation
  cdr >> ros_message.x_rotation;

  // Member: y_rotation
  cdr >> ros_message.y_rotation;

  // Member: z_rotation
  cdr >> ros_message.z_rotation;

  // Member: x_rotation_stdev
  cdr >> ros_message.x_rotation_stdev;

  // Member: y_rotation_stdev
  cdr >> ros_message.y_rotation_stdev;

  // Member: z_rotation_stdev
  cdr >> ros_message.z_rotation_stdev;

  // Member: rotation_source
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rotation_source);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
get_serialized_size(
  const novatel_oem7_msgs::msg::Rotation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rotation

  current_alignment +=
    novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rotation, current_alignment);
  // Member: frame

  current_alignment +=
    novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.frame, current_alignment);
  // Member: x_rotation
  {
    size_t item_size = sizeof(ros_message.x_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_rotation
  {
    size_t item_size = sizeof(ros_message.y_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_rotation
  {
    size_t item_size = sizeof(ros_message.z_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_rotation_stdev
  {
    size_t item_size = sizeof(ros_message.x_rotation_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_rotation_stdev
  {
    size_t item_size = sizeof(ros_message.y_rotation_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_rotation_stdev
  {
    size_t item_size = sizeof(ros_message.z_rotation_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rotation_source

  current_alignment +=
    novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rotation_source, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
max_serialized_size_Rotation(
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


  // Member: rotation
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RotationalOffset(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: frame
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_INSFrame(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: x_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_rotation_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_rotation_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_rotation_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rotation_source
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_INSSourceStatus(
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
    using DataType = novatel_oem7_msgs::msg::Rotation;
    is_plain =
      (
      offsetof(DataType, rotation_source) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Rotation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const novatel_oem7_msgs::msg::Rotation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Rotation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<novatel_oem7_msgs::msg::Rotation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Rotation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const novatel_oem7_msgs::msg::Rotation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Rotation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Rotation(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Rotation__callbacks = {
  "novatel_oem7_msgs::msg",
  "Rotation",
  _Rotation__cdr_serialize,
  _Rotation__cdr_deserialize,
  _Rotation__get_serialized_size,
  _Rotation__max_serialized_size
};

static rosidl_message_type_support_t _Rotation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Rotation__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace novatel_oem7_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<novatel_oem7_msgs::msg::Rotation>()
{
  return &novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::_Rotation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, novatel_oem7_msgs, msg, Rotation)() {
  return &novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::_Rotation__handle;
}

#ifdef __cplusplus
}
#endif
