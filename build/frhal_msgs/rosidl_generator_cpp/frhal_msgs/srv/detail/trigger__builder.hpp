// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from frhal_msgs:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__TRIGGER__BUILDER_HPP_
#define FRHAL_MSGS__SRV__DETAIL__TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "frhal_msgs/srv/detail/trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace frhal_msgs
{

namespace srv
{

namespace builder
{

class Init_Trigger_Request_request
{
public:
  Init_Trigger_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::frhal_msgs::srv::Trigger_Request request(::frhal_msgs::srv::Trigger_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::frhal_msgs::srv::Trigger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::frhal_msgs::srv::Trigger_Request>()
{
  return frhal_msgs::srv::builder::Init_Trigger_Request_request();
}

}  // namespace frhal_msgs


namespace frhal_msgs
{

namespace srv
{

namespace builder
{

class Init_Trigger_Response_result
{
public:
  Init_Trigger_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::frhal_msgs::srv::Trigger_Response result(::frhal_msgs::srv::Trigger_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::frhal_msgs::srv::Trigger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::frhal_msgs::srv::Trigger_Response>()
{
  return frhal_msgs::srv::builder::Init_Trigger_Response_result();
}

}  // namespace frhal_msgs

#endif  // FRHAL_MSGS__SRV__DETAIL__TRIGGER__BUILDER_HPP_
