// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from novatel_oem7_msgs:msg/Oem7RawMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "novatel_oem7_msgs/msg/detail/oem7_raw_msg__struct.hpp"
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

void Oem7RawMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) novatel_oem7_msgs::msg::Oem7RawMsg(_init);
}

void Oem7RawMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<novatel_oem7_msgs::msg::Oem7RawMsg *>(message_memory);
  typed_message->~Oem7RawMsg();
}

size_t size_function__Oem7RawMsg__message_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Oem7RawMsg__message_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Oem7RawMsg__message_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Oem7RawMsg__message_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Oem7RawMsg__message_data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Oem7RawMsg__message_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Oem7RawMsg__message_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__Oem7RawMsg__message_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Oem7RawMsg_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::Oem7RawMsg, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::Oem7RawMsg, message_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Oem7RawMsg__message_data,  // size() function pointer
    get_const_function__Oem7RawMsg__message_data,  // get_const(index) function pointer
    get_function__Oem7RawMsg__message_data,  // get(index) function pointer
    fetch_function__Oem7RawMsg__message_data,  // fetch(index, &value) function pointer
    assign_function__Oem7RawMsg__message_data,  // assign(index, value) function pointer
    resize_function__Oem7RawMsg__message_data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Oem7RawMsg_message_members = {
  "novatel_oem7_msgs::msg",  // message namespace
  "Oem7RawMsg",  // message name
  2,  // number of fields
  sizeof(novatel_oem7_msgs::msg::Oem7RawMsg),
  Oem7RawMsg_message_member_array,  // message members
  Oem7RawMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  Oem7RawMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Oem7RawMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Oem7RawMsg_message_members,
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
get_message_type_support_handle<novatel_oem7_msgs::msg::Oem7RawMsg>()
{
  return &::novatel_oem7_msgs::msg::rosidl_typesupport_introspection_cpp::Oem7RawMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, novatel_oem7_msgs, msg, Oem7RawMsg)() {
  return &::novatel_oem7_msgs::msg::rosidl_typesupport_introspection_cpp::Oem7RawMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
