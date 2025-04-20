// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from npc_controller_msgs:msg/MiscReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "npc_controller_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "npc_controller_msgs/msg/detail/misc_report__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace npc_controller_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_npc_controller_msgs
cdr_serialize(
  const npc_controller_msgs::msg::MiscReport & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_npc_controller_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  npc_controller_msgs::msg::MiscReport & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_npc_controller_msgs
get_serialized_size(
  const npc_controller_msgs::msg::MiscReport & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_npc_controller_msgs
max_serialized_size_MiscReport(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace npc_controller_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_npc_controller_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, npc_controller_msgs, msg, MiscReport)();

#ifdef __cplusplus
}
#endif

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__MISC_REPORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
