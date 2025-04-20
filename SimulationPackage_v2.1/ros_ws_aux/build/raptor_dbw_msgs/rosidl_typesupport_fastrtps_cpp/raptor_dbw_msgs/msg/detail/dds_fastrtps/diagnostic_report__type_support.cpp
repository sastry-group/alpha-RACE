// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from raptor_dbw_msgs:msg/DiagnosticReport.idl
// generated code does not contain a copyright notice
#include "raptor_dbw_msgs/msg/detail/diagnostic_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "raptor_dbw_msgs/msg/detail/diagnostic_report__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_serialize(
  const raptor_dbw_msgs::msg::DiagnosticReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: sd_system_warning
  cdr << (ros_message.sd_system_warning ? true : false);
  // Member: sd_system_failure
  cdr << (ros_message.sd_system_failure ? true : false);
  // Member: sd_brake_warning1
  cdr << (ros_message.sd_brake_warning1 ? true : false);
  // Member: sd_brake_warning2
  cdr << (ros_message.sd_brake_warning2 ? true : false);
  // Member: sd_brake_warning3
  cdr << (ros_message.sd_brake_warning3 ? true : false);
  // Member: sd_steer_warning1
  cdr << (ros_message.sd_steer_warning1 ? true : false);
  // Member: sd_steer_warning2
  cdr << (ros_message.sd_steer_warning2 ? true : false);
  // Member: sd_steer_warning3
  cdr << (ros_message.sd_steer_warning3 ? true : false);
  // Member: motec_warning
  cdr << ros_message.motec_warning;
  // Member: front_brk_failure
  cdr << (ros_message.front_brk_failure ? true : false);
  // Member: rear_brk_failure
  cdr << (ros_message.rear_brk_failure ? true : false);
  // Member: low_eng_speed
  cdr << (ros_message.low_eng_speed ? true : false);
  // Member: sd_comms_loss
  cdr << (ros_message.sd_comms_loss ? true : false);
  // Member: motec_comms_loss
  cdr << (ros_message.motec_comms_loss ? true : false);
  // Member: sd_ebrake
  cdr << (ros_message.sd_ebrake ? true : false);
  // Member: adlink_hb_lost
  cdr << (ros_message.adlink_hb_lost ? true : false);
  // Member: rc_lost
  cdr << (ros_message.rc_lost ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raptor_dbw_msgs::msg::DiagnosticReport & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: sd_system_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_system_warning = tmp ? true : false;
  }

  // Member: sd_system_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_system_failure = tmp ? true : false;
  }

  // Member: sd_brake_warning1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_brake_warning1 = tmp ? true : false;
  }

  // Member: sd_brake_warning2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_brake_warning2 = tmp ? true : false;
  }

  // Member: sd_brake_warning3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_brake_warning3 = tmp ? true : false;
  }

  // Member: sd_steer_warning1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_steer_warning1 = tmp ? true : false;
  }

  // Member: sd_steer_warning2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_steer_warning2 = tmp ? true : false;
  }

  // Member: sd_steer_warning3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_steer_warning3 = tmp ? true : false;
  }

  // Member: motec_warning
  cdr >> ros_message.motec_warning;

  // Member: front_brk_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.front_brk_failure = tmp ? true : false;
  }

  // Member: rear_brk_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rear_brk_failure = tmp ? true : false;
  }

  // Member: low_eng_speed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.low_eng_speed = tmp ? true : false;
  }

  // Member: sd_comms_loss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_comms_loss = tmp ? true : false;
  }

  // Member: motec_comms_loss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motec_comms_loss = tmp ? true : false;
  }

  // Member: sd_ebrake
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_ebrake = tmp ? true : false;
  }

  // Member: adlink_hb_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.adlink_hb_lost = tmp ? true : false;
  }

  // Member: rc_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_lost = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
get_serialized_size(
  const raptor_dbw_msgs::msg::DiagnosticReport & ros_message,
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
  // Member: sd_system_warning
  {
    size_t item_size = sizeof(ros_message.sd_system_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_system_failure
  {
    size_t item_size = sizeof(ros_message.sd_system_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_brake_warning1
  {
    size_t item_size = sizeof(ros_message.sd_brake_warning1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_brake_warning2
  {
    size_t item_size = sizeof(ros_message.sd_brake_warning2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_brake_warning3
  {
    size_t item_size = sizeof(ros_message.sd_brake_warning3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_steer_warning1
  {
    size_t item_size = sizeof(ros_message.sd_steer_warning1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_steer_warning2
  {
    size_t item_size = sizeof(ros_message.sd_steer_warning2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_steer_warning3
  {
    size_t item_size = sizeof(ros_message.sd_steer_warning3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motec_warning
  {
    size_t item_size = sizeof(ros_message.motec_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_brk_failure
  {
    size_t item_size = sizeof(ros_message.front_brk_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rear_brk_failure
  {
    size_t item_size = sizeof(ros_message.rear_brk_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: low_eng_speed
  {
    size_t item_size = sizeof(ros_message.low_eng_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_comms_loss
  {
    size_t item_size = sizeof(ros_message.sd_comms_loss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motec_comms_loss
  {
    size_t item_size = sizeof(ros_message.motec_comms_loss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_ebrake
  {
    size_t item_size = sizeof(ros_message.sd_ebrake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adlink_hb_lost
  {
    size_t item_size = sizeof(ros_message.adlink_hb_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_lost
  {
    size_t item_size = sizeof(ros_message.rc_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raptor_dbw_msgs
max_serialized_size_DiagnosticReport(
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

  // Member: sd_system_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_system_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_brake_warning1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_brake_warning2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_brake_warning3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_steer_warning1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_steer_warning2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_steer_warning3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motec_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: front_brk_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rear_brk_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: low_eng_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_comms_loss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motec_comms_loss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_ebrake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: adlink_hb_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_lost
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
    using DataType = raptor_dbw_msgs::msg::DiagnosticReport;
    is_plain =
      (
      offsetof(DataType, rc_lost) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DiagnosticReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::DiagnosticReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DiagnosticReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<raptor_dbw_msgs::msg::DiagnosticReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DiagnosticReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const raptor_dbw_msgs::msg::DiagnosticReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DiagnosticReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DiagnosticReport(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DiagnosticReport__callbacks = {
  "raptor_dbw_msgs::msg",
  "DiagnosticReport",
  _DiagnosticReport__cdr_serialize,
  _DiagnosticReport__cdr_deserialize,
  _DiagnosticReport__get_serialized_size,
  _DiagnosticReport__max_serialized_size
};

static rosidl_message_type_support_t _DiagnosticReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DiagnosticReport__callbacks,
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
get_message_type_support_handle<raptor_dbw_msgs::msg::DiagnosticReport>()
{
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_DiagnosticReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raptor_dbw_msgs, msg, DiagnosticReport)() {
  return &raptor_dbw_msgs::msg::typesupport_fastrtps_cpp::_DiagnosticReport__handle;
}

#ifdef __cplusplus
}
#endif
