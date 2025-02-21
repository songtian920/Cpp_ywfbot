// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from frhal_msgs:srv/RobotInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__ROBOT_INTERFACE__STRUCT_HPP_
#define FRHAL_MSGS__SRV__DETAIL__ROBOT_INTERFACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__frhal_msgs__srv__RobotInterface_Request __attribute__((deprecated))
#else
# define DEPRECATED__frhal_msgs__srv__RobotInterface_Request __declspec(deprecated)
#endif

namespace frhal_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotInterface_Request_
{
  using Type = RobotInterface_Request_<ContainerAllocator>;

  explicit RobotInterface_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_str = "";
    }
  }

  explicit RobotInterface_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd_str(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_str = "";
    }
  }

  // field types and members
  using _cmd_str_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_str_type cmd_str;

  // setters for named parameter idiom
  Type & set__cmd_str(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd_str = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__frhal_msgs__srv__RobotInterface_Request
    std::shared_ptr<frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__frhal_msgs__srv__RobotInterface_Request
    std::shared_ptr<frhal_msgs::srv::RobotInterface_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotInterface_Request_ & other) const
  {
    if (this->cmd_str != other.cmd_str) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotInterface_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotInterface_Request_

// alias to use template instance with default allocator
using RobotInterface_Request =
  frhal_msgs::srv::RobotInterface_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace frhal_msgs


#ifndef _WIN32
# define DEPRECATED__frhal_msgs__srv__RobotInterface_Response __attribute__((deprecated))
#else
# define DEPRECATED__frhal_msgs__srv__RobotInterface_Response __declspec(deprecated)
#endif

namespace frhal_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotInterface_Response_
{
  using Type = RobotInterface_Response_<ContainerAllocator>;

  explicit RobotInterface_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_res = "";
      this->error_msg = "";
    }
  }

  explicit RobotInterface_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd_res(_alloc),
    error_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_res = "";
      this->error_msg = "";
    }
  }

  // field types and members
  using _cmd_res_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_res_type cmd_res;
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;

  // setters for named parameter idiom
  Type & set__cmd_res(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd_res = _arg;
    return *this;
  }
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__frhal_msgs__srv__RobotInterface_Response
    std::shared_ptr<frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__frhal_msgs__srv__RobotInterface_Response
    std::shared_ptr<frhal_msgs::srv::RobotInterface_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotInterface_Response_ & other) const
  {
    if (this->cmd_res != other.cmd_res) {
      return false;
    }
    if (this->error_msg != other.error_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotInterface_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotInterface_Response_

// alias to use template instance with default allocator
using RobotInterface_Response =
  frhal_msgs::srv::RobotInterface_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace frhal_msgs

namespace frhal_msgs
{

namespace srv
{

struct RobotInterface
{
  using Request = frhal_msgs::srv::RobotInterface_Request;
  using Response = frhal_msgs::srv::RobotInterface_Response;
};

}  // namespace srv

}  // namespace frhal_msgs

#endif  // FRHAL_MSGS__SRV__DETAIL__ROBOT_INTERFACE__STRUCT_HPP_
