// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from novatel_oem7_msgs:msg/RXSTATUS.idl
// generated code does not contain a copyright notice
#include "novatel_oem7_msgs/msg/detail/rxstatus__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "novatel_oem7_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "novatel_oem7_msgs/msg/detail/rxstatus__struct.h"
#include "novatel_oem7_msgs/msg/detail/rxstatus__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "novatel_oem7_msgs/msg/detail/oem7_header__functions.h"  // nov_header
#include "rosidl_runtime_c/primitives_sequence.h"  // aux1_stat_bits, aux2_stat_bits, aux3_stat_bits, aux4_stat_bits, error_bits, rxstat_bits
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // aux1_stat_bits, aux2_stat_bits, aux3_stat_bits, aux4_stat_bits, error_bits, rxstat_bits
#include "rosidl_runtime_c/string.h"  // aux1_stat_strs, aux2_stat_strs, aux3_stat_strs, aux4_stat_strs, error_strs, rxstat_strs
#include "rosidl_runtime_c/string_functions.h"  // aux1_stat_strs, aux2_stat_strs, aux3_stat_strs, aux4_stat_strs, error_strs, rxstat_strs
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_novatel_oem7_msgs__msg__Oem7Header(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_novatel_oem7_msgs__msg__Oem7Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, Oem7Header)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_novatel_oem7_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_novatel_oem7_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_novatel_oem7_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _RXSTATUS__ros_msg_type = novatel_oem7_msgs__msg__RXSTATUS;

static bool _RXSTATUS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RXSTATUS__ros_msg_type * ros_message = static_cast<const _RXSTATUS__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: nov_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, Oem7Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->nov_header, cdr))
    {
      return false;
    }
  }

  // Field name: error
  {
    cdr << ros_message->error;
  }

  // Field name: num_status_codes
  {
    cdr << ros_message->num_status_codes;
  }

  // Field name: rxstat
  {
    cdr << ros_message->rxstat;
  }

  // Field name: rxstat_pri_mask
  {
    cdr << ros_message->rxstat_pri_mask;
  }

  // Field name: rxstat_set_mask
  {
    cdr << ros_message->rxstat_set_mask;
  }

  // Field name: rxstat_clr_mask
  {
    cdr << ros_message->rxstat_clr_mask;
  }

  // Field name: aux1_stat
  {
    cdr << ros_message->aux1_stat;
  }

  // Field name: aux1_stat_pri
  {
    cdr << ros_message->aux1_stat_pri;
  }

  // Field name: aux1_stat_set
  {
    cdr << ros_message->aux1_stat_set;
  }

  // Field name: aux1_stat_clr
  {
    cdr << ros_message->aux1_stat_clr;
  }

  // Field name: aux2_stat
  {
    cdr << ros_message->aux2_stat;
  }

  // Field name: aux2_stat_pri
  {
    cdr << ros_message->aux2_stat_pri;
  }

  // Field name: aux2_stat_set
  {
    cdr << ros_message->aux2_stat_set;
  }

  // Field name: aux2_stat_clr
  {
    cdr << ros_message->aux2_stat_clr;
  }

  // Field name: aux3_stat
  {
    cdr << ros_message->aux3_stat;
  }

  // Field name: aux3_stat_pri
  {
    cdr << ros_message->aux3_stat_pri;
  }

  // Field name: aux3_stat_set
  {
    cdr << ros_message->aux3_stat_set;
  }

  // Field name: aux3_stat_clr
  {
    cdr << ros_message->aux3_stat_clr;
  }

  // Field name: aux4_stat
  {
    cdr << ros_message->aux4_stat;
  }

  // Field name: aux4_stat_pri
  {
    cdr << ros_message->aux4_stat_pri;
  }

  // Field name: aux4_stat_set
  {
    cdr << ros_message->aux4_stat_set;
  }

  // Field name: aux4_stat_clr
  {
    cdr << ros_message->aux4_stat_clr;
  }

  // Field name: error_bits
  {
    size_t size = ros_message->error_bits.size;
    auto array_ptr = ros_message->error_bits.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: error_strs
  {
    size_t size = ros_message->error_strs.size;
    auto array_ptr = ros_message->error_strs.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: rxstat_bits
  {
    size_t size = ros_message->rxstat_bits.size;
    auto array_ptr = ros_message->rxstat_bits.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rxstat_strs
  {
    size_t size = ros_message->rxstat_strs.size;
    auto array_ptr = ros_message->rxstat_strs.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: aux1_stat_bits
  {
    size_t size = ros_message->aux1_stat_bits.size;
    auto array_ptr = ros_message->aux1_stat_bits.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: aux1_stat_strs
  {
    size_t size = ros_message->aux1_stat_strs.size;
    auto array_ptr = ros_message->aux1_stat_strs.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: aux2_stat_bits
  {
    size_t size = ros_message->aux2_stat_bits.size;
    auto array_ptr = ros_message->aux2_stat_bits.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: aux2_stat_strs
  {
    size_t size = ros_message->aux2_stat_strs.size;
    auto array_ptr = ros_message->aux2_stat_strs.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: aux3_stat_bits
  {
    size_t size = ros_message->aux3_stat_bits.size;
    auto array_ptr = ros_message->aux3_stat_bits.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: aux3_stat_strs
  {
    size_t size = ros_message->aux3_stat_strs.size;
    auto array_ptr = ros_message->aux3_stat_strs.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: aux4_stat_bits
  {
    size_t size = ros_message->aux4_stat_bits.size;
    auto array_ptr = ros_message->aux4_stat_bits.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: aux4_stat_strs
  {
    size_t size = ros_message->aux4_stat_strs.size;
    auto array_ptr = ros_message->aux4_stat_strs.data;
    if (size > 32) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _RXSTATUS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RXSTATUS__ros_msg_type * ros_message = static_cast<_RXSTATUS__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: nov_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, Oem7Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->nov_header))
    {
      return false;
    }
  }

  // Field name: error
  {
    cdr >> ros_message->error;
  }

  // Field name: num_status_codes
  {
    cdr >> ros_message->num_status_codes;
  }

  // Field name: rxstat
  {
    cdr >> ros_message->rxstat;
  }

  // Field name: rxstat_pri_mask
  {
    cdr >> ros_message->rxstat_pri_mask;
  }

  // Field name: rxstat_set_mask
  {
    cdr >> ros_message->rxstat_set_mask;
  }

  // Field name: rxstat_clr_mask
  {
    cdr >> ros_message->rxstat_clr_mask;
  }

  // Field name: aux1_stat
  {
    cdr >> ros_message->aux1_stat;
  }

  // Field name: aux1_stat_pri
  {
    cdr >> ros_message->aux1_stat_pri;
  }

  // Field name: aux1_stat_set
  {
    cdr >> ros_message->aux1_stat_set;
  }

  // Field name: aux1_stat_clr
  {
    cdr >> ros_message->aux1_stat_clr;
  }

  // Field name: aux2_stat
  {
    cdr >> ros_message->aux2_stat;
  }

  // Field name: aux2_stat_pri
  {
    cdr >> ros_message->aux2_stat_pri;
  }

  // Field name: aux2_stat_set
  {
    cdr >> ros_message->aux2_stat_set;
  }

  // Field name: aux2_stat_clr
  {
    cdr >> ros_message->aux2_stat_clr;
  }

  // Field name: aux3_stat
  {
    cdr >> ros_message->aux3_stat;
  }

  // Field name: aux3_stat_pri
  {
    cdr >> ros_message->aux3_stat_pri;
  }

  // Field name: aux3_stat_set
  {
    cdr >> ros_message->aux3_stat_set;
  }

  // Field name: aux3_stat_clr
  {
    cdr >> ros_message->aux3_stat_clr;
  }

  // Field name: aux4_stat
  {
    cdr >> ros_message->aux4_stat;
  }

  // Field name: aux4_stat_pri
  {
    cdr >> ros_message->aux4_stat_pri;
  }

  // Field name: aux4_stat_set
  {
    cdr >> ros_message->aux4_stat_set;
  }

  // Field name: aux4_stat_clr
  {
    cdr >> ros_message->aux4_stat_clr;
  }

  // Field name: error_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->error_bits.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->error_bits);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->error_bits, size)) {
      fprintf(stderr, "failed to create array for field 'error_bits'");
      return false;
    }
    auto array_ptr = ros_message->error_bits.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: error_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->error_strs.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->error_strs);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->error_strs, size)) {
      fprintf(stderr, "failed to create array for field 'error_strs'");
      return false;
    }
    auto array_ptr = ros_message->error_strs.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'error_strs'\n");
        return false;
      }
    }
  }

  // Field name: rxstat_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rxstat_bits.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->rxstat_bits);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->rxstat_bits, size)) {
      fprintf(stderr, "failed to create array for field 'rxstat_bits'");
      return false;
    }
    auto array_ptr = ros_message->rxstat_bits.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rxstat_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rxstat_strs.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->rxstat_strs);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->rxstat_strs, size)) {
      fprintf(stderr, "failed to create array for field 'rxstat_strs'");
      return false;
    }
    auto array_ptr = ros_message->rxstat_strs.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'rxstat_strs'\n");
        return false;
      }
    }
  }

  // Field name: aux1_stat_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->aux1_stat_bits.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->aux1_stat_bits);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->aux1_stat_bits, size)) {
      fprintf(stderr, "failed to create array for field 'aux1_stat_bits'");
      return false;
    }
    auto array_ptr = ros_message->aux1_stat_bits.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: aux1_stat_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->aux1_stat_strs.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->aux1_stat_strs);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->aux1_stat_strs, size)) {
      fprintf(stderr, "failed to create array for field 'aux1_stat_strs'");
      return false;
    }
    auto array_ptr = ros_message->aux1_stat_strs.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'aux1_stat_strs'\n");
        return false;
      }
    }
  }

  // Field name: aux2_stat_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->aux2_stat_bits.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->aux2_stat_bits);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->aux2_stat_bits, size)) {
      fprintf(stderr, "failed to create array for field 'aux2_stat_bits'");
      return false;
    }
    auto array_ptr = ros_message->aux2_stat_bits.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: aux2_stat_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->aux2_stat_strs.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->aux2_stat_strs);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->aux2_stat_strs, size)) {
      fprintf(stderr, "failed to create array for field 'aux2_stat_strs'");
      return false;
    }
    auto array_ptr = ros_message->aux2_stat_strs.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'aux2_stat_strs'\n");
        return false;
      }
    }
  }

  // Field name: aux3_stat_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->aux3_stat_bits.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->aux3_stat_bits);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->aux3_stat_bits, size)) {
      fprintf(stderr, "failed to create array for field 'aux3_stat_bits'");
      return false;
    }
    auto array_ptr = ros_message->aux3_stat_bits.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: aux3_stat_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->aux3_stat_strs.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->aux3_stat_strs);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->aux3_stat_strs, size)) {
      fprintf(stderr, "failed to create array for field 'aux3_stat_strs'");
      return false;
    }
    auto array_ptr = ros_message->aux3_stat_strs.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'aux3_stat_strs'\n");
        return false;
      }
    }
  }

  // Field name: aux4_stat_bits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->aux4_stat_bits.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->aux4_stat_bits);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->aux4_stat_bits, size)) {
      fprintf(stderr, "failed to create array for field 'aux4_stat_bits'");
      return false;
    }
    auto array_ptr = ros_message->aux4_stat_bits.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: aux4_stat_strs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->aux4_stat_strs.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->aux4_stat_strs);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->aux4_stat_strs, size)) {
      fprintf(stderr, "failed to create array for field 'aux4_stat_strs'");
      return false;
    }
    auto array_ptr = ros_message->aux4_stat_strs.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'aux4_stat_strs'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_novatel_oem7_msgs
size_t get_serialized_size_novatel_oem7_msgs__msg__RXSTATUS(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RXSTATUS__ros_msg_type * ros_message = static_cast<const _RXSTATUS__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name nov_header

  current_alignment += get_serialized_size_novatel_oem7_msgs__msg__Oem7Header(
    &(ros_message->nov_header), current_alignment);
  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_status_codes
  {
    size_t item_size = sizeof(ros_message->num_status_codes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rxstat
  {
    size_t item_size = sizeof(ros_message->rxstat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rxstat_pri_mask
  {
    size_t item_size = sizeof(ros_message->rxstat_pri_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rxstat_set_mask
  {
    size_t item_size = sizeof(ros_message->rxstat_set_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rxstat_clr_mask
  {
    size_t item_size = sizeof(ros_message->rxstat_clr_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux1_stat
  {
    size_t item_size = sizeof(ros_message->aux1_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux1_stat_pri
  {
    size_t item_size = sizeof(ros_message->aux1_stat_pri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux1_stat_set
  {
    size_t item_size = sizeof(ros_message->aux1_stat_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux1_stat_clr
  {
    size_t item_size = sizeof(ros_message->aux1_stat_clr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux2_stat
  {
    size_t item_size = sizeof(ros_message->aux2_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux2_stat_pri
  {
    size_t item_size = sizeof(ros_message->aux2_stat_pri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux2_stat_set
  {
    size_t item_size = sizeof(ros_message->aux2_stat_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux2_stat_clr
  {
    size_t item_size = sizeof(ros_message->aux2_stat_clr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux3_stat
  {
    size_t item_size = sizeof(ros_message->aux3_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux3_stat_pri
  {
    size_t item_size = sizeof(ros_message->aux3_stat_pri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux3_stat_set
  {
    size_t item_size = sizeof(ros_message->aux3_stat_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux3_stat_clr
  {
    size_t item_size = sizeof(ros_message->aux3_stat_clr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux4_stat
  {
    size_t item_size = sizeof(ros_message->aux4_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux4_stat_pri
  {
    size_t item_size = sizeof(ros_message->aux4_stat_pri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux4_stat_set
  {
    size_t item_size = sizeof(ros_message->aux4_stat_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux4_stat_clr
  {
    size_t item_size = sizeof(ros_message->aux4_stat_clr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_bits
  {
    size_t array_size = ros_message->error_bits.size;
    auto array_ptr = ros_message->error_bits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_strs
  {
    size_t array_size = ros_message->error_strs.size;
    auto array_ptr = ros_message->error_strs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name rxstat_bits
  {
    size_t array_size = ros_message->rxstat_bits.size;
    auto array_ptr = ros_message->rxstat_bits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rxstat_strs
  {
    size_t array_size = ros_message->rxstat_strs.size;
    auto array_ptr = ros_message->rxstat_strs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name aux1_stat_bits
  {
    size_t array_size = ros_message->aux1_stat_bits.size;
    auto array_ptr = ros_message->aux1_stat_bits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux1_stat_strs
  {
    size_t array_size = ros_message->aux1_stat_strs.size;
    auto array_ptr = ros_message->aux1_stat_strs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name aux2_stat_bits
  {
    size_t array_size = ros_message->aux2_stat_bits.size;
    auto array_ptr = ros_message->aux2_stat_bits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux2_stat_strs
  {
    size_t array_size = ros_message->aux2_stat_strs.size;
    auto array_ptr = ros_message->aux2_stat_strs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name aux3_stat_bits
  {
    size_t array_size = ros_message->aux3_stat_bits.size;
    auto array_ptr = ros_message->aux3_stat_bits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux3_stat_strs
  {
    size_t array_size = ros_message->aux3_stat_strs.size;
    auto array_ptr = ros_message->aux3_stat_strs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name aux4_stat_bits
  {
    size_t array_size = ros_message->aux4_stat_bits.size;
    auto array_ptr = ros_message->aux4_stat_bits.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aux4_stat_strs
  {
    size_t array_size = ros_message->aux4_stat_strs.size;
    auto array_ptr = ros_message->aux4_stat_strs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RXSTATUS__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_novatel_oem7_msgs__msg__RXSTATUS(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_novatel_oem7_msgs
size_t max_serialized_size_novatel_oem7_msgs__msg__RXSTATUS(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nov_header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_novatel_oem7_msgs__msg__Oem7Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_status_codes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rxstat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rxstat_pri_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rxstat_set_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rxstat_clr_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux1_stat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux1_stat_pri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux1_stat_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux1_stat_clr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux2_stat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux2_stat_pri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux2_stat_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux2_stat_clr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux3_stat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux3_stat_pri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux3_stat_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux3_stat_clr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux4_stat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux4_stat_pri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux4_stat_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aux4_stat_clr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_strs
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
  // member: rxstat_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rxstat_strs
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
  // member: aux1_stat_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aux1_stat_strs
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
  // member: aux2_stat_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aux2_stat_strs
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
  // member: aux3_stat_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aux3_stat_strs
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
  // member: aux4_stat_bits
  {
    size_t array_size = 32;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aux4_stat_strs
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
    using DataType = novatel_oem7_msgs__msg__RXSTATUS;
    is_plain =
      (
      offsetof(DataType, aux4_stat_strs) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RXSTATUS__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_novatel_oem7_msgs__msg__RXSTATUS(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RXSTATUS = {
  "novatel_oem7_msgs::msg",
  "RXSTATUS",
  _RXSTATUS__cdr_serialize,
  _RXSTATUS__cdr_deserialize,
  _RXSTATUS__get_serialized_size,
  _RXSTATUS__max_serialized_size
};

static rosidl_message_type_support_t _RXSTATUS__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RXSTATUS,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, novatel_oem7_msgs, msg, RXSTATUS)() {
  return &_RXSTATUS__type_support;
}

#if defined(__cplusplus)
}
#endif
