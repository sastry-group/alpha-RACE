// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/SceneEntities.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITIES__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'deletions'
#include "foxglove_msgs/msg/detail/scene_entity_deletion__struct.hpp"
// Member 'entities'
#include "foxglove_msgs/msg/detail/scene_entity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__SceneEntities __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__SceneEntities __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SceneEntities_
{
  using Type = SceneEntities_<ContainerAllocator>;

  explicit SceneEntities_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SceneEntities_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _deletions_type =
    std::vector<foxglove_msgs::msg::SceneEntityDeletion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::SceneEntityDeletion_<ContainerAllocator>>>;
  _deletions_type deletions;
  using _entities_type =
    std::vector<foxglove_msgs::msg::SceneEntity_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::SceneEntity_<ContainerAllocator>>>;
  _entities_type entities;

  // setters for named parameter idiom
  Type & set__deletions(
    const std::vector<foxglove_msgs::msg::SceneEntityDeletion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::SceneEntityDeletion_<ContainerAllocator>>> & _arg)
  {
    this->deletions = _arg;
    return *this;
  }
  Type & set__entities(
    const std::vector<foxglove_msgs::msg::SceneEntity_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<foxglove_msgs::msg::SceneEntity_<ContainerAllocator>>> & _arg)
  {
    this->entities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::SceneEntities_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::SceneEntities_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::SceneEntities_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::SceneEntities_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::SceneEntities_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::SceneEntities_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::SceneEntities_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::SceneEntities_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::SceneEntities_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::SceneEntities_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__SceneEntities
    std::shared_ptr<foxglove_msgs::msg::SceneEntities_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__SceneEntities
    std::shared_ptr<foxglove_msgs::msg::SceneEntities_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SceneEntities_ & other) const
  {
    if (this->deletions != other.deletions) {
      return false;
    }
    if (this->entities != other.entities) {
      return false;
    }
    return true;
  }
  bool operator!=(const SceneEntities_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SceneEntities_

// alias to use template instance with default allocator
using SceneEntities =
  foxglove_msgs::msg::SceneEntities_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__SCENE_ENTITIES__STRUCT_HPP_
