// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from npc_controller_msgs:msg/TireReport.idl
// generated code does not contain a copyright notice

#ifndef NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__TRAITS_HPP_
#define NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "npc_controller_msgs/msg/detail/tire_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace npc_controller_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TireReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: fl_tire_temperature
  {
    if (msg.fl_tire_temperature.size() == 0) {
      out << "fl_tire_temperature: []";
    } else {
      out << "fl_tire_temperature: [";
      size_t pending_items = msg.fl_tire_temperature.size();
      for (auto item : msg.fl_tire_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fl_damper_linear_potentiometer
  {
    out << "fl_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_damper_linear_potentiometer, out);
    out << ", ";
  }

  // member: fl_tire_pressure
  {
    out << "fl_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_tire_pressure, out);
    out << ", ";
  }

  // member: fl_tire_pressure_gauge
  {
    out << "fl_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_tire_pressure_gauge, out);
    out << ", ";
  }

  // member: fl_wheel_load
  {
    out << "fl_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_wheel_load, out);
    out << ", ";
  }

  // member: fr_tire_temperature
  {
    if (msg.fr_tire_temperature.size() == 0) {
      out << "fr_tire_temperature: []";
    } else {
      out << "fr_tire_temperature: [";
      size_t pending_items = msg.fr_tire_temperature.size();
      for (auto item : msg.fr_tire_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fr_damper_linear_potentiometer
  {
    out << "fr_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_damper_linear_potentiometer, out);
    out << ", ";
  }

  // member: fr_tire_pressure
  {
    out << "fr_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_tire_pressure, out);
    out << ", ";
  }

  // member: fr_tire_pressure_gauge
  {
    out << "fr_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_tire_pressure_gauge, out);
    out << ", ";
  }

  // member: fr_wheel_load
  {
    out << "fr_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_wheel_load, out);
    out << ", ";
  }

  // member: rl_tire_temperature
  {
    if (msg.rl_tire_temperature.size() == 0) {
      out << "rl_tire_temperature: []";
    } else {
      out << "rl_tire_temperature: [";
      size_t pending_items = msg.rl_tire_temperature.size();
      for (auto item : msg.rl_tire_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rl_damper_linear_potentiometer
  {
    out << "rl_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_damper_linear_potentiometer, out);
    out << ", ";
  }

  // member: rl_tire_pressure
  {
    out << "rl_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_tire_pressure, out);
    out << ", ";
  }

  // member: rl_tire_pressure_gauge
  {
    out << "rl_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_tire_pressure_gauge, out);
    out << ", ";
  }

  // member: rl_wheel_load
  {
    out << "rl_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_wheel_load, out);
    out << ", ";
  }

  // member: rr_tire_temperature
  {
    if (msg.rr_tire_temperature.size() == 0) {
      out << "rr_tire_temperature: []";
    } else {
      out << "rr_tire_temperature: [";
      size_t pending_items = msg.rr_tire_temperature.size();
      for (auto item : msg.rr_tire_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rr_damper_linear_potentiometer
  {
    out << "rr_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_damper_linear_potentiometer, out);
    out << ", ";
  }

  // member: rr_tire_pressure
  {
    out << "rr_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_tire_pressure, out);
    out << ", ";
  }

  // member: rr_tire_pressure_gauge
  {
    out << "rr_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_tire_pressure_gauge, out);
    out << ", ";
  }

  // member: rr_wheel_load
  {
    out << "rr_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_wheel_load, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TireReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: fl_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fl_tire_temperature.size() == 0) {
      out << "fl_tire_temperature: []\n";
    } else {
      out << "fl_tire_temperature:\n";
      for (auto item : msg.fl_tire_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fl_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: fl_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_tire_pressure, out);
    out << "\n";
  }

  // member: fl_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: fl_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_wheel_load, out);
    out << "\n";
  }

  // member: fr_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fr_tire_temperature.size() == 0) {
      out << "fr_tire_temperature: []\n";
    } else {
      out << "fr_tire_temperature:\n";
      for (auto item : msg.fr_tire_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fr_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: fr_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_tire_pressure, out);
    out << "\n";
  }

  // member: fr_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: fr_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_wheel_load, out);
    out << "\n";
  }

  // member: rl_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rl_tire_temperature.size() == 0) {
      out << "rl_tire_temperature: []\n";
    } else {
      out << "rl_tire_temperature:\n";
      for (auto item : msg.rl_tire_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rl_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: rl_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_tire_pressure, out);
    out << "\n";
  }

  // member: rl_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: rl_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_wheel_load, out);
    out << "\n";
  }

  // member: rr_tire_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rr_tire_temperature.size() == 0) {
      out << "rr_tire_temperature: []\n";
    } else {
      out << "rr_tire_temperature:\n";
      for (auto item : msg.rr_tire_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rr_damper_linear_potentiometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_damper_linear_potentiometer: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_damper_linear_potentiometer, out);
    out << "\n";
  }

  // member: rr_tire_pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_tire_pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_tire_pressure, out);
    out << "\n";
  }

  // member: rr_tire_pressure_gauge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_tire_pressure_gauge: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_tire_pressure_gauge, out);
    out << "\n";
  }

  // member: rr_wheel_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_wheel_load: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_wheel_load, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TireReport & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace npc_controller_msgs

namespace rosidl_generator_traits
{

[[deprecated("use npc_controller_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const npc_controller_msgs::msg::TireReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  npc_controller_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use npc_controller_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const npc_controller_msgs::msg::TireReport & msg)
{
  return npc_controller_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<npc_controller_msgs::msg::TireReport>()
{
  return "npc_controller_msgs::msg::TireReport";
}

template<>
inline const char * name<npc_controller_msgs::msg::TireReport>()
{
  return "npc_controller_msgs/msg/TireReport";
}

template<>
struct has_fixed_size<npc_controller_msgs::msg::TireReport>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<npc_controller_msgs::msg::TireReport>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<npc_controller_msgs::msg::TireReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NPC_CONTROLLER_MSGS__MSG__DETAIL__TIRE_REPORT__TRAITS_HPP_
