// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from foxglove_msgs:msg/SceneEntity.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY__TRAITS_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "foxglove_msgs/msg/detail/scene_entity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'metadata'
#include "foxglove_msgs/msg/detail/key_value_pair__traits.hpp"
// Member 'arrows'
#include "foxglove_msgs/msg/detail/arrow_primitive__traits.hpp"
// Member 'cubes'
#include "foxglove_msgs/msg/detail/cube_primitive__traits.hpp"
// Member 'spheres'
#include "foxglove_msgs/msg/detail/sphere_primitive__traits.hpp"
// Member 'cylinders'
#include "foxglove_msgs/msg/detail/cylinder_primitive__traits.hpp"
// Member 'lines'
#include "foxglove_msgs/msg/detail/line_primitive__traits.hpp"
// Member 'triangles'
#include "foxglove_msgs/msg/detail/triangle_list_primitive__traits.hpp"
// Member 'texts'
#include "foxglove_msgs/msg/detail/text_primitive__traits.hpp"
// Member 'models'
#include "foxglove_msgs/msg/detail/model_primitive__traits.hpp"

namespace foxglove_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SceneEntity & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: lifetime
  {
    out << "lifetime: ";
    to_flow_style_yaml(msg.lifetime, out);
    out << ", ";
  }

  // member: frame_locked
  {
    out << "frame_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_locked, out);
    out << ", ";
  }

  // member: metadata
  {
    if (msg.metadata.size() == 0) {
      out << "metadata: []";
    } else {
      out << "metadata: [";
      size_t pending_items = msg.metadata.size();
      for (auto item : msg.metadata) {
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

  // member: cylinders
  {
    if (msg.cylinders.size() == 0) {
      out << "cylinders: []";
    } else {
      out << "cylinders: [";
      size_t pending_items = msg.cylinders.size();
      for (auto item : msg.cylinders) {
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
  const SceneEntity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime:\n";
    to_block_style_yaml(msg.lifetime, out, indentation + 2);
  }

  // member: frame_locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_locked, out);
    out << "\n";
  }

  // member: metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.metadata.size() == 0) {
      out << "metadata: []\n";
    } else {
      out << "metadata:\n";
      for (auto item : msg.metadata) {
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

  // member: cylinders
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cylinders.size() == 0) {
      out << "cylinders: []\n";
    } else {
      out << "cylinders:\n";
      for (auto item : msg.cylinders) {
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

inline std::string to_yaml(const SceneEntity & msg, bool use_flow_style = false)
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
  const foxglove_msgs::msg::SceneEntity & msg,
  std::ostream & out, size_t indentation = 0)
{
  foxglove_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use foxglove_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const foxglove_msgs::msg::SceneEntity & msg)
{
  return foxglove_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<foxglove_msgs::msg::SceneEntity>()
{
  return "foxglove_msgs::msg::SceneEntity";
}

template<>
inline const char * name<foxglove_msgs::msg::SceneEntity>()
{
  return "foxglove_msgs/msg/SceneEntity";
}

template<>
struct has_fixed_size<foxglove_msgs::msg::SceneEntity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<foxglove_msgs::msg::SceneEntity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<foxglove_msgs::msg::SceneEntity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY__TRAITS_HPP_
