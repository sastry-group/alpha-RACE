// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from foxglove_msgs:msg/PoseInFrame.idl
// generated code does not contain a copyright notice

#ifndef FOXGLOVE_MSGS__MSG__DETAIL__POSE_IN_FRAME__STRUCT_HPP_
#define FOXGLOVE_MSGS__MSG__DETAIL__POSE_IN_FRAME__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__foxglove_msgs__msg__PoseInFrame __attribute__((deprecated))
#else
# define DEPRECATED__foxglove_msgs__msg__PoseInFrame __declspec(deprecated)
#endif

namespace foxglove_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseInFrame_
{
  using Type = PoseInFrame_<ContainerAllocator>;

  explicit PoseInFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
    }
  }

  explicit PoseInFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    frame_id(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

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
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    foxglove_msgs::msg::PoseInFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const foxglove_msgs::msg::PoseInFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<foxglove_msgs::msg::PoseInFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<foxglove_msgs::msg::PoseInFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::PoseInFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::PoseInFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      foxglove_msgs::msg::PoseInFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<foxglove_msgs::msg::PoseInFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<foxglove_msgs::msg::PoseInFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<foxglove_msgs::msg::PoseInFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__foxglove_msgs__msg__PoseInFrame
    std::shared_ptr<foxglove_msgs::msg::PoseInFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__foxglove_msgs__msg__PoseInFrame
    std::shared_ptr<foxglove_msgs::msg::PoseInFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseInFrame_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseInFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseInFrame_

// alias to use template instance with default allocator
using PoseInFrame =
  foxglove_msgs::msg::PoseInFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace foxglove_msgs

#endif  // FOXGLOVE_MSGS__MSG__DETAIL__POSE_IN_FRAME__STRUCT_HPP_
