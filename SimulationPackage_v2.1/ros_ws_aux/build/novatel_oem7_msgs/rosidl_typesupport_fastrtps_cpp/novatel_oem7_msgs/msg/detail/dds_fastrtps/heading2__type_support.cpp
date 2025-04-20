// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from novatel_oem7_msgs:msg/HEADING2.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/heading2__rosidl_typesupport_fastrtps_cpp.hpp"
#include "novatel_oem7_msgs/msg/detail/heading2__struct.hpp"

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
  const novatel_oem7_msgs::msg::SolutionStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  novatel_oem7_msgs::msg::SolutionStatus &);
size_t get_serialized_size(
  const novatel_oem7_msgs::msg::SolutionStatus &,
  size_t current_alignment);
size_t
max_serialized_size_SolutionStatus(
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
  const novatel_oem7_msgs::msg::PositionOrVelocityType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  novatel_oem7_msgs::msg::PositionOrVelocityType &);
size_t get_serialized_size(
  const novatel_oem7_msgs::msg::PositionOrVelocityType &,
  size_t current_alignment);
size_t
max_serialized_size_PositionOrVelocityType(
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
  const novatel_oem7_msgs::msg::SolutionSource &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  novatel_oem7_msgs::msg::SolutionSource &);
size_t get_serialized_size(
  const novatel_oem7_msgs::msg::SolutionSource &,
  size_t current_alignment);
size_t
max_serialized_size_SolutionSource(
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
  const novatel_oem7_msgs::msg::BestExtendedSolutionStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  novatel_oem7_msgs::msg::BestExtendedSolutionStatus &);
size_t get_serialized_size(
  const novatel_oem7_msgs::msg::BestExtendedSolutionStatus &,
  size_t current_alignment);
size_t
max_serialized_size_BestExtendedSolutionStatus(
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
  const novatel_oem7_msgs::msg::HEADING2 & ros_message,
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
  // Member: sol_status
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sol_status,
    cdr);
  // Member: pos_type
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pos_type,
    cdr);
  // Member: length
  cdr << ros_message.length;
  // Member: heading
  cdr << ros_message.heading;
  // Member: pitch
  cdr << ros_message.pitch;
  // Member: reserved
  cdr << ros_message.reserved;
  // Member: heading_stdev
  cdr << ros_message.heading_stdev;
  // Member: pitch_stdev
  cdr << ros_message.pitch_stdev;
  // Member: rover_stn_id
  {
    cdr << ros_message.rover_stn_id;
  }
  // Member: master_stn_id
  {
    cdr << ros_message.master_stn_id;
  }
  // Member: num_sv_tracked
  cdr << ros_message.num_sv_tracked;
  // Member: num_sv_in_sol
  cdr << ros_message.num_sv_in_sol;
  // Member: num_sv_obs
  cdr << ros_message.num_sv_obs;
  // Member: num_sv_multi
  cdr << ros_message.num_sv_multi;
  // Member: sol_source
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sol_source,
    cdr);
  // Member: ext_sol_status
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ext_sol_status,
    cdr);
  // Member: galileo_beidou_sig_mask
  cdr << ros_message.galileo_beidou_sig_mask;
  // Member: gps_glonass_sig_mask
  cdr << ros_message.gps_glonass_sig_mask;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  novatel_oem7_msgs::msg::HEADING2 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: nov_header
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nov_header);

  // Member: sol_status
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sol_status);

  // Member: pos_type
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pos_type);

  // Member: length
  cdr >> ros_message.length;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: pitch
  cdr >> ros_message.pitch;

  // Member: reserved
  cdr >> ros_message.reserved;

  // Member: heading_stdev
  cdr >> ros_message.heading_stdev;

  // Member: pitch_stdev
  cdr >> ros_message.pitch_stdev;

  // Member: rover_stn_id
  {
    cdr >> ros_message.rover_stn_id;
  }

  // Member: master_stn_id
  {
    cdr >> ros_message.master_stn_id;
  }

  // Member: num_sv_tracked
  cdr >> ros_message.num_sv_tracked;

  // Member: num_sv_in_sol
  cdr >> ros_message.num_sv_in_sol;

  // Member: num_sv_obs
  cdr >> ros_message.num_sv_obs;

  // Member: num_sv_multi
  cdr >> ros_message.num_sv_multi;

  // Member: sol_source
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sol_source);

  // Member: ext_sol_status
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ext_sol_status);

  // Member: galileo_beidou_sig_mask
  cdr >> ros_message.galileo_beidou_sig_mask;

  // Member: gps_glonass_sig_mask
  cdr >> ros_message.gps_glonass_sig_mask;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
get_serialized_size(
  const novatel_oem7_msgs::msg::HEADING2 & ros_message,
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
  // Member: sol_status

  current_alignment +=
    novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sol_status, current_alignment);
  // Member: pos_type

  current_alignment +=
    novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pos_type, current_alignment);
  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch
  {
    size_t item_size = sizeof(ros_message.pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved
  {
    size_t item_size = sizeof(ros_message.reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_stdev
  {
    size_t item_size = sizeof(ros_message.heading_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_stdev
  {
    size_t item_size = sizeof(ros_message.pitch_stdev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rover_stn_id
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.rover_stn_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: master_stn_id
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.master_stn_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_sv_tracked
  {
    size_t item_size = sizeof(ros_message.num_sv_tracked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_sv_in_sol
  {
    size_t item_size = sizeof(ros_message.num_sv_in_sol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_sv_obs
  {
    size_t item_size = sizeof(ros_message.num_sv_obs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_sv_multi
  {
    size_t item_size = sizeof(ros_message.num_sv_multi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sol_source

  current_alignment +=
    novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sol_source, current_alignment);
  // Member: ext_sol_status

  current_alignment +=
    novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ext_sol_status, current_alignment);
  // Member: galileo_beidou_sig_mask
  {
    size_t item_size = sizeof(ros_message.galileo_beidou_sig_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_glonass_sig_mask
  {
    size_t item_size = sizeof(ros_message.gps_glonass_sig_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
max_serialized_size_HEADING2(
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

  // Member: sol_status
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SolutionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: pos_type
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PositionOrVelocityType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_stdev
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

  // Member: rover_stn_id
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: master_stn_id
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_sv_tracked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_sv_in_sol
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_sv_obs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_sv_multi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sol_source
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SolutionSource(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ext_sol_status
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BestExtendedSolutionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: galileo_beidou_sig_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_glonass_sig_mask
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
    using DataType = novatel_oem7_msgs::msg::HEADING2;
    is_plain =
      (
      offsetof(DataType, gps_glonass_sig_mask) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _HEADING2__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const novatel_oem7_msgs::msg::HEADING2 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HEADING2__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<novatel_oem7_msgs::msg::HEADING2 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HEADING2__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const novatel_oem7_msgs::msg::HEADING2 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HEADING2__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HEADING2(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HEADING2__callbacks = {
  "novatel_oem7_msgs::msg",
  "HEADING2",
  _HEADING2__cdr_serialize,
  _HEADING2__cdr_deserialize,
  _HEADING2__get_serialized_size,
  _HEADING2__max_serialized_size
};

static rosidl_message_type_support_t _HEADING2__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HEADING2__callbacks,
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
get_message_type_support_handle<novatel_oem7_msgs::msg::HEADING2>()
{
  return &novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::_HEADING2__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, novatel_oem7_msgs, msg, HEADING2)() {
  return &novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::_HEADING2__handle;
}

#ifdef __cplusplus
}
#endif
