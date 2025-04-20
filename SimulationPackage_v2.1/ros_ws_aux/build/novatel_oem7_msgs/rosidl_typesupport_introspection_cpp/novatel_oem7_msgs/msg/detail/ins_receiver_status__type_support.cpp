// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from novatel_oem7_msgs:msg/INSReceiverStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "novatel_oem7_msgs/msg/detail/ins_receiver_status__struct.hpp"
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

void INSReceiverStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) novatel_oem7_msgs::msg::INSReceiverStatus(_init);
}

void INSReceiverStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<novatel_oem7_msgs::msg::INSReceiverStatus *>(message_memory);
  typed_message->~INSReceiverStatus();
}

size_t size_function__INSReceiverStatus__status(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__INSReceiverStatus__status(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__INSReceiverStatus__status(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__INSReceiverStatus__status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__INSReceiverStatus__status(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__INSReceiverStatus__status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__INSReceiverStatus__status(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember INSReceiverStatus_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::INSReceiverStatus, status),  // bytes offset in struct
    nullptr,  // default value
    size_function__INSReceiverStatus__status,  // size() function pointer
    get_const_function__INSReceiverStatus__status,  // get_const(index) function pointer
    get_function__INSReceiverStatus__status,  // get(index) function pointer
    fetch_function__INSReceiverStatus__status,  // fetch(index, &value) function pointer
    assign_function__INSReceiverStatus__status,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers INSReceiverStatus_message_members = {
  "novatel_oem7_msgs::msg",  // message namespace
  "INSReceiverStatus",  // message name
  1,  // number of fields
  sizeof(novatel_oem7_msgs::msg::INSReceiverStatus),
  INSReceiverStatus_message_member_array,  // message members
  INSReceiverStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  INSReceiverStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t INSReceiverStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &INSReceiverStatus_message_members,
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
get_message_type_support_handle<novatel_oem7_msgs::msg::INSReceiverStatus>()
{
  return &::novatel_oem7_msgs::msg::rosidl_typesupport_introspection_cpp::INSReceiverStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, novatel_oem7_msgs, msg, INSReceiverStatus)() {
  return &::novatel_oem7_msgs::msg::rosidl_typesupport_introspection_cpp::INSReceiverStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
