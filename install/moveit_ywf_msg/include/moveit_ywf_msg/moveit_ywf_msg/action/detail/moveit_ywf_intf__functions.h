// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from moveit_ywf_msg:action/MoveitYwfIntf.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_YWF_MSG__ACTION__DETAIL__MOVEIT_YWF_INTF__FUNCTIONS_H_
#define MOVEIT_YWF_MSG__ACTION__DETAIL__MOVEIT_YWF_INTF__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "moveit_ywf_msg/msg/rosidl_generator_c__visibility_control.h"

#include "moveit_ywf_msg/action/detail/moveit_ywf_intf__struct.h"

/// Initialize action/MoveitYwfIntf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_ywf_msg__action__MoveitYwfIntf_Goal
 * )) before or use
 * moveit_ywf_msg__action__MoveitYwfIntf_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Goal__init(moveit_ywf_msg__action__MoveitYwfIntf_Goal * msg);

/// Finalize action/MoveitYwfIntf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Goal__fini(moveit_ywf_msg__action__MoveitYwfIntf_Goal * msg);

/// Create action/MoveitYwfIntf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_Goal *
moveit_ywf_msg__action__MoveitYwfIntf_Goal__create();

/// Destroy action/MoveitYwfIntf message.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Goal__destroy(moveit_ywf_msg__action__MoveitYwfIntf_Goal * msg);

/// Check for action/MoveitYwfIntf message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Goal__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_Goal * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_Goal * rhs);

/// Copy a action/MoveitYwfIntf message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Goal__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_Goal * input,
  moveit_ywf_msg__action__MoveitYwfIntf_Goal * output);

/// Initialize array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence__init(moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence__fini(moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence * array);

/// Create array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the array and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence *
moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence__destroy(moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence * array);

/// Check for action/MoveitYwfIntf message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence * rhs);

/// Copy an array of action/MoveitYwfIntf messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence * input,
  moveit_ywf_msg__action__MoveitYwfIntf_Goal__Sequence * output);

/// Initialize action/MoveitYwfIntf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_ywf_msg__action__MoveitYwfIntf_Result
 * )) before or use
 * moveit_ywf_msg__action__MoveitYwfIntf_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Result__init(moveit_ywf_msg__action__MoveitYwfIntf_Result * msg);

/// Finalize action/MoveitYwfIntf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Result__fini(moveit_ywf_msg__action__MoveitYwfIntf_Result * msg);

/// Create action/MoveitYwfIntf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_Result *
moveit_ywf_msg__action__MoveitYwfIntf_Result__create();

/// Destroy action/MoveitYwfIntf message.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Result__destroy(moveit_ywf_msg__action__MoveitYwfIntf_Result * msg);

/// Check for action/MoveitYwfIntf message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Result__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_Result * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_Result * rhs);

/// Copy a action/MoveitYwfIntf message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Result__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_Result * input,
  moveit_ywf_msg__action__MoveitYwfIntf_Result * output);

/// Initialize array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence__init(moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence__fini(moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence * array);

/// Create array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the array and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence *
moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence__destroy(moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence * array);

/// Check for action/MoveitYwfIntf message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence * rhs);

/// Copy an array of action/MoveitYwfIntf messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence * input,
  moveit_ywf_msg__action__MoveitYwfIntf_Result__Sequence * output);

/// Initialize action/MoveitYwfIntf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_ywf_msg__action__MoveitYwfIntf_Feedback
 * )) before or use
 * moveit_ywf_msg__action__MoveitYwfIntf_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__init(moveit_ywf_msg__action__MoveitYwfIntf_Feedback * msg);

/// Finalize action/MoveitYwfIntf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__fini(moveit_ywf_msg__action__MoveitYwfIntf_Feedback * msg);

/// Create action/MoveitYwfIntf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_Feedback *
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__create();

/// Destroy action/MoveitYwfIntf message.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__destroy(moveit_ywf_msg__action__MoveitYwfIntf_Feedback * msg);

/// Check for action/MoveitYwfIntf message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_Feedback * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_Feedback * rhs);

/// Copy a action/MoveitYwfIntf message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_Feedback * input,
  moveit_ywf_msg__action__MoveitYwfIntf_Feedback * output);

/// Initialize array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence__init(moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence__fini(moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence * array);

/// Create array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the array and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence *
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence__destroy(moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence * array);

/// Check for action/MoveitYwfIntf message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence * rhs);

/// Copy an array of action/MoveitYwfIntf messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence * input,
  moveit_ywf_msg__action__MoveitYwfIntf_Feedback__Sequence * output);

/// Initialize action/MoveitYwfIntf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request
 * )) before or use
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__init(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request * msg);

/// Finalize action/MoveitYwfIntf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__fini(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request * msg);

/// Create action/MoveitYwfIntf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request *
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__create();

/// Destroy action/MoveitYwfIntf message.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__destroy(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request * msg);

/// Check for action/MoveitYwfIntf message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request * rhs);

/// Copy a action/MoveitYwfIntf message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request * input,
  moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request * output);

/// Initialize array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence__init(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence__fini(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence * array);

/// Create array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the array and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence *
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence__destroy(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence * array);

/// Check for action/MoveitYwfIntf message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveitYwfIntf messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence * input,
  moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Request__Sequence * output);

/// Initialize action/MoveitYwfIntf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response
 * )) before or use
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__init(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response * msg);

/// Finalize action/MoveitYwfIntf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__fini(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response * msg);

/// Create action/MoveitYwfIntf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response *
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__create();

/// Destroy action/MoveitYwfIntf message.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__destroy(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response * msg);

/// Check for action/MoveitYwfIntf message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response * rhs);

/// Copy a action/MoveitYwfIntf message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response * input,
  moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response * output);

/// Initialize array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence__init(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence__fini(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence * array);

/// Create array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the array and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence *
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence__destroy(moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence * array);

/// Check for action/MoveitYwfIntf message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveitYwfIntf messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence * input,
  moveit_ywf_msg__action__MoveitYwfIntf_SendGoal_Response__Sequence * output);

/// Initialize action/MoveitYwfIntf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request
 * )) before or use
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__init(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request * msg);

/// Finalize action/MoveitYwfIntf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__fini(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request * msg);

/// Create action/MoveitYwfIntf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request *
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__create();

/// Destroy action/MoveitYwfIntf message.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__destroy(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request * msg);

/// Check for action/MoveitYwfIntf message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request * rhs);

/// Copy a action/MoveitYwfIntf message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request * input,
  moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request * output);

/// Initialize array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence__init(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence__fini(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence * array);

/// Create array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the array and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence *
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence__destroy(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence * array);

/// Check for action/MoveitYwfIntf message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveitYwfIntf messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence * input,
  moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Request__Sequence * output);

/// Initialize action/MoveitYwfIntf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response
 * )) before or use
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__init(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response * msg);

/// Finalize action/MoveitYwfIntf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__fini(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response * msg);

/// Create action/MoveitYwfIntf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response *
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__create();

/// Destroy action/MoveitYwfIntf message.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__destroy(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response * msg);

/// Check for action/MoveitYwfIntf message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response * rhs);

/// Copy a action/MoveitYwfIntf message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response * input,
  moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response * output);

/// Initialize array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence__init(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence__fini(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence * array);

/// Create array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the array and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence *
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence__destroy(moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence * array);

/// Check for action/MoveitYwfIntf message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveitYwfIntf messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence * input,
  moveit_ywf_msg__action__MoveitYwfIntf_GetResult_Response__Sequence * output);

/// Initialize action/MoveitYwfIntf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage
 * )) before or use
 * moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__init(moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage * msg);

/// Finalize action/MoveitYwfIntf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__fini(moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage * msg);

/// Create action/MoveitYwfIntf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage *
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__create();

/// Destroy action/MoveitYwfIntf message.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__destroy(moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage * msg);

/// Check for action/MoveitYwfIntf message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage * rhs);

/// Copy a action/MoveitYwfIntf message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage * input,
  moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage * output);

/// Initialize array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence__init(moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence__fini(moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence * array);

/// Create array of action/MoveitYwfIntf messages.
/**
 * It allocates the memory for the array and calls
 * moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence *
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveitYwfIntf messages.
/**
 * It calls
 * moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
void
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence__destroy(moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence * array);

/// Check for action/MoveitYwfIntf message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence__are_equal(const moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence * lhs, const moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveitYwfIntf messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_ywf_msg
bool
moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence__copy(
  const moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence * input,
  moveit_ywf_msg__action__MoveitYwfIntf_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_YWF_MSG__ACTION__DETAIL__MOVEIT_YWF_INTF__FUNCTIONS_H_
