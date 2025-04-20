// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/SceneEntity.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'metadata'
#include "foxglove_msgs/msg/detail/key_value_pair__struct.hpp"
// Member 'arrows'
#include "foxglove_msgs/msg/detail/arrow_primitive__struct.hpp"
// Member 'cubes'
#include "foxglove_msgs/msg/detail/cube_primitive__struct.hpp"
// Member 'spheres'
#include "foxglove_msgs/msg/detail/sphere_primitive__struct.hpp"
// Member 'cylinders'
#include "foxglove_msgs/msg/detail/cylinder_primitive__struct.hpp"
// Member 'lines'
#include "foxglove_msgs/msg/detail/line_primitive__struct.hpp"
// Member 'triangles'
#include "foxglove_msgs/msg/detail/triangle_list_primitive__struct.hpp"
// Member 'texts'
#include "foxglove_msgs/msg/detail/text_primitive__struct.hpp"
// Member 'models'
#include "foxglove_msgs/msg/detail/model_primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__SceneEntity __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__SceneEntity __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SceneEntity_
{
  using Type = SceneEntity_<ContainerAllocator>;

  explicit SceneEntity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    lifetime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->id = "";
      this->frame_locked = false;
    }
  }

  explicit SceneEntity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    frame_id(_alloc),
    id(_alloc),
    lifetime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->id = "";
      this->frame_locked = false;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _lifetime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _lifetime_type lifetime;
  using _frame_locked_type =
    bool;
  _frame_locked_type frame_locked;
  using _metadata_type =
    std::vector<foxglove_msgs::msg::KeyValuePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::KeyValuePair_<ContainerAllocator>>>;
  _metadata_type metadata;
  using _arrows_type =
    std::vector<foxglove_msgs::msg::ArrowPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::ArrowPrimitive_<ContainerAllocator>>>;
  _arrows_type arrows;
  using _cubes_type =
    std::vector<foxglove_msgs::msg::CubePrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::CubePrimitive_<ContainerAllocator>>>;
  _cubes_type cubes;
  using _spheres_type =
    std::vector<foxglove_msgs::msg::SpherePrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::SpherePrimitive_<ContainerAllocator>>>;
  _spheres_type spheres;
  using _cylinders_type =
    std::vector<foxglove_msgs::msg::CylinderPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::CylinderPrimitive_<ContainerAllocator>>>;
  _cylinders_type cylinders;
  using _lines_type =
    std::vector<foxglove_msgs::msg::LinePrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::LinePrimitive_<ContainerAllocator>>>;
  _lines_type lines;
  using _triangles_type =
    std::vector<foxglove_msgs::msg::TriangleListPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::TriangleListPrimitive_<ContainerAllocator>>>;
  _triangles_type triangles;
  using _texts_type =
    std::vector<foxglove_msgs::msg::TextPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::TextPrimitive_<ContainerAllocator>>>;
  _texts_type texts;
  using _models_type =
    std::vector<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator>>>;
  _models_type models;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__lifetime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->lifetime = _arg;
    return *this;
  }
  Type & set__frame_locked(
    const bool & _arg)
  {
    this->frame_locked = _arg;
    return *this;
  }
  Type & set__metadata(
    const std::vector<foxglove_msgs::msg::KeyValuePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::KeyValuePair_<ContainerAllocator>>> & _arg)
  {
    this->metadata = _arg;
    return *this;
  }
  Type & set__arrows(
    const std::vector<foxglove_msgs::msg::ArrowPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::ArrowPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->arrows = _arg;
    return *this;
  }
  Type & set__cubes(
    const std::vector<foxglove_msgs::msg::CubePrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::CubePrimitive_<ContainerAllocator>>> & _arg)
  {
    this->cubes = _arg;
    return *this;
  }
  Type & set__spheres(
    const std::vector<foxglove_msgs::msg::SpherePrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::SpherePrimitive_<ContainerAllocator>>> & _arg)
  {
    this->spheres = _arg;
    return *this;
  }
  Type & set__cylinders(
    const std::vector<foxglove_msgs::msg::CylinderPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::CylinderPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->cylinders = _arg;
    return *this;
  }
  Type & set__lines(
    const std::vector<foxglove_msgs::msg::LinePrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::LinePrimitive_<ContainerAllocator>>> & _arg)
  {
    this->lines = _arg;
    return *this;
  }
  Type & set__triangles(
    const std::vector<foxglove_msgs::msg::TriangleListPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::TriangleListPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->triangles = _arg;
    return *this;
  }
  Type & set__texts(
    const std::vector<foxglove_msgs::msg::TextPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::TextPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->texts = _arg;
    return *this;
  }
  Type & set__models(
    const std::vector<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->models = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::SceneEntity_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::SceneEntity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::SceneEntity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::SceneEntity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::SceneEntity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::SceneEntity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::SceneEntity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::SceneEntity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::SceneEntity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::SceneEntity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__SceneEntity
    std::shared_ptr<foxglove_msgs::msg::SceneEntity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__SceneEntity
    std::shared_ptr<foxglove_msgs::msg::SceneEntity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SceneEntity_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->frame_locked != other.frame_locked) {
      return false;
    }
    if (this->metadata != other.metadata) {
      return false;
    }
    if (this->arrows != other.arrows) {
      return false;
    }
    if (this->cubes != other.cubes) {
      return false;
    }
    if (this->spheres != other.spheres) {
      return false;
    }
    if (this->cylinders != other.cylinders) {
      return false;
    }
    if (this->lines != other.lines) {
      return false;
    }
    if (this->triangles != other.triangles) {
      return false;
    }
    if (this->texts != other.texts) {
      return false;
    }
    if (this->models != other.models) {
      return false;
    }
    return true;
  }
  bool operator!=(const SceneEntity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SceneEntity_

// alias to use template instance with default allocator
using SceneEntity =
  foxglove_msgs::msg::SceneEntity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITY__STRUCT_HPP_
