// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from frhal_msgs:srv/CalibInterface.idl
// generated code does not contain a copyright notice

#ifndef FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__STRUCT_H_
#define FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'base_param'
#include "rosidl_runtime_c/string.h"
// Member 'input_poses'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/CalibInterface in the package frhal_msgs.
typedef struct frhal_msgs__srv__CalibInterface_Request
{
  /// 标定的模式和其它功能
  uint8_t model;
  /// 基础参数 像元尺寸,标定板类型,标定板尺寸,标定板的间距
  rosidl_runtime_c__String base_param;
  /// x_方向的步长
  double x_step;
  /// y_方向的步长
  double y_step;
  /// 角度步长
  double angle_step;
  /// 输入的位姿
  rosidl_runtime_c__double__Sequence input_poses;
} frhal_msgs__srv__CalibInterface_Request;

// Struct for a sequence of frhal_msgs__srv__CalibInterface_Request.
typedef struct frhal_msgs__srv__CalibInterface_Request__Sequence
{
  frhal_msgs__srv__CalibInterface_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} frhal_msgs__srv__CalibInterface_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_msg'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'output_poses'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/CalibInterface in the package frhal_msgs.
typedef struct frhal_msgs__srv__CalibInterface_Response
{
  /// 命令执行结果
  bool cmd_result;
  /// 错误信息
  rosidl_runtime_c__String error_msg;
  /// 输出位姿
  rosidl_runtime_c__double__Sequence output_poses;
} frhal_msgs__srv__CalibInterface_Response;

// Struct for a sequence of frhal_msgs__srv__CalibInterface_Response.
typedef struct frhal_msgs__srv__CalibInterface_Response__Sequence
{
  frhal_msgs__srv__CalibInterface_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} frhal_msgs__srv__CalibInterface_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRHAL_MSGS__SRV__DETAIL__CALIB_INTERFACE__STRUCT_H_
