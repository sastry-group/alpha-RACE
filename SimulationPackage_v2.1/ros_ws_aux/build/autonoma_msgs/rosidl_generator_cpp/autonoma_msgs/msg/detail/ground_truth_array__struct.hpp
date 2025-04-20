// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autonoma_msgs:msg/GroundTruthArray.idl
// generated code does not contain a copyright notice

#ifndef AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__STRUCT_HPP_
#define AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'vehicles'
#include "autonoma_msgs/msg/detail/ground_truth__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autonoma_msgs__msg__GroundTruthArray __attribute__((deprecated))
#else
# define DEPRECATED__autonoma_msgs__msg__GroundTruthArray __declspec(deprecated)
#endif

namespace autonoma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GroundTruthArray_
{
  using Type = GroundTruthArray_<ContainerAllocator>;

  explicit GroundTruthArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit GroundTruthArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vehicles_type =
    std::vector<autonoma_msgs::msg::GroundTruth_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autonoma_msgs::msg::GroundTruth_<ContainerAllocator>>>;
  _vehicles_type vehicles;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vehicles(
    const std::vector<autonoma_msgs::msg::GroundTruth_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autonoma_msgs::msg::GroundTruth_<ContainerAllocator>>> & _arg)
  {
    this->vehicles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autonoma_msgs__msg__GroundTruthArray
    std::shared_ptr<autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autonoma_msgs__msg__GroundTruthArray
    std::shared_ptr<autonoma_msgs::msg::GroundTruthArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroundTruthArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vehicles != other.vehicles) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroundTruthArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroundTruthArray_

// alias to use template instance with default allocator
using GroundTruthArray =
  autonoma_msgs::msg::GroundTruthArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autonoma_msgs

#endif  // AUTONOMA_MSGS__MSG__DETAIL__GROUND_TRUTH_ARRAY__STRUCT_HPP_
