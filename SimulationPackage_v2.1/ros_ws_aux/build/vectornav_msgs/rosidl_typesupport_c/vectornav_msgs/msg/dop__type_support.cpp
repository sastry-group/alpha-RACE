// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from vectornav_msgs:msg/DOP.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "vectornav_msgs/msg/detail/dop__struct.h"
#include "vectornav_msgs/msg/detail/dop__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _DOP_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DOP_type_support_ids_t;

static const _DOP_type_support_ids_t _DOP_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DOP_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DOP_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DOP_type_support_symbol_names_t _DOP_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vectornav_msgs, msg, DOP)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vectornav_msgs, msg, DOP)),
  }
};

typedef struct _DOP_type_support_data_t
{
  void * data[2];
} _DOP_type_support_data_t;

static _DOP_type_support_data_t _DOP_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DOP_message_typesupport_map = {
  2,
  "vectornav_msgs",
  &_DOP_message_typesupport_ids.typesupport_identifier[0],
  &_DOP_message_typesupport_symbol_names.symbol_name[0],
  &_DOP_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DOP_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DOP_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace vectornav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, vectornav_msgs, msg, DOP)() {
  return &::vectornav_msgs::msg::rosidl_typesupport_c::DOP_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
