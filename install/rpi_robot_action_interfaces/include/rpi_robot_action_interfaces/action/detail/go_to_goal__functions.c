// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rpi_robot_action_interfaces:action/GoToGoal.idl
// generated code does not contain a copyright notice
#include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__init(rpi_robot_action_interfaces__action__GoToGoal_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Goal__fini(rpi_robot_action_interfaces__action__GoToGoal_Goal * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Goal * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Goal * input,
  rpi_robot_action_interfaces__action__GoToGoal_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

rpi_robot_action_interfaces__action__GoToGoal_Goal *
rpi_robot_action_interfaces__action__GoToGoal_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_Goal * msg = (rpi_robot_action_interfaces__action__GoToGoal_Goal *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_robot_action_interfaces__action__GoToGoal_Goal));
  bool success = rpi_robot_action_interfaces__action__GoToGoal_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Goal__destroy(rpi_robot_action_interfaces__action__GoToGoal_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_robot_action_interfaces__action__GoToGoal_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_Goal * data = NULL;

  if (size) {
    data = (rpi_robot_action_interfaces__action__GoToGoal_Goal *)allocator.zero_allocate(size, sizeof(rpi_robot_action_interfaces__action__GoToGoal_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_robot_action_interfaces__action__GoToGoal_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_robot_action_interfaces__action__GoToGoal_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_robot_action_interfaces__action__GoToGoal_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * array = (rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_robot_action_interfaces__action__GoToGoal_Goal);
    rpi_robot_action_interfaces__action__GoToGoal_Goal * data =
      (rpi_robot_action_interfaces__action__GoToGoal_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_robot_action_interfaces__action__GoToGoal_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rpi_robot_action_interfaces__action__GoToGoal_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rpi_robot_action_interfaces__action__GoToGoal_Result__init(rpi_robot_action_interfaces__action__GoToGoal_Result * msg)
{
  if (!msg) {
    return false;
  }
  // goal_reached
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Result__fini(rpi_robot_action_interfaces__action__GoToGoal_Result * msg)
{
  if (!msg) {
    return;
  }
  // goal_reached
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Result__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Result * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_reached
  if (lhs->goal_reached != rhs->goal_reached) {
    return false;
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Result__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Result * input,
  rpi_robot_action_interfaces__action__GoToGoal_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_reached
  output->goal_reached = input->goal_reached;
  return true;
}

rpi_robot_action_interfaces__action__GoToGoal_Result *
rpi_robot_action_interfaces__action__GoToGoal_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_Result * msg = (rpi_robot_action_interfaces__action__GoToGoal_Result *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_robot_action_interfaces__action__GoToGoal_Result));
  bool success = rpi_robot_action_interfaces__action__GoToGoal_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Result__destroy(rpi_robot_action_interfaces__action__GoToGoal_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_robot_action_interfaces__action__GoToGoal_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_Result * data = NULL;

  if (size) {
    data = (rpi_robot_action_interfaces__action__GoToGoal_Result *)allocator.zero_allocate(size, sizeof(rpi_robot_action_interfaces__action__GoToGoal_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_robot_action_interfaces__action__GoToGoal_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_robot_action_interfaces__action__GoToGoal_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_robot_action_interfaces__action__GoToGoal_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * array = (rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_robot_action_interfaces__action__GoToGoal_Result);
    rpi_robot_action_interfaces__action__GoToGoal_Result * data =
      (rpi_robot_action_interfaces__action__GoToGoal_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_robot_action_interfaces__action__GoToGoal_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rpi_robot_action_interfaces__action__GoToGoal_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__init(rpi_robot_action_interfaces__action__GoToGoal_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_x
  // current_y
  // distance
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Feedback__fini(rpi_robot_action_interfaces__action__GoToGoal_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_x
  // current_y
  // distance
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Feedback * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_x
  if (lhs->current_x != rhs->current_x) {
    return false;
  }
  // current_y
  if (lhs->current_y != rhs->current_y) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Feedback * input,
  rpi_robot_action_interfaces__action__GoToGoal_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_x
  output->current_x = input->current_x;
  // current_y
  output->current_y = input->current_y;
  // distance
  output->distance = input->distance;
  return true;
}

rpi_robot_action_interfaces__action__GoToGoal_Feedback *
rpi_robot_action_interfaces__action__GoToGoal_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_Feedback * msg = (rpi_robot_action_interfaces__action__GoToGoal_Feedback *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_robot_action_interfaces__action__GoToGoal_Feedback));
  bool success = rpi_robot_action_interfaces__action__GoToGoal_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Feedback__destroy(rpi_robot_action_interfaces__action__GoToGoal_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_robot_action_interfaces__action__GoToGoal_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_Feedback * data = NULL;

  if (size) {
    data = (rpi_robot_action_interfaces__action__GoToGoal_Feedback *)allocator.zero_allocate(size, sizeof(rpi_robot_action_interfaces__action__GoToGoal_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_robot_action_interfaces__action__GoToGoal_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_robot_action_interfaces__action__GoToGoal_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_robot_action_interfaces__action__GoToGoal_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * array = (rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_robot_action_interfaces__action__GoToGoal_Feedback);
    rpi_robot_action_interfaces__action__GoToGoal_Feedback * data =
      (rpi_robot_action_interfaces__action__GoToGoal_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_robot_action_interfaces__action__GoToGoal_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rpi_robot_action_interfaces__action__GoToGoal_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"

bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__init(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!rpi_robot_action_interfaces__action__GoToGoal_Goal__init(&msg->goal)) {
    rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  rpi_robot_action_interfaces__action__GoToGoal_Goal__fini(&msg->goal);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * lhs, const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!rpi_robot_action_interfaces__action__GoToGoal_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * input,
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!rpi_robot_action_interfaces__action__GoToGoal_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request *
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * msg = (rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request));
  bool success = rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__destroy(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * data = NULL;

  if (size) {
    data = (rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request *)allocator.zero_allocate(size, sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * array = (rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request);
    rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request * data =
      (rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__init(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__fini(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * lhs, const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * input,
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response *
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * msg = (rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response));
  bool success = rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__destroy(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * data = NULL;

  if (size) {
    data = (rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response *)allocator.zero_allocate(size, sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * array = (rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response);
    rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response * data =
      (rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__init(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__fini(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * lhs, const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * input,
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request *
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * msg = (rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request));
  bool success = rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__destroy(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * data = NULL;

  if (size) {
    data = (rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request *)allocator.zero_allocate(size, sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * array = (rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request);
    rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request * data =
      (rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"

bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__init(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!rpi_robot_action_interfaces__action__GoToGoal_Result__init(&msg->result)) {
    rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__fini(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  rpi_robot_action_interfaces__action__GoToGoal_Result__fini(&msg->result);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * lhs, const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!rpi_robot_action_interfaces__action__GoToGoal_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * input,
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!rpi_robot_action_interfaces__action__GoToGoal_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response *
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * msg = (rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response));
  bool success = rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__destroy(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * data = NULL;

  if (size) {
    data = (rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response *)allocator.zero_allocate(size, sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * array = (rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response);
    rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response * data =
      (rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "rpi_robot_action_interfaces/action/detail/go_to_goal__functions.h"

bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__init(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!rpi_robot_action_interfaces__action__GoToGoal_Feedback__init(&msg->feedback)) {
    rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  rpi_robot_action_interfaces__action__GoToGoal_Feedback__fini(&msg->feedback);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * lhs, const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!rpi_robot_action_interfaces__action__GoToGoal_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * input,
  rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!rpi_robot_action_interfaces__action__GoToGoal_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage *
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * msg = (rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage));
  bool success = rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__destroy(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__init(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * data = NULL;

  if (size) {
    data = (rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage *)allocator.zero_allocate(size, sizeof(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__fini(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence *
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * array = (rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence *)allocator.allocate(sizeof(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__destroy(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__are_equal(const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * lhs, const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence__copy(
  const rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * input,
  rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage);
    rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage * data =
      (rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_robot_action_interfaces__action__GoToGoal_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
