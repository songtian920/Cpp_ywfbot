// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from frhal_msgs:srv/RobotInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__ROBOT_INTERFACE__STRUCT_H_
#define FRHAL_MSGS__SRV__DETAIL__ROBOT_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd_str'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RobotInterface in the package frhal_msgs.
typedef struct frhal_msgs__srv__RobotInterface_Request
{
  /// ros用户输入的字符串指令，比如movej(p1,100)
  rosidl_runtime_c__String cmd_str;
} frhal_msgs__srv__RobotInterface_Request;

// Struct for a sequence of frhal_msgs__srv__RobotInterface_Request.
typedef struct frhal_msgs__srv__RobotInterface_Request__Sequence
{
  frhal_msgs__srv__RobotInterface_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} frhal_msgs__srv__RobotInterface_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'cmd_res'
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RobotInterface in the package frhal_msgs.
typedef struct frhal_msgs__srv__RobotInterface_Response
{
  /// 创建结果反馈，-1:机械手服务未启动,0:命令执行失败，1:成功,2:执行超时
  rosidl_runtime_c__String cmd_res;
  /// 错误信息
  rosidl_runtime_c__String error_msg;
} frhal_msgs__srv__RobotInterface_Response;

// Struct for a sequence of frhal_msgs__srv__RobotInterface_Response.
typedef struct frhal_msgs__srv__RobotInterface_Response__Sequence
{
  frhal_msgs__srv__RobotInterface_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} frhal_msgs__srv__RobotInterface_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRHAL_MSGS__SRV__DETAIL__ROBOT_INTERFACE__STRUCT_H_
