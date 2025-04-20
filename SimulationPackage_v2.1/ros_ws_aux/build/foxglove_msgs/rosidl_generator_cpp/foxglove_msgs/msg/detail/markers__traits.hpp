// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/Markers.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__MARKERS__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__MARKERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/markers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'deletions'
#include "foxglove_msgs/msg/detail/marker_deletion__traits.hpp"
// Member 'arrows'
#include "foxglove_msgs/msg/detail/arrow_marker__traits.hpp"
// Member 'cubes'
#include "foxglove_msgs/msg/detail/cube_list_marker__traits.hpp"
// Member 'spheres'
#include "foxglove_msgs/msg/detail/sphere_list_marker__traits.hpp"
// Member 'cones'
#include "foxglove_msgs/msg/detail/cone_list_marker__traits.hpp"
// Member 'lines'
#include "foxglove_msgs/msg/detail/line_marker__traits.hpp"
// Member 'triangles'
#include "foxglove_msgs/msg/detail/triangle_list_marker__traits.hpp"
// Member 'texts'
#include "foxglove_msgs/msg/detail/text_marker__traits.hpp"
// Member 'models'
#include "foxglove_msgs/msg/detail/model_marker__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Markers & msg,
  std::ostream & out)
{
  out << "{";
  // member: deletions
  {
    if (msg.deletions.size() == 0) {
      out << "deletions: []";
    } else {
      out << "deletions: [";
      size_t pending_items = msg.deletions.size();
      for (auto item : msg.deletions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: arrows
  {
    if (msg.arrows.size() == 0) {
      out << "arrows: []";
    } else {
      out << "arrows: [";
      size_t pending_items = msg.arrows.size();
      for (auto item : msg.arrows) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cubes
  {
    if (msg.cubes.size() == 0) {
      out << "cubes: []";
    } else {
      out << "cubes: [";
      size_t pending_items = msg.cubes.size();
      for (auto item : msg.cubes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: spheres
  {
    if (msg.spheres.size() == 0) {
      out << "spheres: []";
    } else {
      out << "spheres: [";
      size_t pending_items = msg.spheres.size();
      for (auto item : msg.spheres) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cones
  {
    if (msg.cones.size() == 0) {
      out << "cones: []";
    } else {
      out << "cones: [";
      size_t pending_items = msg.cones.size();
      for (auto item : msg.cones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lines
  {
    if (msg.lines.size() == 0) {
      out << "lines: []";
    } else {
      out << "lines: [";
      size_t pending_items = msg.lines.size();
      for (auto item : msg.lines) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: triangles
  {
    if (msg.triangles.size() == 0) {
      out << "triangles: []";
    } else {
      out << "triangles: [";
      size_t pending_items = msg.triangles.size();
      for (auto item : msg.triangles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: texts
  {
    if (msg.texts.size() == 0) {
      out << "texts: []";
    } else {
      out << "texts: [";
      size_t pending_items = msg.texts.size();
      for (auto item : msg.texts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: models
  {
    if (msg.models.size() == 0) {
      out << "models: []";
    } else {
      out << "models: [";
      size_t pending_items = msg.models.size();
      for (auto item : msg.models) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Markers & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: deletions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deletions.size() == 0) {
      out << "deletions: []\n";
    } else {
      out << "deletions:\n";
      for (auto item : msg.deletions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: arrows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arrows.size() == 0) {
      out << "arrows: []\n";
    } else {
      out << "arrows:\n";
      for (auto item : msg.arrows) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cubes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cubes.size() == 0) {
      out << "cubes: []\n";
    } else {
      out << "cubes:\n";
      for (auto item : msg.cubes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: spheres
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.spheres.size() == 0) {
      out << "spheres: []\n";
    } else {
      out << "spheres:\n";
      for (auto item : msg.spheres) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cones.size() == 0) {
      out << "cones: []\n";
    } else {
      out << "cones:\n";
      for (auto item : msg.cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lines.size() == 0) {
      out << "lines: []\n";
    } else {
      out << "lines:\n";
      for (auto item : msg.lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: triangles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.triangles.size() == 0) {
      out << "triangles: []\n";
    } else {
      out << "triangles:\n";
      for (auto item : msg.triangles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: texts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.texts.size() == 0) {
      out << "texts: []\n";
    } else {
      out << "texts:\n";
      for (auto item : msg.texts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: models
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.models.size() == 0) {
      out << "models: []\n";
    } else {
      out << "models:\n";
      for (auto item : msg.models) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Markers & msg, bool use_flow_style = false)
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

}  // namespace foxglove_msgs

namespace rosidl_generator_traits
{

[[deprecated("use foxglove_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const foxglove_msgs::msg::Markers & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::Markers & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::Markers>()
{
  return "foxglove_msgs::msg::Markers";
}

template<>
inline const char * name<foxglove_msgs::msg::Markers>()
{
  return "foxglove_msgs/msg/Markers";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::Markers>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::Markers>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::Markers>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__MARKERS__TRAITS_HPP_
