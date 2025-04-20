// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from vectornav_msgs:action/MagCal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagCal_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagCal_Goal_type_support_ids_t;

static const _MagCal_Goal_type_support_ids_t _MagCal_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagCal_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagCal_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagCal_Goal_type_support_symbol_names_t _MagCal_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, action, MagCal_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vectornav_msgs, action, MagCal_Goal)),
  }
};

typedef struct _MagCal_Goal_type_support_data_t
{
  void * data[2];
} _MagCal_Goal_type_support_data_t;

static _MagCal_Goal_type_support_data_t _MagCal_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagCal_Goal_message_typesupport_map = {
  2,
  "vectornav_msgs",
  &_MagCal_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MagCal_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MagCal_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagCal_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagCal_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vectornav_msgs::action::MagCal_Goal>()
{
  return &::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, vectornav_msgs, action, MagCal_Goal)() {
  return get_message_type_support_handle<vectornav_msgs::action::MagCal_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagCal_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagCal_Result_type_support_ids_t;

static const _MagCal_Result_type_support_ids_t _MagCal_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagCal_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagCal_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagCal_Result_type_support_symbol_names_t _MagCal_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, action, MagCal_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vectornav_msgs, action, MagCal_Result)),
  }
};

typedef struct _MagCal_Result_type_support_data_t
{
  void * data[2];
} _MagCal_Result_type_support_data_t;

static _MagCal_Result_type_support_data_t _MagCal_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagCal_Result_message_typesupport_map = {
  2,
  "vectornav_msgs",
  &_MagCal_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MagCal_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MagCal_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagCal_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagCal_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vectornav_msgs::action::MagCal_Result>()
{
  return &::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, vectornav_msgs, action, MagCal_Result)() {
  return get_message_type_support_handle<vectornav_msgs::action::MagCal_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagCal_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagCal_Feedback_type_support_ids_t;

static const _MagCal_Feedback_type_support_ids_t _MagCal_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagCal_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagCal_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagCal_Feedback_type_support_symbol_names_t _MagCal_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, action, MagCal_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vectornav_msgs, action, MagCal_Feedback)),
  }
};

typedef struct _MagCal_Feedback_type_support_data_t
{
  void * data[2];
} _MagCal_Feedback_type_support_data_t;

static _MagCal_Feedback_type_support_data_t _MagCal_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagCal_Feedback_message_typesupport_map = {
  2,
  "vectornav_msgs",
  &_MagCal_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MagCal_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MagCal_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagCal_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagCal_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vectornav_msgs::action::MagCal_Feedback>()
{
  return &::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, vectornav_msgs, action, MagCal_Feedback)() {
  return get_message_type_support_handle<vectornav_msgs::action::MagCal_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagCal_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagCal_SendGoal_Request_type_support_ids_t;

static const _MagCal_SendGoal_Request_type_support_ids_t _MagCal_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagCal_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagCal_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagCal_SendGoal_Request_type_support_symbol_names_t _MagCal_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, action, MagCal_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vectornav_msgs, action, MagCal_SendGoal_Request)),
  }
};

typedef struct _MagCal_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MagCal_SendGoal_Request_type_support_data_t;

static _MagCal_SendGoal_Request_type_support_data_t _MagCal_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagCal_SendGoal_Request_message_typesupport_map = {
  2,
  "vectornav_msgs",
  &_MagCal_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MagCal_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MagCal_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagCal_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagCal_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vectornav_msgs::action::MagCal_SendGoal_Request>()
{
  return &::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, vectornav_msgs, action, MagCal_SendGoal_Request)() {
  return get_message_type_support_handle<vectornav_msgs::action::MagCal_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagCal_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagCal_SendGoal_Response_type_support_ids_t;

static const _MagCal_SendGoal_Response_type_support_ids_t _MagCal_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagCal_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagCal_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagCal_SendGoal_Response_type_support_symbol_names_t _MagCal_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, action, MagCal_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vectornav_msgs, action, MagCal_SendGoal_Response)),
  }
};

typedef struct _MagCal_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MagCal_SendGoal_Response_type_support_data_t;

static _MagCal_SendGoal_Response_type_support_data_t _MagCal_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagCal_SendGoal_Response_message_typesupport_map = {
  2,
  "vectornav_msgs",
  &_MagCal_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MagCal_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MagCal_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagCal_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagCal_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vectornav_msgs::action::MagCal_SendGoal_Response>()
{
  return &::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, vectornav_msgs, action, MagCal_SendGoal_Response)() {
  return get_message_type_support_handle<vectornav_msgs::action::MagCal_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagCal_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagCal_SendGoal_type_support_ids_t;

static const _MagCal_SendGoal_type_support_ids_t _MagCal_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagCal_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagCal_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagCal_SendGoal_type_support_symbol_names_t _MagCal_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, action, MagCal_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vectornav_msgs, action, MagCal_SendGoal)),
  }
};

typedef struct _MagCal_SendGoal_type_support_data_t
{
  void * data[2];
} _MagCal_SendGoal_type_support_data_t;

static _MagCal_SendGoal_type_support_data_t _MagCal_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagCal_SendGoal_service_typesupport_map = {
  2,
  "vectornav_msgs",
  &_MagCal_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MagCal_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MagCal_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MagCal_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagCal_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<vectornav_msgs::action::MagCal_SendGoal>()
{
  return &::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagCal_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagCal_GetResult_Request_type_support_ids_t;

static const _MagCal_GetResult_Request_type_support_ids_t _MagCal_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagCal_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagCal_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagCal_GetResult_Request_type_support_symbol_names_t _MagCal_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, action, MagCal_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vectornav_msgs, action, MagCal_GetResult_Request)),
  }
};

typedef struct _MagCal_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MagCal_GetResult_Request_type_support_data_t;

static _MagCal_GetResult_Request_type_support_data_t _MagCal_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagCal_GetResult_Request_message_typesupport_map = {
  2,
  "vectornav_msgs",
  &_MagCal_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MagCal_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MagCal_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagCal_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagCal_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vectornav_msgs::action::MagCal_GetResult_Request>()
{
  return &::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, vectornav_msgs, action, MagCal_GetResult_Request)() {
  return get_message_type_support_handle<vectornav_msgs::action::MagCal_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagCal_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagCal_GetResult_Response_type_support_ids_t;

static const _MagCal_GetResult_Response_type_support_ids_t _MagCal_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagCal_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagCal_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagCal_GetResult_Response_type_support_symbol_names_t _MagCal_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, action, MagCal_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vectornav_msgs, action, MagCal_GetResult_Response)),
  }
};

typedef struct _MagCal_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MagCal_GetResult_Response_type_support_data_t;

static _MagCal_GetResult_Response_type_support_data_t _MagCal_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagCal_GetResult_Response_message_typesupport_map = {
  2,
  "vectornav_msgs",
  &_MagCal_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MagCal_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MagCal_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagCal_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagCal_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vectornav_msgs::action::MagCal_GetResult_Response>()
{
  return &::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, vectornav_msgs, action, MagCal_GetResult_Response)() {
  return get_message_type_support_handle<vectornav_msgs::action::MagCal_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagCal_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagCal_GetResult_type_support_ids_t;

static const _MagCal_GetResult_type_support_ids_t _MagCal_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagCal_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagCal_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagCal_GetResult_type_support_symbol_names_t _MagCal_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, action, MagCal_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vectornav_msgs, action, MagCal_GetResult)),
  }
};

typedef struct _MagCal_GetResult_type_support_data_t
{
  void * data[2];
} _MagCal_GetResult_type_support_data_t;

static _MagCal_GetResult_type_support_data_t _MagCal_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagCal_GetResult_service_typesupport_map = {
  2,
  "vectornav_msgs",
  &_MagCal_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MagCal_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MagCal_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MagCal_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagCal_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<vectornav_msgs::action::MagCal_GetResult>()
{
  return &::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MagCal_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MagCal_FeedbackMessage_type_support_ids_t;

static const _MagCal_FeedbackMessage_type_support_ids_t _MagCal_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MagCal_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MagCal_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MagCal_FeedbackMessage_type_support_symbol_names_t _MagCal_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vectornav_msgs, action, MagCal_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vectornav_msgs, action, MagCal_FeedbackMessage)),
  }
};

typedef struct _MagCal_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MagCal_FeedbackMessage_type_support_data_t;

static _MagCal_FeedbackMessage_type_support_data_t _MagCal_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MagCal_FeedbackMessage_message_typesupport_map = {
  2,
  "vectornav_msgs",
  &_MagCal_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MagCal_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MagCal_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MagCal_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MagCal_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vectornav_msgs::action::MagCal_FeedbackMessage>()
{
  return &::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, vectornav_msgs, action, MagCal_FeedbackMessage)() {
  return get_message_type_support_handle<vectornav_msgs::action::MagCal_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "vectornav_msgs/action/detail/mag_cal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace vectornav_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MagCal_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace vectornav_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<vectornav_msgs::action::MagCal>()
{
  using ::vectornav_msgs::action::rosidl_typesupport_cpp::MagCal_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MagCal_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::vectornav_msgs::action::MagCal::Impl::SendGoalService>();
  MagCal_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::vectornav_msgs::action::MagCal::Impl::GetResultService>();
  MagCal_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::vectornav_msgs::action::MagCal::Impl::CancelGoalService>();
  MagCal_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::vectornav_msgs::action::MagCal::Impl::FeedbackMessage>();
  MagCal_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::vectornav_msgs::action::MagCal::Impl::GoalStatusMessage>();
  return &MagCal_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
