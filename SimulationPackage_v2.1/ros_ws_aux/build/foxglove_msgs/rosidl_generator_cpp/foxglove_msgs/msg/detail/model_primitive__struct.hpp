// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/ModelPrimitive.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__MODEL_PRIMITIVE__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__MODEL_PRIMITIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'scale'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'color'
#include "foxglove_msgs/msg/detail/color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__ModelPrimitive __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__ModelPrimitive __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModelPrimitive_
{
  using Type = ModelPrimitive_<ContainerAllocator>;

  explicit ModelPrimitive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    scale(_init),
    color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->override_color = false;
      this->url = "";
      this->media_type = "";
    }
  }

  explicit ModelPrimitive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    scale(_alloc, _init),
    color(_alloc, _init),
    url(_alloc),
    media_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->override_color = false;
      this->url = "";
      this->media_type = "";
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _scale_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _scale_type scale;
  using _color_type =
    foxglove_msgs::msg::Color_<ContainerAllocator>;
  _color_type color;
  using _override_color_type =
    bool;
  _override_color_type override_color;
  using _url_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _url_type url;
  using _media_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _media_type_type media_type;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__scale(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__color(
    const foxglove_msgs::msg::Color_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__override_color(
    const bool & _arg)
  {
    this->override_color = _arg;
    return *this;
  }
  Type & set__url(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->url = _arg;
    return *this;
  }
  Type & set__media_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->media_type = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__ModelPrimitive
    std::shared_ptr<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__ModelPrimitive
    std::shared_ptr<foxglove_msgs::msg::ModelPrimitive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModelPrimitive_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->override_color != other.override_color) {
      return false;
    }
    if (this->url != other.url) {
      return false;
    }
    if (this->media_type != other.media_type) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModelPrimitive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModelPrimitive_

// alias to use template instance with default allocator
using ModelPrimitive =
  foxglove_msgs::msg::ModelPrimitive_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__MODEL_PRIMITIVE__STRUCT_HPP_
