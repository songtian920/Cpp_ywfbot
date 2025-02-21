// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from frhal_msgs:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__TRIGGER__STRUCT_HPP_
#define FRHAL_MSGS__SRV__DETAIL__TRIGGER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__frhal_msgs__srv__Trigger_Request __attribute__((deprecated))
#else
# define DEPRECATED__frhal_msgs__srv__Trigger_Request __declspec(deprecated)
#endif

namespace frhal_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trigger_Request_
{
  using Type = Trigger_Request_<ContainerAllocator>;

  explicit Trigger_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = 0;
    }
  }

  explicit Trigger_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = 0;
    }
  }

  // field types and members
  using _request_type =
    uint8_t;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const uint8_t & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    frhal_msgs::srv::Trigger_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const frhal_msgs::srv::Trigger_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<frhal_msgs::srv::Trigger_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<frhal_msgs::srv::Trigger_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::Trigger_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::Trigger_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::Trigger_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::Trigger_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<frhal_msgs::srv::Trigger_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<frhal_msgs::srv::Trigger_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__frhal_msgs__srv__Trigger_Request
    std::shared_ptr<frhal_msgs::srv::Trigger_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__frhal_msgs__srv__Trigger_Request
    std::shared_ptr<frhal_msgs::srv::Trigger_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trigger_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trigger_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trigger_Request_

// alias to use template instance with default allocator
using Trigger_Request =
  frhal_msgs::srv::Trigger_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace frhal_msgs


#ifndef _WIN32
# define DEPRECATED__frhal_msgs__srv__Trigger_Response __attribute__((deprecated))
#else
# define DEPRECATED__frhal_msgs__srv__Trigger_Response __declspec(deprecated)
#endif

namespace frhal_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trigger_Response_
{
  using Type = Trigger_Response_<ContainerAllocator>;

  explicit Trigger_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit Trigger_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    frhal_msgs::srv::Trigger_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const frhal_msgs::srv::Trigger_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<frhal_msgs::srv::Trigger_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<frhal_msgs::srv::Trigger_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::Trigger_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::Trigger_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::Trigger_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::Trigger_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<frhal_msgs::srv::Trigger_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<frhal_msgs::srv::Trigger_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__frhal_msgs__srv__Trigger_Response
    std::shared_ptr<frhal_msgs::srv::Trigger_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__frhal_msgs__srv__Trigger_Response
    std::shared_ptr<frhal_msgs::srv::Trigger_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trigger_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trigger_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trigger_Response_

// alias to use template instance with default allocator
using Trigger_Response =
  frhal_msgs::srv::Trigger_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace frhal_msgs

namespace frhal_msgs
{

namespace srv
{

struct Trigger
{
  using Request = frhal_msgs::srv::Trigger_Request;
  using Response = frhal_msgs::srv::Trigger_Response;
};

}  // namespace srv

}  // namespace frhal_msgs

#endif  // FRHAL_MSGS__SRV__DETAIL__TRIGGER__STRUCT_HPP_
