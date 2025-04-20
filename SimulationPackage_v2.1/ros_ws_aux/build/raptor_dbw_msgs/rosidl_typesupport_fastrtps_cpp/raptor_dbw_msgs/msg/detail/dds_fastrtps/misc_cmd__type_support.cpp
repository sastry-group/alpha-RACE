// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from raptor_dbw_msgs:msg/MiscCmd.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/misc_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "raptor_dbw_msgs/msg/detail/misc_cmd__struct.hpp"

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
  const raptor_dbw_msgs::msg::TurnSignal &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  raptor_dbw_msgs::msg::TurnSignal &);
size_t get_serialized_size(
  const raptor_dbw_msgs::msg::TurnSignal &,
  size_t current_alignment);
size_t
max_serialized_size_TurnSignal(
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
  const raptor_dbw_msgs::msg::DoorRequest &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  raptor_dbw_msgs::msg::DoorRequest &);
size_t get_serialized_size(
  const raptor_dbw_msgs::msg::DoorRequest &,
  size_t current_alignment);
size_t
max_serialized_size_DoorRequest(
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
  const raptor_dbw_msgs::msg::HighBeam &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  raptor_dbw_msgs::msg::HighBeam &);
size_t get_serialized_size(
  const raptor_dbw_msgs::msg::HighBeam &,
  size_t current_alignment);
size_t
max_serialized_size_HighBeam(
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
  const raptor_dbw_msgs::msg::WiperFront &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  raptor_dbw_msgs::msg::WiperFront &);
size_t get_serialized_size(
  const raptor_dbw_msgs::msg::WiperFront &,
  size_t current_alignment);
size_t
max_serialized_size_WiperFront(
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
  const raptor_dbw_msgs::msg::WiperRear &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  raptor_dbw_msgs::msg::WiperRear &);
size_t get_serialized_size(
  const raptor_dbw_msgs::msg::WiperRear &,
  size_t current_alignment);
size_t
max_serialized_size_WiperRear(
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
  const raptor_dbw_msgs::msg::Ignition &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  raptor_dbw_msgs::msg::Ignition &);
size_t get_serialized_size(
  const raptor_dbw_msgs::msg::Ignition &,
  size_t current_alignment);
size_t
max_serialized_size_Ignition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace raptor_dbw_msgs

// functions for raptor_dbw_msgs::msg::DoorRequest already declared above

// functions for raptor_dbw_msgs::msg::DoorRequest already declared above

namespace raptor_dbw_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const raptor_dbw_msgs::msg::LowBeam &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  raptor_dbw_msgs::msg::LowBeam &);
size_t get_serialized_size(
  const raptor_dbw_msgs::msg::LowBeam &,
  size_t current_alignment);
size_t
max_serialized_size_LowBeam(
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
  const raptor_dbw_msgs::msg::MiscCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cmd,
    cdr);
  // Member: door_request_right_rear
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.door_request_right_rear,
    cdr);
  // Member: rolling_counter
  cdr << ros_message.rolling_counter;
  // Member: high_beam_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.high_beam_cmd,
    cdr);
  // Member: front_wiper_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.front_wiper_cmd,
    cdr);
  // Member: rear_wiper_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rear_wiper_cmd,
    cdr);
  // Member: ignition_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ignition_cmd,
    cdr);
  // Member: door_request_left_rear
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.door_request_left_rear,
    cdr);
  // Member: door_request_lift_gate
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.door_request_lift_gate,
    cdr);
  // Member: block_standard_cruise_buttons
  cdr << (ros_message.block_standard_cruise_buttons ? true : false);
  // Member: block_adaptive_cruise_buttons
  cdr << (ros_message.block_adaptive_cruise_buttons ? true : false);
  // Member: block_turn_signal_stalk
  cdr << (ros_message.block_turn_signal_stalk ? true : false);
  // Member: horn_cmd
  cdr << (ros_message.horn_cmd ? true : false);
  // Member: low_beam_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.low_beam_cmd,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raptor_dbw_msgs::msg::MiscCmd & ros_message)
{
  // Member: cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cmd);

  // Member: door_request_right_rear
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.door_request_right_rear);

  // Member: rolling_counter
  cdr >> ros_message.rolling_counter;

  // Member: high_beam_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.high_beam_cmd);

  // Member: front_wiper_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.front_wiper_cmd);

  // Member: rear_wiper_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rear_wiper_cmd);

  // Member: ignition_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ignition_cmd);

  // Member: door_request_left_rear
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.door_request_left_rear);

  // Member: door_request_lift_gate
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.door_request_lift_gate);

  // Member: block_standard_cruise_buttons
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.block_standard_cruise_buttons = tmp ? true : false;
  }

  // Member: block_adaptive_cruise_buttons
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.block_adaptive_cruise_buttons = tmp ? true : false;
  }

  // Member: block_turn_signal_stalk
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.block_turn_signal_stalk = tmp ? true : false;
  }

  // Member: horn_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.horn_cmd = tmp ? true : false;
  }

  // Member: low_beam_cmd
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.low_beam_cmd);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
get_serialized_size(
  const raptor_dbw_msgs::msg::MiscCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cmd

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cmd, current_alignment);
  // Member: door_request_right_rear

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.door_request_right_rear, current_alignment);
  // Member: rolling_counter
  {
    size_t item_size = sizeof(ros_message.rolling_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: high_beam_cmd

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.high_beam_cmd, current_alignment);
  // Member: front_wiper_cmd

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.front_wiper_cmd, current_alignment);
  // Member: rear_wiper_cmd

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rear_wiper_cmd, current_alignment);
  // Member: ignition_cmd

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ignition_cmd, current_alignment);
  // Member: door_request_left_rear

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.door_request_left_rear, current_alignment);
  // Member: door_request_lift_gate

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.door_request_lift_gate, current_alignment);
  // Member: block_standard_cruise_buttons
  {
    size_t item_size = sizeof(ros_message.block_standard_cruise_buttons);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: block_adaptive_cruise_buttons
  {
    size_t item_size = sizeof(ros_message.block_adaptive_cruise_buttons);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: block_turn_signal_stalk
  {
    size_t item_size = sizeof(ros_message.block_turn_signal_stalk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horn_cmd
  {
    size_t item_size = sizeof(ros_message.horn_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: low_beam_cmd

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.low_beam_cmd, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
max_serialized_size_MiscCmd(
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


  // Member: cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TurnSignal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: door_request_right_rear
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DoorRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rolling_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: high_beam_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HighBeam(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: front_wiper_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WiperFront(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rear_wiper_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WiperRear(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ignition_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Ignition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: door_request_left_rear
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DoorRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: door_request_lift_gate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DoorRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: block_standard_cruise_buttons
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: block_adaptive_cruise_buttons
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: block_turn_signal_stalk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: horn_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: low_beam_cmd
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LowBeam(
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
    using DataType = raptor_dbw_msgs::msg::MiscCmd;
    is_plain =
      (
      offsetof(DataType, low_beam_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MiscCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::MiscCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MiscCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<raptor_dbw_msgs::msg::MiscCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MiscCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::MiscCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MiscCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MiscCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MiscCmd__callbacks = {
  "raptor_dbw_msgs::msg",
  "MiscCmd",
  _MiscCmd__cdr_serialize,
  _MiscCmd__cdr_deserialize,
  _MiscCmd__get_serialized_size,
  _MiscCmd__max_serialized_size
};

static rosidl_message_type_support_t _MiscCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MiscCmd__callbacks,
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
get_message_type_support_handle<raptor_dbw_msgs::msg::MiscCmd>()
{
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_MiscCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raptor_dbw_msgs, msg, MiscCmd)() {
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_MiscCmd__handle;
}

#ifdef __cplusplus
}
#endif
