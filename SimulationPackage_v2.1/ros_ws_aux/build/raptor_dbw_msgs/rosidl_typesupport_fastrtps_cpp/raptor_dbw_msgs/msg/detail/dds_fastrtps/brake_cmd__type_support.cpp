// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from raptor_dbw_msgs:msg/BrakeCmd.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/brake_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "raptor_dbw_msgs/msg/detail/brake_cmd__struct.hpp"

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
namespace raptor_dbw_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const raptor_dbw_msgs::msg::ActuatorControlMode &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  raptor_dbw_msgs::msg::ActuatorControlMode &);
size_t get_serialized_size(
  const raptor_dbw_msgs::msg::ActuatorControlMode &,
  size_t current_alignment);
size_t
max_serialized_size_ActuatorControlMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace raptor_dbw_msgs

namespace raptor_dbw_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const raptor_dbw_msgs::msg::ParkingBrake &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  raptor_dbw_msgs::msg::ParkingBrake &);
size_t get_serialized_size(
  const raptor_dbw_msgs::msg::ParkingBrake &,
  size_t current_alignment);
size_t
max_serialized_size_ParkingBrake(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace raptor_dbw_msgs


namespace raptor_dbw_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_serialize(
  const raptor_dbw_msgs::msg::BrakeCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pedal_cmd
  cdr << ros_message.pedal_cmd;
  // Member: enable
  cdr << (ros_message.enable ? true : false);
  // Member: rolling_counter
  cdr << ros_message.rolling_counter;
  // Member: torque_cmd
  cdr << ros_message.torque_cmd;
  // Member: decel_limit
  cdr << ros_message.decel_limit;
  // Member: control_type
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.control_type,
    cdr);
  // Member: decel_negative_jerk_limit
  cdr << ros_message.decel_negative_jerk_limit;
  // Member: park_brake_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.park_brake_cmd,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raptor_dbw_msgs::msg::BrakeCmd & ros_message)
{
  // Member: pedal_cmd
  cdr >> ros_message.pedal_cmd;

  // Member: enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enable = tmp ? true : false;
  }

  // Member: rolling_counter
  cdr >> ros_message.rolling_counter;

  // Member: torque_cmd
  cdr >> ros_message.torque_cmd;

  // Member: decel_limit
  cdr >> ros_message.decel_limit;

  // Member: control_type
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.control_type);

  // Member: decel_negative_jerk_limit
  cdr >> ros_message.decel_negative_jerk_limit;

  // Member: park_brake_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.park_brake_cmd);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
get_serialized_size(
  const raptor_dbw_msgs::msg::BrakeCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pedal_cmd
  {
    size_t item_size = sizeof(ros_message.pedal_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enable
  {
    size_t item_size = sizeof(ros_message.enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rolling_counter
  {
    size_t item_size = sizeof(ros_message.rolling_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque_cmd
  {
    size_t item_size = sizeof(ros_message.torque_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: decel_limit
  {
    size_t item_size = sizeof(ros_message.decel_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_type

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.control_type, current_alignment);
  // Member: decel_negative_jerk_limit
  {
    size_t item_size = sizeof(ros_message.decel_negative_jerk_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: park_brake_cmd

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.park_brake_cmd, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
max_serialized_size_BrakeCmd(
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


  // Member: pedal_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rolling_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: torque_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: decel_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: control_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ActuatorControlMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: decel_negative_jerk_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: park_brake_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ParkingBrake(
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
    using DataType = raptor_dbw_msgs::msg::BrakeCmd;
    is_plain =
      (
      offsetof(DataType, park_brake_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BrakeCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::BrakeCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BrakeCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<raptor_dbw_msgs::msg::BrakeCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BrakeCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::BrakeCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BrakeCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BrakeCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BrakeCmd__callbacks = {
  "raptor_dbw_msgs::msg",
  "BrakeCmd",
  _BrakeCmd__cdr_serialize,
  _BrakeCmd__cdr_deserialize,
  _BrakeCmd__get_serialized_size,
  _BrakeCmd__max_serialized_size
};

static rosidl_message_type_support_t _BrakeCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BrakeCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace raptor_dbw_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_raptor_dbw_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<raptor_dbw_msgs::msg::BrakeCmd>()
{
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_BrakeCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raptor_dbw_msgs, msg, BrakeCmd)() {
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_BrakeCmd__handle;
}

#ifdef __cplusplus
}
#endif
