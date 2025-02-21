// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_ywf_msg:action/MoveitYwfIntf.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_YWF_MSG__ACTION__DETAIL__MOVEIT_YWF_INTF__STRUCT_H_
#define MOVEIT_YWF_MSG__ACTION__DETAIL__MOVEIT_YWF_INTF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'order'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveitYwfIntf in the package moveit_ywf_msg.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_Goal
{
  rosidl_runtime_c__String order;
} moveit_ywf_msg__action__MoveitYwfIntf_Goal;

// Struct for a sequence of moveit_ywf_msg__action__MoveitYwfIntf_Goal.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence
{
  moveit_ywf_msg__action__MoveitYwfIntf_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveitYwfIntf in the package moveit_ywf_msg.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_Result
{
  rosidl_runtime_c__String result;
} moveit_ywf_msg__action__MoveitYwfIntf_Result;

// Struct for a sequence of moveit_ywf_msg__action__MoveitYwfIntf_Result.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence
{
  moveit_ywf_msg__action__MoveitYwfIntf_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveitYwfIntf in the package moveit_ywf_msg.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_Feedback
{
  rosidl_runtime_c__String feedback;
} moveit_ywf_msg__action__MoveitYwfIntf_Feedback;

// Struct for a sequence of moveit_ywf_msg__action__MoveitYwfIntf_Feedback.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence
{
  moveit_ywf_msg__action__MoveitYwfIntf_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"

/// Struct defined in action/MoveitYwfIntf in the package moveit_ywf_msg.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_ywf_msg__action__MoveitYwfIntf_Goal goal;
} moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request;

// Struct for a sequence of moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence
{
  moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveitYwfIntf in the package moveit_ywf_msg.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response;

// Struct for a sequence of moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence
{
  moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveitYwfIntf in the package moveit_ywf_msg.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request;

// Struct for a sequence of moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence
{
  moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"

/// Struct defined in action/MoveitYwfIntf in the package moveit_ywf_msg.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response
{
  int8_t status;
  moveit_ywf_msg__action__MoveitYwfIntf_Result result;
} moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response;

// Struct for a sequence of moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence
{
  moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"

/// Struct defined in action/MoveitYwfIntf in the package moveit_ywf_msg.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_ywf_msg__action__MoveitYwfIntf_Feedback feedback;
} moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage;

// Struct for a sequence of moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage.
typedef struct moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence
{
  moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_YWF_MSG__ACTION__DETAIL__MOVEIT_YWF_INTF__STRUCT_H_
