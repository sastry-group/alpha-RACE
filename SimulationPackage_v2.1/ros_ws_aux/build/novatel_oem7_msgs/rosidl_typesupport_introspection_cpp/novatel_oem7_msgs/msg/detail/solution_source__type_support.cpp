// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from novatel_oem7_msgs:msg/SolutionSource.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "novatel_oem7_msgs/msg/detail/solution_source__struct.hpp"
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

void SolutionSource_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) novatel_oem7_msgs::msg::SolutionSource(_init);
}

void SolutionSource_fini_function(void * message_memory)
{
  auto typed_message = static_cast<novatel_oem7_msgs::msg::SolutionSource *>(message_memory);
  typed_message->~SolutionSource();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SolutionSource_message_member_array[1] = {
  {
    "source",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(novatel_oem7_msgs::msg::SolutionSource, source),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SolutionSource_message_members = {
  "novatel_oem7_msgs::msg",  // message namespace
  "SolutionSource",  // message name
  1,  // number of fields
  sizeof(novatel_oem7_msgs::msg::SolutionSource),
  SolutionSource_message_member_array,  // message members
  SolutionSource_init_function,  // function to initialize message memory (memory has to be allocated)
  SolutionSource_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SolutionSource_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SolutionSource_message_members,
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
get_message_type_support_handle<novatel_oem7_msgs::msg::SolutionSource>()
{
  return &::novatel_oem7_msgs::msg::rosidl_typesupport_introspection_cpp::SolutionSource_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, novatel_oem7_msgs, msg, SolutionSource)() {
  return &::novatel_oem7_msgs::msg::rosidl_typesupport_introspection_cpp::SolutionSource_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
