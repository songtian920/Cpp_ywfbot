// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from frhal_msgs:srv/RobotInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__ROBOT_INTERFACE__BUILDER_HPP_
#define FRHAL_MSGS__SRV__DETAIL__ROBOT_INTERFACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "frhal_msgs/srv/detail/robot_interface__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace frhal_msgs
{

namespace srv
{

namespace builder
{

class Init_RobotInterface_Request_cmd_str
{
public:
  Init_RobotInterface_Request_cmd_str()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::frhal_msgs::srv::RobotInterface_Request cmd_str(::frhal_msgs::srv::RobotInterface_Request::_cmd_str_type arg)
  {
    msg_.cmd_str = std::move(arg);
    return std::move(msg_);
  }

private:
  ::frhal_msgs::srv::RobotInterface_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::frhal_msgs::srv::RobotInterface_Request>()
{
  return frhal_msgs::srv::builder::Init_RobotInterface_Request_cmd_str();
}

}  // namespace frhal_msgs


namespace frhal_msgs
{

namespace srv
{

namespace builder
{

class Init_RobotInterface_Response_error_msg
{
public:
  explicit Init_RobotInterface_Response_error_msg(::frhal_msgs::srv::RobotInterface_Response & msg)
  : msg_(msg)
  {}
  ::frhal_msgs::srv::RobotInterface_Response error_msg(::frhal_msgs::srv::RobotInterface_Response::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::frhal_msgs::srv::RobotInterface_Response msg_;
};

class Init_RobotInterface_Response_cmd_res
{
public:
  Init_RobotInterface_Response_cmd_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotInterface_Response_error_msg cmd_res(::frhal_msgs::srv::RobotInterface_Response::_cmd_res_type arg)
  {
    msg_.cmd_res = std::move(arg);
    return Init_RobotInterface_Response_error_msg(msg_);
  }

private:
  ::frhal_msgs::srv::RobotInterface_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::frhal_msgs::srv::RobotInterface_Response>()
{
  return frhal_msgs::srv::builder::Init_RobotInterface_Response_cmd_res();
}

}  // namespace frhal_msgs

#endif  // FRHAL_MSGS__SRV__DETAIL__ROBOT_INTERFACE__BUILDER_HPP_
