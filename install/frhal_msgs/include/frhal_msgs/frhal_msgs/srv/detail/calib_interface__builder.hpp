// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from frhal_msgs:srv/CalibInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__BUILDER_HPP_
#define FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "frhal_msgs/srv/detail/calib_interface__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace frhal_msgs
{

namespace srv
{

namespace builder
{

class Init_CalibInterface_Request_input_poses
{
public:
  explicit Init_CalibInterface_Request_input_poses(::frhal_msgs::srv::CalibInterface_Request & msg)
  : msg_(msg)
  {}
  ::frhal_msgs::srv::CalibInterface_Request input_poses(::frhal_msgs::srv::CalibInterface_Request::_input_poses_type arg)
  {
    msg_.input_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::frhal_msgs::srv::CalibInterface_Request msg_;
};

class Init_CalibInterface_Request_angle_step
{
public:
  explicit Init_CalibInterface_Request_angle_step(::frhal_msgs::srv::CalibInterface_Request & msg)
  : msg_(msg)
  {}
  Init_CalibInterface_Request_input_poses angle_step(::frhal_msgs::srv::CalibInterface_Request::_angle_step_type arg)
  {
    msg_.angle_step = std::move(arg);
    return Init_CalibInterface_Request_input_poses(msg_);
  }

private:
  ::frhal_msgs::srv::CalibInterface_Request msg_;
};

class Init_CalibInterface_Request_y_step
{
public:
  explicit Init_CalibInterface_Request_y_step(::frhal_msgs::srv::CalibInterface_Request & msg)
  : msg_(msg)
  {}
  Init_CalibInterface_Request_angle_step y_step(::frhal_msgs::srv::CalibInterface_Request::_y_step_type arg)
  {
    msg_.y_step = std::move(arg);
    return Init_CalibInterface_Request_angle_step(msg_);
  }

private:
  ::frhal_msgs::srv::CalibInterface_Request msg_;
};

class Init_CalibInterface_Request_x_step
{
public:
  explicit Init_CalibInterface_Request_x_step(::frhal_msgs::srv::CalibInterface_Request & msg)
  : msg_(msg)
  {}
  Init_CalibInterface_Request_y_step x_step(::frhal_msgs::srv::CalibInterface_Request::_x_step_type arg)
  {
    msg_.x_step = std::move(arg);
    return Init_CalibInterface_Request_y_step(msg_);
  }

private:
  ::frhal_msgs::srv::CalibInterface_Request msg_;
};

class Init_CalibInterface_Request_base_param
{
public:
  explicit Init_CalibInterface_Request_base_param(::frhal_msgs::srv::CalibInterface_Request & msg)
  : msg_(msg)
  {}
  Init_CalibInterface_Request_x_step base_param(::frhal_msgs::srv::CalibInterface_Request::_base_param_type arg)
  {
    msg_.base_param = std::move(arg);
    return Init_CalibInterface_Request_x_step(msg_);
  }

private:
  ::frhal_msgs::srv::CalibInterface_Request msg_;
};

class Init_CalibInterface_Request_model
{
public:
  Init_CalibInterface_Request_model()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalibInterface_Request_base_param model(::frhal_msgs::srv::CalibInterface_Request::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_CalibInterface_Request_base_param(msg_);
  }

private:
  ::frhal_msgs::srv::CalibInterface_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::frhal_msgs::srv::CalibInterface_Request>()
{
  return frhal_msgs::srv::builder::Init_CalibInterface_Request_model();
}

}  // namespace frhal_msgs


namespace frhal_msgs
{

namespace srv
{

namespace builder
{

class Init_CalibInterface_Response_output_poses
{
public:
  explicit Init_CalibInterface_Response_output_poses(::frhal_msgs::srv::CalibInterface_Response & msg)
  : msg_(msg)
  {}
  ::frhal_msgs::srv::CalibInterface_Response output_poses(::frhal_msgs::srv::CalibInterface_Response::_output_poses_type arg)
  {
    msg_.output_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::frhal_msgs::srv::CalibInterface_Response msg_;
};

class Init_CalibInterface_Response_error_msg
{
public:
  explicit Init_CalibInterface_Response_error_msg(::frhal_msgs::srv::CalibInterface_Response & msg)
  : msg_(msg)
  {}
  Init_CalibInterface_Response_output_poses error_msg(::frhal_msgs::srv::CalibInterface_Response::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return Init_CalibInterface_Response_output_poses(msg_);
  }

private:
  ::frhal_msgs::srv::CalibInterface_Response msg_;
};

class Init_CalibInterface_Response_cmd_result
{
public:
  Init_CalibInterface_Response_cmd_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalibInterface_Response_error_msg cmd_result(::frhal_msgs::srv::CalibInterface_Response::_cmd_result_type arg)
  {
    msg_.cmd_result = std::move(arg);
    return Init_CalibInterface_Response_error_msg(msg_);
  }

private:
  ::frhal_msgs::srv::CalibInterface_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::frhal_msgs::srv::CalibInterface_Response>()
{
  return frhal_msgs::srv::builder::Init_CalibInterface_Response_cmd_result();
}

}  // namespace frhal_msgs

#endif  // FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__BUILDER_HPP_
