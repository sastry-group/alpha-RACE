// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from novatel_oem7_msgs:srv/Oem7AbasciiCmd.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__TRAITS_HPP_
#define NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "novatel_oem7_msgs/srv/detail/oem7_abascii_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace novatel_oem7_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Oem7AbasciiCmd_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd
  {
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Oem7AbasciiCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Oem7AbasciiCmd_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace novatel_oem7_msgs

namespace rosidl_generator_traits
{

[[deprecated("use novatel_oem7_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request & msg)
{
  return novatel_oem7_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request>()
{
  return "novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request";
}

template<>
inline const char * name<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request>()
{
  return "novatel_oem7_msgs/srv/Oem7AbasciiCmd_Request";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace novatel_oem7_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Oem7AbasciiCmd_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: rsp
  {
    out << "rsp: ";
    rosidl_generator_traits::value_to_yaml(msg.rsp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Oem7AbasciiCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rsp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rsp: ";
    rosidl_generator_traits::value_to_yaml(msg.rsp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Oem7AbasciiCmd_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace novatel_oem7_msgs

namespace rosidl_generator_traits
{

[[deprecated("use novatel_oem7_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  novatel_oem7_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use novatel_oem7_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response & msg)
{
  return novatel_oem7_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response>()
{
  return "novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response";
}

template<>
inline const char * name<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response>()
{
  return "novatel_oem7_msgs/srv/Oem7AbasciiCmd_Response";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<novatel_oem7_msgs::srv::Oem7AbasciiCmd>()
{
  return "novatel_oem7_msgs::srv::Oem7AbasciiCmd";
}

template<>
inline const char * name<novatel_oem7_msgs::srv::Oem7AbasciiCmd>()
{
  return "novatel_oem7_msgs/srv/Oem7AbasciiCmd";
}

template<>
struct has_fixed_size<novatel_oem7_msgs::srv::Oem7AbasciiCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request>::value &&
    has_fixed_size<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<novatel_oem7_msgs::srv::Oem7AbasciiCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request>::value &&
    has_bounded_size<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response>::value
  >
{
};

template<>
struct is_service<novatel_oem7_msgs::srv::Oem7AbasciiCmd>
  : std::true_type
{
};

template<>
struct is_service_request<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__TRAITS_HPP_
