// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rpi_robot_action_interfaces:action/GoToGoal.idl
// generated code does not contain a copyright notice

#ifndef RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__FUNCTIONS_H_
#define RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rpi_robot_action_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rpi_robot_action_interfaces/action/detail/go_to_goal__struct.h"

/// Initialize action/GoToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rpi_robot_action_interfaces__action__GoToGoal_Goal
 * )) before or use
 * rpi_robot_action_interfaces__action__GoToGoal_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__init(rpi_robot_action_interfaces__action__GoToGoal_Goal * msg);

/// Finalize action/GoToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Goal__fini(rpi_robot_action_interfaces__action__GoToGoal_Goal * msg);

/// Create action/GoToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rpi_robot_action_interfaces__action__GoToGoal_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_Goal *
rpi_robot_action_interfaces__action__GoToGoal_Goal__create();

/// Destroy action/GoToGoal message.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Goal__destroy(rpi_robot_action_interfaces__action__GoToGoal_Goal * msg);

/// Check for action/GoToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Goal * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Goal * rhs);

/// Copy a action/GoToGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Goal * input,
  rpi_robot_action_interfaces__action__GoToGoal_Goal * output);

/// Initialize array of action/GoToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * rpi_robot_action_interfaces__action__GoToGoal_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * array, size_t size);

/// Finalize array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * array);

/// Create array of action/GoToGoal messages.
/**
 * It allocates the memory for the array and calls
 * rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__create(size_t size);

/// Destroy array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * array);

/// Check for action/GoToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * rhs);

/// Copy an array of action/GoToGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * output);

/// Initialize action/GoToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rpi_robot_action_interfaces__action__GoToGoal_Result
 * )) before or use
 * rpi_robot_action_interfaces__action__GoToGoal_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Result__init(rpi_robot_action_interfaces__action__GoToGoal_Result * msg);

/// Finalize action/GoToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Result__fini(rpi_robot_action_interfaces__action__GoToGoal_Result * msg);

/// Create action/GoToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rpi_robot_action_interfaces__action__GoToGoal_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_Result *
rpi_robot_action_interfaces__action__GoToGoal_Result__create();

/// Destroy action/GoToGoal message.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Result__destroy(rpi_robot_action_interfaces__action__GoToGoal_Result * msg);

/// Check for action/GoToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Result__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Result * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Result * rhs);

/// Copy a action/GoToGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Result__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Result * input,
  rpi_robot_action_interfaces__action__GoToGoal_Result * output);

/// Initialize array of action/GoToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * rpi_robot_action_interfaces__action__GoToGoal_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * array, size_t size);

/// Finalize array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * array);

/// Create array of action/GoToGoal messages.
/**
 * It allocates the memory for the array and calls
 * rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__create(size_t size);

/// Destroy array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * array);

/// Check for action/GoToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * rhs);

/// Copy an array of action/GoToGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * output);

/// Initialize action/GoToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rpi_robot_action_interfaces__action__GoToGoal_Feedback
 * )) before or use
 * rpi_robot_action_interfaces__action__GoToGoal_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__init(rpi_robot_action_interfaces__action__GoToGoal_Feedback * msg);

/// Finalize action/GoToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Feedback__fini(rpi_robot_action_interfaces__action__GoToGoal_Feedback * msg);

/// Create action/GoToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rpi_robot_action_interfaces__action__GoToGoal_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_Feedback *
rpi_robot_action_interfaces__action__GoToGoal_Feedback__create();

/// Destroy action/GoToGoal message.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Feedback__destroy(rpi_robot_action_interfaces__action__GoToGoal_Feedback * msg);

/// Check for action/GoToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Feedback * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Feedback * rhs);

/// Copy a action/GoToGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Feedback * input,
  rpi_robot_action_interfaces__action__GoToGoal_Feedback * output);

/// Initialize array of action/GoToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * rpi_robot_action_interfaces__action__GoToGoal_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * array);

/// Create array of action/GoToGoal messages.
/**
 * It allocates the memory for the array and calls
 * rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * array);

/// Check for action/GoToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * rhs);

/// Copy an array of action/GoToGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * output);

/// Initialize action/GoToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request
 * )) before or use
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__init(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * msg);

/// Finalize action/GoToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * msg);

/// Create action/GoToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request *
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__create();

/// Destroy action/GoToGoal message.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__destroy(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * msg);

/// Check for action/GoToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * lhs, const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * rhs);

/// Copy a action/GoToGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * input,
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * output);

/// Initialize array of action/GoToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * array);

/// Create array of action/GoToGoal messages.
/**
 * It allocates the memory for the array and calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * array);

/// Check for action/GoToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/GoToGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * output);

/// Initialize action/GoToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response
 * )) before or use
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__init(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * msg);

/// Finalize action/GoToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__fini(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * msg);

/// Create action/GoToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response *
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__create();

/// Destroy action/GoToGoal message.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__destroy(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * msg);

/// Check for action/GoToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * lhs, const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * rhs);

/// Copy a action/GoToGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * input,
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * output);

/// Initialize array of action/GoToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * array);

/// Create array of action/GoToGoal messages.
/**
 * It allocates the memory for the array and calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * array);

/// Check for action/GoToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/GoToGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * output);

/// Initialize action/GoToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request
 * )) before or use
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__init(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * msg);

/// Finalize action/GoToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__fini(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * msg);

/// Create action/GoToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request *
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__create();

/// Destroy action/GoToGoal message.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__destroy(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * msg);

/// Check for action/GoToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * lhs, const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * rhs);

/// Copy a action/GoToGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * input,
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * output);

/// Initialize array of action/GoToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * array);

/// Create array of action/GoToGoal messages.
/**
 * It allocates the memory for the array and calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * array);

/// Check for action/GoToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * rhs);

/// Copy an array of action/GoToGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * output);

/// Initialize action/GoToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response
 * )) before or use
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__init(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * msg);

/// Finalize action/GoToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__fini(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * msg);

/// Create action/GoToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response *
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__create();

/// Destroy action/GoToGoal message.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__destroy(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * msg);

/// Check for action/GoToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * lhs, const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * rhs);

/// Copy a action/GoToGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * input,
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * output);

/// Initialize array of action/GoToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * array);

/// Create array of action/GoToGoal messages.
/**
 * It allocates the memory for the array and calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * array);

/// Check for action/GoToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * rhs);

/// Copy an array of action/GoToGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * output);

/// Initialize action/GoToGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage
 * )) before or use
 * rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__init(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * msg);

/// Finalize action/GoToGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * msg);

/// Create action/GoToGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage *
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__create();

/// Destroy action/GoToGoal message.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__destroy(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * msg);

/// Check for action/GoToGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * lhs, const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * rhs);

/// Copy a action/GoToGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * input,
  rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * output);

/// Initialize array of action/GoToGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * array);

/// Create array of action/GoToGoal messages.
/**
 * It allocates the memory for the array and calls
 * rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GoToGoal messages.
/**
 * It calls
 * rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
void
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * array);

/// Check for action/GoToGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/GoToGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rpi_robot_action_interfaces
bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RPI_ROBOT_ACTION_INTERFACES__ACTION__DETAIL__GO_TO_GOAL__FUNCTIONS_H_
