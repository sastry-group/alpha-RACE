// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/CubeListMarker.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__CUBE_LIST_MARKER__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__CUBE_LIST_MARKER__STRUCT_HPP_

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
// Member 'attributes'
#include "foxglove_msgs/msg/detail/cube_attributes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__CubeListMarker __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__CubeListMarker __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CubeListMarker_
{
  using Type = CubeListMarker_<ContainerAllocator>;

  explicit CubeListMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit CubeListMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _attributes_type =
    std::vector<foxglove_msgs::msg::CubeAttributes_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::CubeAttributes_<ContainerAllocator>>>;
  _attributes_type attributes;

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
  Type & set__attributes(
    const std::vector<foxglove_msgs::msg::CubeAttributes_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::CubeAttributes_<ContainerAllocator>>> & _arg)
  {
    this->attributes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::CubeListMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::CubeListMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::CubeListMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::CubeListMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__CubeListMarker
    std::shared_ptr<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__CubeListMarker
    std::shared_ptr<foxglove_msgs::msg::CubeListMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CubeListMarker_ & other) const
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
    if (this->attributes != other.attributes) {
      return false;
    }
    return true;
  }
  bool operator!=(const CubeListMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CubeListMarker_

// alias to use template instance with default allocator
using CubeListMarker =
  foxglove_msgs::msg::CubeListMarker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__CUBE_LIST_MARKER__STRUCT_HPP_
