// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from novatel_oem7_msgs:msg/RXSTATUS.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "novatel_oem7_msgs/msg/detail/rxstatus__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace novatel_oem7_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RXSTATUS_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) novatel_oem7_msgs::msg::RXSTATUS(_init);
}

void RXSTATUS_fini_function(void * message_memory)
{
  auto typed_message = static_cast<novatel_oem7_msgs::msg::RXSTATUS *>(message_memory);
  typed_message->~RXSTATUS();
}

size_t size_function__RXSTATUS__error_bits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__error_bits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__error_bits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__error_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RXSTATUS__error_bits(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__error_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RXSTATUS__error_bits(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__error_bits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__error_strs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__error_strs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__error_strs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__error_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RXSTATUS__error_strs(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__error_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RXSTATUS__error_strs(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__error_strs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__rxstat_bits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__rxstat_bits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__rxstat_bits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__rxstat_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RXSTATUS__rxstat_bits(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__rxstat_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RXSTATUS__rxstat_bits(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__rxstat_bits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__rxstat_strs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__rxstat_strs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__rxstat_strs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__rxstat_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RXSTATUS__rxstat_strs(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__rxstat_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RXSTATUS__rxstat_strs(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__rxstat_strs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__aux1_stat_bits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__aux1_stat_bits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__aux1_stat_bits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__aux1_stat_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RXSTATUS__aux1_stat_bits(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__aux1_stat_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RXSTATUS__aux1_stat_bits(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__aux1_stat_bits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__aux1_stat_strs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__aux1_stat_strs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__aux1_stat_strs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__aux1_stat_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RXSTATUS__aux1_stat_strs(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__aux1_stat_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RXSTATUS__aux1_stat_strs(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__aux1_stat_strs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__aux2_stat_bits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__aux2_stat_bits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__aux2_stat_bits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__aux2_stat_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RXSTATUS__aux2_stat_bits(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__aux2_stat_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RXSTATUS__aux2_stat_bits(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__aux2_stat_bits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__aux2_stat_strs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__aux2_stat_strs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__aux2_stat_strs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__aux2_stat_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RXSTATUS__aux2_stat_strs(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__aux2_stat_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RXSTATUS__aux2_stat_strs(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__aux2_stat_strs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__aux3_stat_bits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__aux3_stat_bits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__aux3_stat_bits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__aux3_stat_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RXSTATUS__aux3_stat_bits(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__aux3_stat_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RXSTATUS__aux3_stat_bits(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__aux3_stat_bits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__aux3_stat_strs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__aux3_stat_strs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__aux3_stat_strs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__aux3_stat_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RXSTATUS__aux3_stat_strs(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__aux3_stat_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RXSTATUS__aux3_stat_strs(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__aux3_stat_strs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__aux4_stat_bits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__aux4_stat_bits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__aux4_stat_bits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__aux4_stat_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RXSTATUS__aux4_stat_bits(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__aux4_stat_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RXSTATUS__aux4_stat_bits(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__aux4_stat_bits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RXSTATUS__aux4_stat_strs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RXSTATUS__aux4_stat_strs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RXSTATUS__aux4_stat_strs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RXSTATUS__aux4_stat_strs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RXSTATUS__aux4_stat_strs(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RXSTATUS__aux4_stat_strs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RXSTATUS__aux4_stat_strs(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RXSTATUS__aux4_stat_strs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RXSTATUS_message_member_array[36] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nov_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<novatel_oem7_msgs::msg::Oem7Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, nov_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_status_codes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, num_status_codes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rxstat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, rxstat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rxstat_pri_mask",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, rxstat_pri_mask),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rxstat_set_mask",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, rxstat_set_mask),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rxstat_clr_mask",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, rxstat_clr_mask),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux1_stat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux1_stat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux1_stat_pri",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux1_stat_pri),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux1_stat_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux1_stat_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux1_stat_clr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux1_stat_clr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux2_stat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux2_stat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux2_stat_pri",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux2_stat_pri),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux2_stat_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux2_stat_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux2_stat_clr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux2_stat_clr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux3_stat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux3_stat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux3_stat_pri",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux3_stat_pri),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux3_stat_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux3_stat_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux3_stat_clr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux3_stat_clr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux4_stat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux4_stat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux4_stat_pri",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux4_stat_pri),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux4_stat_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux4_stat_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux4_stat_clr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux4_stat_clr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_bits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, error_bits),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__error_bits,  // size() function pointer
    get_const_function__RXSTATUS__error_bits,  // get_const(index) function pointer
    get_function__RXSTATUS__error_bits,  // get(index) function pointer
    fetch_function__RXSTATUS__error_bits,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__error_bits,  // assign(index, value) function pointer
    resize_function__RXSTATUS__error_bits  // resize(index) function pointer
  },
  {
    "error_strs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, error_strs),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__error_strs,  // size() function pointer
    get_const_function__RXSTATUS__error_strs,  // get_const(index) function pointer
    get_function__RXSTATUS__error_strs,  // get(index) function pointer
    fetch_function__RXSTATUS__error_strs,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__error_strs,  // assign(index, value) function pointer
    resize_function__RXSTATUS__error_strs  // resize(index) function pointer
  },
  {
    "rxstat_bits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, rxstat_bits),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__rxstat_bits,  // size() function pointer
    get_const_function__RXSTATUS__rxstat_bits,  // get_const(index) function pointer
    get_function__RXSTATUS__rxstat_bits,  // get(index) function pointer
    fetch_function__RXSTATUS__rxstat_bits,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__rxstat_bits,  // assign(index, value) function pointer
    resize_function__RXSTATUS__rxstat_bits  // resize(index) function pointer
  },
  {
    "rxstat_strs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, rxstat_strs),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__rxstat_strs,  // size() function pointer
    get_const_function__RXSTATUS__rxstat_strs,  // get_const(index) function pointer
    get_function__RXSTATUS__rxstat_strs,  // get(index) function pointer
    fetch_function__RXSTATUS__rxstat_strs,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__rxstat_strs,  // assign(index, value) function pointer
    resize_function__RXSTATUS__rxstat_strs  // resize(index) function pointer
  },
  {
    "aux1_stat_bits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux1_stat_bits),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__aux1_stat_bits,  // size() function pointer
    get_const_function__RXSTATUS__aux1_stat_bits,  // get_const(index) function pointer
    get_function__RXSTATUS__aux1_stat_bits,  // get(index) function pointer
    fetch_function__RXSTATUS__aux1_stat_bits,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__aux1_stat_bits,  // assign(index, value) function pointer
    resize_function__RXSTATUS__aux1_stat_bits  // resize(index) function pointer
  },
  {
    "aux1_stat_strs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux1_stat_strs),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__aux1_stat_strs,  // size() function pointer
    get_const_function__RXSTATUS__aux1_stat_strs,  // get_const(index) function pointer
    get_function__RXSTATUS__aux1_stat_strs,  // get(index) function pointer
    fetch_function__RXSTATUS__aux1_stat_strs,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__aux1_stat_strs,  // assign(index, value) function pointer
    resize_function__RXSTATUS__aux1_stat_strs  // resize(index) function pointer
  },
  {
    "aux2_stat_bits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux2_stat_bits),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__aux2_stat_bits,  // size() function pointer
    get_const_function__RXSTATUS__aux2_stat_bits,  // get_const(index) function pointer
    get_function__RXSTATUS__aux2_stat_bits,  // get(index) function pointer
    fetch_function__RXSTATUS__aux2_stat_bits,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__aux2_stat_bits,  // assign(index, value) function pointer
    resize_function__RXSTATUS__aux2_stat_bits  // resize(index) function pointer
  },
  {
    "aux2_stat_strs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux2_stat_strs),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__aux2_stat_strs,  // size() function pointer
    get_const_function__RXSTATUS__aux2_stat_strs,  // get_const(index) function pointer
    get_function__RXSTATUS__aux2_stat_strs,  // get(index) function pointer
    fetch_function__RXSTATUS__aux2_stat_strs,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__aux2_stat_strs,  // assign(index, value) function pointer
    resize_function__RXSTATUS__aux2_stat_strs  // resize(index) function pointer
  },
  {
    "aux3_stat_bits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux3_stat_bits),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__aux3_stat_bits,  // size() function pointer
    get_const_function__RXSTATUS__aux3_stat_bits,  // get_const(index) function pointer
    get_function__RXSTATUS__aux3_stat_bits,  // get(index) function pointer
    fetch_function__RXSTATUS__aux3_stat_bits,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__aux3_stat_bits,  // assign(index, value) function pointer
    resize_function__RXSTATUS__aux3_stat_bits  // resize(index) function pointer
  },
  {
    "aux3_stat_strs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux3_stat_strs),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__aux3_stat_strs,  // size() function pointer
    get_const_function__RXSTATUS__aux3_stat_strs,  // get_const(index) function pointer
    get_function__RXSTATUS__aux3_stat_strs,  // get(index) function pointer
    fetch_function__RXSTATUS__aux3_stat_strs,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__aux3_stat_strs,  // assign(index, value) function pointer
    resize_function__RXSTATUS__aux3_stat_strs  // resize(index) function pointer
  },
  {
    "aux4_stat_bits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux4_stat_bits),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__aux4_stat_bits,  // size() function pointer
    get_const_function__RXSTATUS__aux4_stat_bits,  // get_const(index) function pointer
    get_function__RXSTATUS__aux4_stat_bits,  // get(index) function pointer
    fetch_function__RXSTATUS__aux4_stat_bits,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__aux4_stat_bits,  // assign(index, value) function pointer
    resize_function__RXSTATUS__aux4_stat_bits  // resize(index) function pointer
  },
  {
    "aux4_stat_strs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    256,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    true,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::RXSTATUS, aux4_stat_strs),  // bytes offset in struct
    nullptr,  // default value
    size_function__RXSTATUS__aux4_stat_strs,  // size() function pointer
    get_const_function__RXSTATUS__aux4_stat_strs,  // get_const(index) function pointer
    get_function__RXSTATUS__aux4_stat_strs,  // get(index) function pointer
    fetch_function__RXSTATUS__aux4_stat_strs,  // fetch(index, &value) function pointer
    assign_function__RXSTATUS__aux4_stat_strs,  // assign(index, value) function pointer
    resize_function__RXSTATUS__aux4_stat_strs  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RXSTATUS_message_members = {
  "novatel_oem7_msgs::msg",  // message namespace
  "RXSTATUS",  // message name
  36,  // number of fields
  sizeof(novatel_oem7_msgs::msg::RXSTATUS),
  RXSTATUS_message_member_array,  // message members
  RXSTATUS_init_function,  // function to initialize message memory (memory has to be allocated)
  RXSTATUS_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RXSTATUS_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RXSTATUS_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace novatel_oem7_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<novatel_oem7_msgs::msg::RXSTATUS>()
{
  return &::novatel_oem7_msgs::msg::rosidl_typesupport_introspection_cpp::RXSTATUS_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, novatel_oem7_msgs, msg, RXSTATUS)() {
  return &::novatel_oem7_msgs::msg::rosidl_typesupport_introspection_cpp::RXSTATUS_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
