// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from raptor_dbw_msgs:msg/DriverInputReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/driver_input_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "raptor_dbw_msgs/msg/detail/driver_input_report__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_serialize(
  const raptor_dbw_msgs::msg::DriverInputReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: turn_signal
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.turn_signal,
    cdr);
  // Member: high_beam_headlights
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.high_beam_headlights,
    cdr);
  // Member: wiper
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.wiper,
    cdr);
  // Member: cruise_resume_button
  cdr << (ros_message.cruise_resume_button ? true : false);
  // Member: cruise_cancel_button
  cdr << (ros_message.cruise_cancel_button ? true : false);
  // Member: cruise_accel_button
  cdr << (ros_message.cruise_accel_button ? true : false);
  // Member: cruise_decel_button
  cdr << (ros_message.cruise_decel_button ? true : false);
  // Member: cruise_on_off_button
  cdr << (ros_message.cruise_on_off_button ? true : false);
  // Member: adaptive_cruise_on_off_button
  cdr << (ros_message.adaptive_cruise_on_off_button ? true : false);
  // Member: adaptive_cruise_increase_distance_button
  cdr << (ros_message.adaptive_cruise_increase_distance_button ? true : false);
  // Member: adaptive_cruise_decrease_distance_button
  cdr << (ros_message.adaptive_cruise_decrease_distance_button ? true : false);
  // Member: driver_door_ajar
  cdr << (ros_message.driver_door_ajar ? true : false);
  // Member: passenger_door_ajar
  cdr << (ros_message.passenger_door_ajar ? true : false);
  // Member: rear_left_door_ajar
  cdr << (ros_message.rear_left_door_ajar ? true : false);
  // Member: rear_right_door_ajar
  cdr << (ros_message.rear_right_door_ajar ? true : false);
  // Member: liftgate_ajar
  cdr << (ros_message.liftgate_ajar ? true : false);
  // Member: any_seatbelt_unbuckled
  cdr << (ros_message.any_seatbelt_unbuckled ? true : false);
  // Member: airbag_deployed
  cdr << (ros_message.airbag_deployed ? true : false);
  // Member: door_or_hood_ajar
  cdr << (ros_message.door_or_hood_ajar ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raptor_dbw_msgs::msg::DriverInputReport & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: turn_signal
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.turn_signal);

  // Member: high_beam_headlights
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.high_beam_headlights);

  // Member: wiper
  raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.wiper);

  // Member: cruise_resume_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cruise_resume_button = tmp ? true : false;
  }

  // Member: cruise_cancel_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cruise_cancel_button = tmp ? true : false;
  }

  // Member: cruise_accel_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cruise_accel_button = tmp ? true : false;
  }

  // Member: cruise_decel_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cruise_decel_button = tmp ? true : false;
  }

  // Member: cruise_on_off_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cruise_on_off_button = tmp ? true : false;
  }

  // Member: adaptive_cruise_on_off_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.adaptive_cruise_on_off_button = tmp ? true : false;
  }

  // Member: adaptive_cruise_increase_distance_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.adaptive_cruise_increase_distance_button = tmp ? true : false;
  }

  // Member: adaptive_cruise_decrease_distance_button
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.adaptive_cruise_decrease_distance_button = tmp ? true : false;
  }

  // Member: driver_door_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.driver_door_ajar = tmp ? true : false;
  }

  // Member: passenger_door_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.passenger_door_ajar = tmp ? true : false;
  }

  // Member: rear_left_door_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rear_left_door_ajar = tmp ? true : false;
  }

  // Member: rear_right_door_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rear_right_door_ajar = tmp ? true : false;
  }

  // Member: liftgate_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.liftgate_ajar = tmp ? true : false;
  }

  // Member: any_seatbelt_unbuckled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.any_seatbelt_unbuckled = tmp ? true : false;
  }

  // Member: airbag_deployed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.airbag_deployed = tmp ? true : false;
  }

  // Member: door_or_hood_ajar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.door_or_hood_ajar = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
get_serialized_size(
  const raptor_dbw_msgs::msg::DriverInputReport & ros_message,
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
  // Member: turn_signal

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.turn_signal, current_alignment);
  // Member: high_beam_headlights

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.high_beam_headlights, current_alignment);
  // Member: wiper

  current_alignment +=
    raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.wiper, current_alignment);
  // Member: cruise_resume_button
  {
    size_t item_size = sizeof(ros_message.cruise_resume_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cruise_cancel_button
  {
    size_t item_size = sizeof(ros_message.cruise_cancel_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cruise_accel_button
  {
    size_t item_size = sizeof(ros_message.cruise_accel_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cruise_decel_button
  {
    size_t item_size = sizeof(ros_message.cruise_decel_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cruise_on_off_button
  {
    size_t item_size = sizeof(ros_message.cruise_on_off_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adaptive_cruise_on_off_button
  {
    size_t item_size = sizeof(ros_message.adaptive_cruise_on_off_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adaptive_cruise_increase_distance_button
  {
    size_t item_size = sizeof(ros_message.adaptive_cruise_increase_distance_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adaptive_cruise_decrease_distance_button
  {
    size_t item_size = sizeof(ros_message.adaptive_cruise_decrease_distance_button);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: driver_door_ajar
  {
    size_t item_size = sizeof(ros_message.driver_door_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: passenger_door_ajar
  {
    size_t item_size = sizeof(ros_message.passenger_door_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_left_door_ajar
  {
    size_t item_size = sizeof(ros_message.rear_left_door_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_right_door_ajar
  {
    size_t item_size = sizeof(ros_message.rear_right_door_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: liftgate_ajar
  {
    size_t item_size = sizeof(ros_message.liftgate_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: any_seatbelt_unbuckled
  {
    size_t item_size = sizeof(ros_message.any_seatbelt_unbuckled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: airbag_deployed
  {
    size_t item_size = sizeof(ros_message.airbag_deployed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_or_hood_ajar
  {
    size_t item_size = sizeof(ros_message.door_or_hood_ajar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
max_serialized_size_DriverInputReport(
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

  // Member: turn_signal
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

  // Member: high_beam_headlights
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

  // Member: wiper
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

  // Member: cruise_resume_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cruise_cancel_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cruise_accel_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cruise_decel_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cruise_on_off_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: adaptive_cruise_on_off_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: adaptive_cruise_increase_distance_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: adaptive_cruise_decrease_distance_button
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: driver_door_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: passenger_door_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rear_left_door_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rear_right_door_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: liftgate_ajar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: any_seatbelt_unbuckled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: airbag_deployed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_or_hood_ajar
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
    using DataType = raptor_dbw_msgs::msg::DriverInputReport;
    is_plain =
      (
      offsetof(DataType, door_or_hood_ajar) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DriverInputReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::DriverInputReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DriverInputReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<raptor_dbw_msgs::msg::DriverInputReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DriverInputReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::DriverInputReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DriverInputReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DriverInputReport(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DriverInputReport__callbacks = {
  "raptor_dbw_msgs::msg",
  "DriverInputReport",
  _DriverInputReport__cdr_serialize,
  _DriverInputReport__cdr_deserialize,
  _DriverInputReport__get_serialized_size,
  _DriverInputReport__max_serialized_size
};

static rosidl_message_type_support_t _DriverInputReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DriverInputReport__callbacks,
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
get_message_type_support_handle<raptor_dbw_msgs::msg::DriverInputReport>()
{
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_DriverInputReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raptor_dbw_msgs, msg, DriverInputReport)() {
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_DriverInputReport__handle;
}

#ifdef __cplusplus
}
#endif
