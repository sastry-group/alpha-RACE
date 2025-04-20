// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from novatel_oem7_msgs:srv/Oem7AbasciiCmd.idl
// generated code does not contain a copyright notice

#ifndef NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__STRUCT_HPP_
#define NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Oem7AbasciiCmd_Request_
{
  using Type = Oem7AbasciiCmd_Request_<ContainerAllocator>;

  explicit Oem7AbasciiCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
    }
  }

  explicit Oem7AbasciiCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
    }
  }

  // field types and members
  using _cmd_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_type cmd;

  // setters for named parameter idiom
  Type & set__cmd(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request
    std::shared_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__srv__Oem7AbasciiCmd_Request
    std::shared_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Oem7AbasciiCmd_Request_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const Oem7AbasciiCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Oem7AbasciiCmd_Request_

// alias to use template instance with default allocator
using Oem7AbasciiCmd_Request =
  novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace novatel_oem7_msgs


#ifndef _WIN32
# define DEPRECATED__novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response __declspec(deprecated)
#endif

namespace novatel_oem7_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Oem7AbasciiCmd_Response_
{
  using Type = Oem7AbasciiCmd_Response_<ContainerAllocator>;

  explicit Oem7AbasciiCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rsp = "";
    }
  }

  explicit Oem7AbasciiCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rsp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rsp = "";
    }
  }

  // field types and members
  using _rsp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rsp_type rsp;

  // setters for named parameter idiom
  Type & set__rsp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rsp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response
    std::shared_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__novatel_oem7_msgs__srv__Oem7AbasciiCmd_Response
    std::shared_ptr<novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Oem7AbasciiCmd_Response_ & other) const
  {
    if (this->rsp != other.rsp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Oem7AbasciiCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Oem7AbasciiCmd_Response_

// alias to use template instance with default allocator
using Oem7AbasciiCmd_Response =
  novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace novatel_oem7_msgs

namespace novatel_oem7_msgs
{

namespace srv
{

struct Oem7AbasciiCmd
{
  using Request = novatel_oem7_msgs::srv::Oem7AbasciiCmd_Request;
  using Response = novatel_oem7_msgs::srv::Oem7AbasciiCmd_Response;
};

}  // namespace srv

}  // namespace novatel_oem7_msgs

#endif  // NOVATEL_OEM7_MSGS__SRV__DETAIL__OEM7_ABASCII_CMD__STRUCT_HPP_
