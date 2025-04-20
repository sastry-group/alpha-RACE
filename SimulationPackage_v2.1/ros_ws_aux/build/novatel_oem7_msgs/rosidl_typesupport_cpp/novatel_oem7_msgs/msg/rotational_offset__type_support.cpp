// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from novatel_oem7_msgs:msg/RotationalOffset.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "novatel_oem7_msgs/msg/detail/rotational_offset__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace novatel_oem7_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _RotationalOffset_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RotationalOffset_type_support_ids_t;

static const _RotationalOffset_type_support_ids_t _RotationalOffset_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RotationalOffset_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RotationalOffset_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotationalOffset_type_support_symbol_names_t _RotationalOffset_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, novatel_oem7_msgs, msg, RotationalOffset)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, novatel_oem7_msgs, msg, RotationalOffset)),
  }
};

typedef struct _RotationalOffset_type_support_data_t
{
  void * data[2];
} _RotationalOffset_type_support_data_t;

static _RotationalOffset_type_support_data_t _RotationalOffset_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotationalOffset_message_typesupport_map = {
  2,
  "novatel_oem7_msgs",
  &_RotationalOffset_message_typesupport_ids.typesupport_identifier[0],
  &_RotationalOffset_message_typesupport_symbol_names.symbol_name[0],
  &_RotationalOffset_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RotationalOffset_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotationalOffset_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace novatel_oem7_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<novatel_oem7_msgs::msg::RotationalOffset>()
{
  return &::novatel_oem7_msgs::msg::rosidl_typesupport_cpp::RotationalOffset_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, novatel_oem7_msgs, msg, RotationalOffset)() {
  return get_message_type_support_handle<novatel_oem7_msgs::msg::RotationalOffset>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
