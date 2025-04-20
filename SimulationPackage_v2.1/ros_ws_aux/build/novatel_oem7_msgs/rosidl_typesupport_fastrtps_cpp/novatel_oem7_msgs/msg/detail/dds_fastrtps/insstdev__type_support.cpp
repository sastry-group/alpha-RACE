// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from novatel_oem7_msgs:msg/INSSTDEV.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/insstdev__rosidl_typesupport_fastrtps_cpp.hpp"
#include "novatel_oem7_msgs/msg/detail/insstdev__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace novatel_oem7_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const novatel_oem7_msgs::msg::Oem7Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  novatel_oem7_msgs::msg::Oem7Header &);
size_t get_serialized_size(
  const novatel_oem7_msgs::msg::Oem7Header &,
  size_t current_alignment);
size_t
max_serialized_size_Oem7Header(
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
  const novatel_oem7_msgs::msg::INSExtendedSolutionStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  novatel_oem7_msgs::msg::INSExtendedSolutionStatus &);
size_t get_serialized_size(
  const novatel_oem7_msgs::msg::INSExtendedSolutionStatus &,
  size_t current_alignment);
size_t
max_serialized_size_INSExtendedSolutionStatus(
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
  const novatel_oem7_msgs::msg::INSSTDEV & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: nov_header
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.nov_header,
    cdr);
  // Member: latitude_stdev
  cdr << ros_message.latitude_stdev;
  // Member: longitude_stdev
  cdr << ros_message.longitude_stdev;
  // Member: height_stdev
  cdr << ros_message.height_stdev;
  // Member: north_velocity_stdev
  cdr << ros_message.north_velocity_stdev;
  // Member: east_velocity_stdev
  cdr << ros_message.east_velocity_stdev;
  // Member: up_velocity_stdev
  cdr << ros_message.up_velocity_stdev;
  // Member: roll_stdev
  cdr << ros_message.roll_stdev;
  // Member: pitch_stdev
  cdr << ros_message.pitch_stdev;
  // Member: azimuth_stdev
  cdr << ros_message.azimuth_stdev;
  // Member: ext_sol_status
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ext_sol_status,
    cdr);
  // Member: time_since_last_update
  cdr << ros_message.time_since_last_update;
  // Member: reserved1
  cdr << ros_message.reserved1;
  // Member: reserved2
  cdr << ros_message.reserved2;
  // Member: reserved3
  cdr << ros_message.reserved3;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  novatel_oem7_msgs::msg::INSSTDEV & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: nov_header
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nov_header);

  // Member: latitude_stdev
  cdr >> ros_message.latitude_stdev;

  // Member: longitude_stdev
  cdr >> ros_message.longitude_stdev;

  // Member: height_stdev
  cdr >> ros_message.height_stdev;

  // Member: north_velocity_stdev
  cdr >> ros_message.north_velocity_stdev;

  // Member: east_velocity_stdev
  cdr >> ros_message.east_velocity_stdev;

  // Member: up_velocity_stdev
  cdr >> ros_message.up_velocity_stdev;

  // Member: roll_stdev
  cdr >> ros_message.roll_stdev;

  // Member: pitch_stdev
  cdr >> ros_message.pitch_stdev;

  // Member: azimuth_stdev
  cdr >> ros_message.azimuth_stdev;

  // Member: ext_sol_status
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ext_sol_status);

  // Member: time_since_last_update
  cdr >> ros_message.time_since_last_update;

  // Member: reserved1
  cdr >> ros_message.reserved1;

  // Member: reserved2
  cdr >> ros_message.reserved2;

  // Member: reserved3
  cdr >> ros_message.reserved3;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
get_serialized_size(
  const novatel_oem7_msgs::msg::INSSTDEV & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: nov_header

  current_alignment +=
    novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.nov_header, current_alignment);
  // Member: latitude_stdev
  {
    size_t item_size = sizeof(ros_message.latitude_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitude_stdev
  {
    size_t item_size = sizeof(ros_message.longitude_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height_stdev
  {
    size_t item_size = sizeof(ros_message.height_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: north_velocity_stdev
  {
    size_t item_size = sizeof(ros_message.north_velocity_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: east_velocity_stdev
  {
    size_t item_size = sizeof(ros_message.east_velocity_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: up_velocity_stdev
  {
    size_t item_size = sizeof(ros_message.up_velocity_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_stdev
  {
    size_t item_size = sizeof(ros_message.roll_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_stdev
  {
    size_t item_size = sizeof(ros_message.pitch_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: azimuth_stdev
  {
    size_t item_size = sizeof(ros_message.azimuth_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ext_sol_status

  current_alignment +=
    novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ext_sol_status, current_alignment);
  // Member: time_since_last_update
  {
    size_t item_size = sizeof(ros_message.time_since_last_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved1
  {
    size_t item_size = sizeof(ros_message.reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved2
  {
    size_t item_size = sizeof(ros_message.reserved2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved3
  {
    size_t item_size = sizeof(ros_message.reserved3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
max_serialized_size_INSSTDEV(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: nov_header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Oem7Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: latitude_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: longitude_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: height_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: north_velocity_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: east_velocity_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: up_velocity_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: azimuth_stdev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ext_sol_status
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_INSExtendedSolutionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: time_since_last_update
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: reserved1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: reserved2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reserved3
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
    using DataType = novatel_oem7_msgs::msg::INSSTDEV;
    is_plain =
      (
      offsetof(DataType, reserved3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _INSSTDEV__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const novatel_oem7_msgs::msg::INSSTDEV *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _INSSTDEV__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<novatel_oem7_msgs::msg::INSSTDEV *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _INSSTDEV__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const novatel_oem7_msgs::msg::INSSTDEV *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _INSSTDEV__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_INSSTDEV(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _INSSTDEV__callbacks = {
  "novatel_oem7_msgs::msg",
  "INSSTDEV",
  _INSSTDEV__cdr_serialize,
  _INSSTDEV__cdr_deserialize,
  _INSSTDEV__get_serialized_size,
  _INSSTDEV__max_serialized_size
};

static rosidl_message_type_support_t _INSSTDEV__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_INSSTDEV__callbacks,
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
get_message_type_support_handle<novatel_oem7_msgs::msg::INSSTDEV>()
{
  return &novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::_INSSTDEV__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, novatel_oem7_msgs, msg, INSSTDEV)() {
  return &novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::_INSSTDEV__handle;
}

#ifdef __cplusplus
}
#endif
