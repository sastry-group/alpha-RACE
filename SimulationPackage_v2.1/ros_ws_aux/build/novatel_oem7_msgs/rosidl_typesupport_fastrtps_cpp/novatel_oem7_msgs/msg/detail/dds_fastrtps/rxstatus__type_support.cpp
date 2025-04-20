// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from novatel_oem7_msgs:msg/RXSTATUS.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/rxstatus__rosidl_typesupport_fastrtps_cpp.hpp"
#include "novatel_oem7_msgs/msg/detail/rxstatus__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
cdr_serialize(
  const novatel_oem7_msgs::msg::RXSTATUS & ros_message,
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
  // Member: error
  cdr << ros_message.error;
  // Member: num_status_codes
  cdr << ros_message.num_status_codes;
  // Member: rxstat
  cdr << ros_message.rxstat;
  // Member: rxstat_pri_mask
  cdr << ros_message.rxstat_pri_mask;
  // Member: rxstat_set_mask
  cdr << ros_message.rxstat_set_mask;
  // Member: rxstat_clr_mask
  cdr << ros_message.rxstat_clr_mask;
  // Member: aux1_stat
  cdr << ros_message.aux1_stat;
  // Member: aux1_stat_pri
  cdr << ros_message.aux1_stat_pri;
  // Member: aux1_stat_set
  cdr << ros_message.aux1_stat_set;
  // Member: aux1_stat_clr
  cdr << ros_message.aux1_stat_clr;
  // Member: aux2_stat
  cdr << ros_message.aux2_stat;
  // Member: aux2_stat_pri
  cdr << ros_message.aux2_stat_pri;
  // Member: aux2_stat_set
  cdr << ros_message.aux2_stat_set;
  // Member: aux2_stat_clr
  cdr << ros_message.aux2_stat_clr;
  // Member: aux3_stat
  cdr << ros_message.aux3_stat;
  // Member: aux3_stat_pri
  cdr << ros_message.aux3_stat_pri;
  // Member: aux3_stat_set
  cdr << ros_message.aux3_stat_set;
  // Member: aux3_stat_clr
  cdr << ros_message.aux3_stat_clr;
  // Member: aux4_stat
  cdr << ros_message.aux4_stat;
  // Member: aux4_stat_pri
  cdr << ros_message.aux4_stat_pri;
  // Member: aux4_stat_set
  cdr << ros_message.aux4_stat_set;
  // Member: aux4_stat_clr
  cdr << ros_message.aux4_stat_clr;
  // Member: error_bits
  {
    size_t size = ros_message.error_bits.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.error_bits[0]), size);
    }
  }
  // Member: error_strs
  {
    size_t size = ros_message.error_strs.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.error_strs[i];
    }
  }
  // Member: rxstat_bits
  {
    size_t size = ros_message.rxstat_bits.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.rxstat_bits[0]), size);
    }
  }
  // Member: rxstat_strs
  {
    size_t size = ros_message.rxstat_strs.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.rxstat_strs[i];
    }
  }
  // Member: aux1_stat_bits
  {
    size_t size = ros_message.aux1_stat_bits.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.aux1_stat_bits[0]), size);
    }
  }
  // Member: aux1_stat_strs
  {
    size_t size = ros_message.aux1_stat_strs.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.aux1_stat_strs[i];
    }
  }
  // Member: aux2_stat_bits
  {
    size_t size = ros_message.aux2_stat_bits.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.aux2_stat_bits[0]), size);
    }
  }
  // Member: aux2_stat_strs
  {
    size_t size = ros_message.aux2_stat_strs.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.aux2_stat_strs[i];
    }
  }
  // Member: aux3_stat_bits
  {
    size_t size = ros_message.aux3_stat_bits.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.aux3_stat_bits[0]), size);
    }
  }
  // Member: aux3_stat_strs
  {
    size_t size = ros_message.aux3_stat_strs.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.aux3_stat_strs[i];
    }
  }
  // Member: aux4_stat_bits
  {
    size_t size = ros_message.aux4_stat_bits.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.aux4_stat_bits[0]), size);
    }
  }
  // Member: aux4_stat_strs
  {
    size_t size = ros_message.aux4_stat_strs.size();
    if (size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.aux4_stat_strs[i];
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  novatel_oem7_msgs::msg::RXSTATUS & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: nov_header
  novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.nov_header);

  // Member: error
  cdr >> ros_message.error;

  // Member: num_status_codes
  cdr >> ros_message.num_status_codes;

  // Member: rxstat
  cdr >> ros_message.rxstat;

  // Member: rxstat_pri_mask
  cdr >> ros_message.rxstat_pri_mask;

  // Member: rxstat_set_mask
  cdr >> ros_message.rxstat_set_mask;

  // Member: rxstat_clr_mask
  cdr >> ros_message.rxstat_clr_mask;

  // Member: aux1_stat
  cdr >> ros_message.aux1_stat;

  // Member: aux1_stat_pri
  cdr >> ros_message.aux1_stat_pri;

  // Member: aux1_stat_set
  cdr >> ros_message.aux1_stat_set;

  // Member: aux1_stat_clr
  cdr >> ros_message.aux1_stat_clr;

  // Member: aux2_stat
  cdr >> ros_message.aux2_stat;

  // Member: aux2_stat_pri
  cdr >> ros_message.aux2_stat_pri;

  // Member: aux2_stat_set
  cdr >> ros_message.aux2_stat_set;

  // Member: aux2_stat_clr
  cdr >> ros_message.aux2_stat_clr;

  // Member: aux3_stat
  cdr >> ros_message.aux3_stat;

  // Member: aux3_stat_pri
  cdr >> ros_message.aux3_stat_pri;

  // Member: aux3_stat_set
  cdr >> ros_message.aux3_stat_set;

  // Member: aux3_stat_clr
  cdr >> ros_message.aux3_stat_clr;

  // Member: aux4_stat
  cdr >> ros_message.aux4_stat;

  // Member: aux4_stat_pri
  cdr >> ros_message.aux4_stat_pri;

  // Member: aux4_stat_set
  cdr >> ros_message.aux4_stat_set;

  // Member: aux4_stat_clr
  cdr >> ros_message.aux4_stat_clr;

  // Member: error_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.error_bits.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.error_bits[0]), size);
    }
  }

  // Member: error_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.error_strs.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.error_strs[i];
    }
  }

  // Member: rxstat_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.rxstat_bits.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.rxstat_bits[0]), size);
    }
  }

  // Member: rxstat_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.rxstat_strs.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.rxstat_strs[i];
    }
  }

  // Member: aux1_stat_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.aux1_stat_bits.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.aux1_stat_bits[0]), size);
    }
  }

  // Member: aux1_stat_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.aux1_stat_strs.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.aux1_stat_strs[i];
    }
  }

  // Member: aux2_stat_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.aux2_stat_bits.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.aux2_stat_bits[0]), size);
    }
  }

  // Member: aux2_stat_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.aux2_stat_strs.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.aux2_stat_strs[i];
    }
  }

  // Member: aux3_stat_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.aux3_stat_bits.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.aux3_stat_bits[0]), size);
    }
  }

  // Member: aux3_stat_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.aux3_stat_strs.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.aux3_stat_strs[i];
    }
  }

  // Member: aux4_stat_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.aux4_stat_bits.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.aux4_stat_bits[0]), size);
    }
  }

  // Member: aux4_stat_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.aux4_stat_strs.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.aux4_stat_strs[i];
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
get_serialized_size(
  const novatel_oem7_msgs::msg::RXSTATUS & ros_message,
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
  // Member: error
  {
    size_t item_size = sizeof(ros_message.error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_status_codes
  {
    size_t item_size = sizeof(ros_message.num_status_codes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rxstat
  {
    size_t item_size = sizeof(ros_message.rxstat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rxstat_pri_mask
  {
    size_t item_size = sizeof(ros_message.rxstat_pri_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rxstat_set_mask
  {
    size_t item_size = sizeof(ros_message.rxstat_set_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rxstat_clr_mask
  {
    size_t item_size = sizeof(ros_message.rxstat_clr_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux1_stat
  {
    size_t item_size = sizeof(ros_message.aux1_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux1_stat_pri
  {
    size_t item_size = sizeof(ros_message.aux1_stat_pri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux1_stat_set
  {
    size_t item_size = sizeof(ros_message.aux1_stat_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux1_stat_clr
  {
    size_t item_size = sizeof(ros_message.aux1_stat_clr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux2_stat
  {
    size_t item_size = sizeof(ros_message.aux2_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux2_stat_pri
  {
    size_t item_size = sizeof(ros_message.aux2_stat_pri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux2_stat_set
  {
    size_t item_size = sizeof(ros_message.aux2_stat_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux2_stat_clr
  {
    size_t item_size = sizeof(ros_message.aux2_stat_clr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux3_stat
  {
    size_t item_size = sizeof(ros_message.aux3_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux3_stat_pri
  {
    size_t item_size = sizeof(ros_message.aux3_stat_pri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux3_stat_set
  {
    size_t item_size = sizeof(ros_message.aux3_stat_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux3_stat_clr
  {
    size_t item_size = sizeof(ros_message.aux3_stat_clr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux4_stat
  {
    size_t item_size = sizeof(ros_message.aux4_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux4_stat_pri
  {
    size_t item_size = sizeof(ros_message.aux4_stat_pri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux4_stat_set
  {
    size_t item_size = sizeof(ros_message.aux4_stat_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux4_stat_clr
  {
    size_t item_size = sizeof(ros_message.aux4_stat_clr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_bits
  {
    size_t array_size = ros_message.error_bits.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.error_bits[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_strs
  {
    size_t array_size = ros_message.error_strs.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.error_strs[index].size() + 1);
    }
  }
  // Member: rxstat_bits
  {
    size_t array_size = ros_message.rxstat_bits.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rxstat_bits[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rxstat_strs
  {
    size_t array_size = ros_message.rxstat_strs.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.rxstat_strs[index].size() + 1);
    }
  }
  // Member: aux1_stat_bits
  {
    size_t array_size = ros_message.aux1_stat_bits.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.aux1_stat_bits[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux1_stat_strs
  {
    size_t array_size = ros_message.aux1_stat_strs.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.aux1_stat_strs[index].size() + 1);
    }
  }
  // Member: aux2_stat_bits
  {
    size_t array_size = ros_message.aux2_stat_bits.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.aux2_stat_bits[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux2_stat_strs
  {
    size_t array_size = ros_message.aux2_stat_strs.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.aux2_stat_strs[index].size() + 1);
    }
  }
  // Member: aux3_stat_bits
  {
    size_t array_size = ros_message.aux3_stat_bits.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.aux3_stat_bits[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux3_stat_strs
  {
    size_t array_size = ros_message.aux3_stat_strs.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.aux3_stat_strs[index].size() + 1);
    }
  }
  // Member: aux4_stat_bits
  {
    size_t array_size = ros_message.aux4_stat_bits.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.aux4_stat_bits[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aux4_stat_strs
  {
    size_t array_size = ros_message.aux4_stat_strs.size();
    if (array_size > 32) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.aux4_stat_strs[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_novatel_oem7_msgs
max_serialized_size_RXSTATUS(
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

  // Member: error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: num_status_codes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rxstat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rxstat_pri_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rxstat_set_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rxstat_clr_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux1_stat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux1_stat_pri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux1_stat_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux1_stat_clr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux2_stat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux2_stat_pri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux2_stat_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux2_stat_clr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux3_stat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux3_stat_pri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux3_stat_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux3_stat_clr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux4_stat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux4_stat_pri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux4_stat_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aux4_stat_clr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_strs
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        256 +
        1;
    }
  }

  // Member: rxstat_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rxstat_strs
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        256 +
        1;
    }
  }

  // Member: aux1_stat_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aux1_stat_strs
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        256 +
        1;
    }
  }

  // Member: aux2_stat_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aux2_stat_strs
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        256 +
        1;
    }
  }

  // Member: aux3_stat_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aux3_stat_strs
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        256 +
        1;
    }
  }

  // Member: aux4_stat_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aux4_stat_strs
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        256 +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = novatel_oem7_msgs::msg::RXSTATUS;
    is_plain =
      (
      offsetof(DataType, aux4_stat_strs) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RXSTATUS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const novatel_oem7_msgs::msg::RXSTATUS *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RXSTATUS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<novatel_oem7_msgs::msg::RXSTATUS *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RXSTATUS__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const novatel_oem7_msgs::msg::RXSTATUS *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RXSTATUS__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RXSTATUS(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RXSTATUS__callbacks = {
  "novatel_oem7_msgs::msg",
  "RXSTATUS",
  _RXSTATUS__cdr_serialize,
  _RXSTATUS__cdr_deserialize,
  _RXSTATUS__get_serialized_size,
  _RXSTATUS__max_serialized_size
};

static rosidl_message_type_support_t _RXSTATUS__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RXSTATUS__callbacks,
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
get_message_type_support_handle<novatel_oem7_msgs::msg::RXSTATUS>()
{
  return &novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::_RXSTATUS__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, novatel_oem7_msgs, msg, RXSTATUS)() {
  return &novatel_oem7_msgs::msg::typesupport_fastrtps_cpp::_RXSTATUS__handle;
}

#ifdef __cplusplus
}
#endif
