// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from frhal_msgs:srv/CalibInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__STRUCT_HPP_
#define FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__frhal_msgs__srv__CalibInterface_Request __attribute__((deprecated))
#else
# define DEPRECATED__frhal_msgs__srv__CalibInterface_Request __declspec(deprecated)
#endif

namespace frhal_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalibInterface_Request_
{
  using Type = CalibInterface_Request_<ContainerAllocator>;

  explicit CalibInterface_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model = 0;
      this->base_param = "";
      this->x_step = 0.0;
      this->y_step = 0.0;
      this->angle_step = 0.0;
    }
  }

  explicit CalibInterface_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_param(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model = 0;
      this->base_param = "";
      this->x_step = 0.0;
      this->y_step = 0.0;
      this->angle_step = 0.0;
    }
  }

  // field types and members
  using _model_type =
    uint8_t;
  _model_type model;
  using _base_param_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _base_param_type base_param;
  using _x_step_type =
    double;
  _x_step_type x_step;
  using _y_step_type =
    double;
  _y_step_type y_step;
  using _angle_step_type =
    double;
  _angle_step_type angle_step;
  using _input_poses_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _input_poses_type input_poses;

  // setters for named parameter idiom
  Type & set__model(
    const uint8_t & _arg)
  {
    this->model = _arg;
    return *this;
  }
  Type & set__base_param(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->base_param = _arg;
    return *this;
  }
  Type & set__x_step(
    const double & _arg)
  {
    this->x_step = _arg;
    return *this;
  }
  Type & set__y_step(
    const double & _arg)
  {
    this->y_step = _arg;
    return *this;
  }
  Type & set__angle_step(
    const double & _arg)
  {
    this->angle_step = _arg;
    return *this;
  }
  Type & set__input_poses(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->input_poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__frhal_msgs__srv__CalibInterface_Request
    std::shared_ptr<frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__frhal_msgs__srv__CalibInterface_Request
    std::shared_ptr<frhal_msgs::srv::CalibInterface_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalibInterface_Request_ & other) const
  {
    if (this->model != other.model) {
      return false;
    }
    if (this->base_param != other.base_param) {
      return false;
    }
    if (this->x_step != other.x_step) {
      return false;
    }
    if (this->y_step != other.y_step) {
      return false;
    }
    if (this->angle_step != other.angle_step) {
      return false;
    }
    if (this->input_poses != other.input_poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalibInterface_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalibInterface_Request_

// alias to use template instance with default allocator
using CalibInterface_Request =
  frhal_msgs::srv::CalibInterface_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace frhal_msgs


#ifndef _WIN32
# define DEPRECATED__frhal_msgs__srv__CalibInterface_Response __attribute__((deprecated))
#else
# define DEPRECATED__frhal_msgs__srv__CalibInterface_Response __declspec(deprecated)
#endif

namespace frhal_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalibInterface_Response_
{
  using Type = CalibInterface_Response_<ContainerAllocator>;

  explicit CalibInterface_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_result = false;
      this->error_msg = "";
    }
  }

  explicit CalibInterface_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_result = false;
      this->error_msg = "";
    }
  }

  // field types and members
  using _cmd_result_type =
    bool;
  _cmd_result_type cmd_result;
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;
  using _output_poses_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _output_poses_type output_poses;

  // setters for named parameter idiom
  Type & set__cmd_result(
    const bool & _arg)
  {
    this->cmd_result = _arg;
    return *this;
  }
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }
  Type & set__output_poses(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->output_poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__frhal_msgs__srv__CalibInterface_Response
    std::shared_ptr<frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__frhal_msgs__srv__CalibInterface_Response
    std::shared_ptr<frhal_msgs::srv::CalibInterface_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalibInterface_Response_ & other) const
  {
    if (this->cmd_result != other.cmd_result) {
      return false;
    }
    if (this->error_msg != other.error_msg) {
      return false;
    }
    if (this->output_poses != other.output_poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalibInterface_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalibInterface_Response_

// alias to use template instance with default allocator
using CalibInterface_Response =
  frhal_msgs::srv::CalibInterface_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace frhal_msgs

namespace frhal_msgs
{

namespace srv
{

struct CalibInterface
{
  using Request = frhal_msgs::srv::CalibInterface_Request;
  using Response = frhal_msgs::srv::CalibInterface_Response;
};

}  // namespace srv

}  // namespace frhal_msgs

#endif  // FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__STRUCT_HPP_
