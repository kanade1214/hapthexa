// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hapthexa_msgs:action/Empty.idl
// generated code does not contain a copyright notice
#include "hapthexa_msgs/action/detail/empty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hapthexa_msgs__action__Empty_Goal__init(hapthexa_msgs__action__Empty_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
hapthexa_msgs__action__Empty_Goal__fini(hapthexa_msgs__action__Empty_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
hapthexa_msgs__action__Empty_Goal__are_equal(const hapthexa_msgs__action__Empty_Goal * lhs, const hapthexa_msgs__action__Empty_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_Goal__copy(
  const hapthexa_msgs__action__Empty_Goal * input,
  hapthexa_msgs__action__Empty_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

hapthexa_msgs__action__Empty_Goal *
hapthexa_msgs__action__Empty_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_Goal * msg = (hapthexa_msgs__action__Empty_Goal *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__action__Empty_Goal));
  bool success = hapthexa_msgs__action__Empty_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__action__Empty_Goal__destroy(hapthexa_msgs__action__Empty_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__action__Empty_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__action__Empty_Goal__Sequence__init(hapthexa_msgs__action__Empty_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_Goal * data = NULL;

  if (size) {
    data = (hapthexa_msgs__action__Empty_Goal *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__action__Empty_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__action__Empty_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__action__Empty_Goal__fini(&data[i - 1]);
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
hapthexa_msgs__action__Empty_Goal__Sequence__fini(hapthexa_msgs__action__Empty_Goal__Sequence * array)
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
      hapthexa_msgs__action__Empty_Goal__fini(&array->data[i]);
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

hapthexa_msgs__action__Empty_Goal__Sequence *
hapthexa_msgs__action__Empty_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_Goal__Sequence * array = (hapthexa_msgs__action__Empty_Goal__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__action__Empty_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__action__Empty_Goal__Sequence__destroy(hapthexa_msgs__action__Empty_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__action__Empty_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__action__Empty_Goal__Sequence__are_equal(const hapthexa_msgs__action__Empty_Goal__Sequence * lhs, const hapthexa_msgs__action__Empty_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__action__Empty_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_Goal__Sequence__copy(
  const hapthexa_msgs__action__Empty_Goal__Sequence * input,
  hapthexa_msgs__action__Empty_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__action__Empty_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__action__Empty_Goal * data =
      (hapthexa_msgs__action__Empty_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__action__Empty_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__action__Empty_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__action__Empty_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
hapthexa_msgs__action__Empty_Result__init(hapthexa_msgs__action__Empty_Result * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
hapthexa_msgs__action__Empty_Result__fini(hapthexa_msgs__action__Empty_Result * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
hapthexa_msgs__action__Empty_Result__are_equal(const hapthexa_msgs__action__Empty_Result * lhs, const hapthexa_msgs__action__Empty_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_Result__copy(
  const hapthexa_msgs__action__Empty_Result * input,
  hapthexa_msgs__action__Empty_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

hapthexa_msgs__action__Empty_Result *
hapthexa_msgs__action__Empty_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_Result * msg = (hapthexa_msgs__action__Empty_Result *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__action__Empty_Result));
  bool success = hapthexa_msgs__action__Empty_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__action__Empty_Result__destroy(hapthexa_msgs__action__Empty_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__action__Empty_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__action__Empty_Result__Sequence__init(hapthexa_msgs__action__Empty_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_Result * data = NULL;

  if (size) {
    data = (hapthexa_msgs__action__Empty_Result *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__action__Empty_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__action__Empty_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__action__Empty_Result__fini(&data[i - 1]);
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
hapthexa_msgs__action__Empty_Result__Sequence__fini(hapthexa_msgs__action__Empty_Result__Sequence * array)
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
      hapthexa_msgs__action__Empty_Result__fini(&array->data[i]);
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

hapthexa_msgs__action__Empty_Result__Sequence *
hapthexa_msgs__action__Empty_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_Result__Sequence * array = (hapthexa_msgs__action__Empty_Result__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__action__Empty_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__action__Empty_Result__Sequence__destroy(hapthexa_msgs__action__Empty_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__action__Empty_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__action__Empty_Result__Sequence__are_equal(const hapthexa_msgs__action__Empty_Result__Sequence * lhs, const hapthexa_msgs__action__Empty_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__action__Empty_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_Result__Sequence__copy(
  const hapthexa_msgs__action__Empty_Result__Sequence * input,
  hapthexa_msgs__action__Empty_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__action__Empty_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__action__Empty_Result * data =
      (hapthexa_msgs__action__Empty_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__action__Empty_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__action__Empty_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__action__Empty_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
hapthexa_msgs__action__Empty_Feedback__init(hapthexa_msgs__action__Empty_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
hapthexa_msgs__action__Empty_Feedback__fini(hapthexa_msgs__action__Empty_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
hapthexa_msgs__action__Empty_Feedback__are_equal(const hapthexa_msgs__action__Empty_Feedback * lhs, const hapthexa_msgs__action__Empty_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_Feedback__copy(
  const hapthexa_msgs__action__Empty_Feedback * input,
  hapthexa_msgs__action__Empty_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

hapthexa_msgs__action__Empty_Feedback *
hapthexa_msgs__action__Empty_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_Feedback * msg = (hapthexa_msgs__action__Empty_Feedback *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__action__Empty_Feedback));
  bool success = hapthexa_msgs__action__Empty_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__action__Empty_Feedback__destroy(hapthexa_msgs__action__Empty_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__action__Empty_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__action__Empty_Feedback__Sequence__init(hapthexa_msgs__action__Empty_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_Feedback * data = NULL;

  if (size) {
    data = (hapthexa_msgs__action__Empty_Feedback *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__action__Empty_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__action__Empty_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__action__Empty_Feedback__fini(&data[i - 1]);
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
hapthexa_msgs__action__Empty_Feedback__Sequence__fini(hapthexa_msgs__action__Empty_Feedback__Sequence * array)
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
      hapthexa_msgs__action__Empty_Feedback__fini(&array->data[i]);
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

hapthexa_msgs__action__Empty_Feedback__Sequence *
hapthexa_msgs__action__Empty_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_Feedback__Sequence * array = (hapthexa_msgs__action__Empty_Feedback__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__action__Empty_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__action__Empty_Feedback__Sequence__destroy(hapthexa_msgs__action__Empty_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__action__Empty_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__action__Empty_Feedback__Sequence__are_equal(const hapthexa_msgs__action__Empty_Feedback__Sequence * lhs, const hapthexa_msgs__action__Empty_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__action__Empty_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_Feedback__Sequence__copy(
  const hapthexa_msgs__action__Empty_Feedback__Sequence * input,
  hapthexa_msgs__action__Empty_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__action__Empty_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__action__Empty_Feedback * data =
      (hapthexa_msgs__action__Empty_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__action__Empty_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__action__Empty_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__action__Empty_Feedback__copy(
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
// #include "hapthexa_msgs/action/detail/empty__functions.h"

bool
hapthexa_msgs__action__Empty_SendGoal_Request__init(hapthexa_msgs__action__Empty_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hapthexa_msgs__action__Empty_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!hapthexa_msgs__action__Empty_Goal__init(&msg->goal)) {
    hapthexa_msgs__action__Empty_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
hapthexa_msgs__action__Empty_SendGoal_Request__fini(hapthexa_msgs__action__Empty_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  hapthexa_msgs__action__Empty_Goal__fini(&msg->goal);
}

bool
hapthexa_msgs__action__Empty_SendGoal_Request__are_equal(const hapthexa_msgs__action__Empty_SendGoal_Request * lhs, const hapthexa_msgs__action__Empty_SendGoal_Request * rhs)
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
  if (!hapthexa_msgs__action__Empty_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_SendGoal_Request__copy(
  const hapthexa_msgs__action__Empty_SendGoal_Request * input,
  hapthexa_msgs__action__Empty_SendGoal_Request * output)
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
  if (!hapthexa_msgs__action__Empty_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

hapthexa_msgs__action__Empty_SendGoal_Request *
hapthexa_msgs__action__Empty_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_SendGoal_Request * msg = (hapthexa_msgs__action__Empty_SendGoal_Request *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__action__Empty_SendGoal_Request));
  bool success = hapthexa_msgs__action__Empty_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__action__Empty_SendGoal_Request__destroy(hapthexa_msgs__action__Empty_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__action__Empty_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__init(hapthexa_msgs__action__Empty_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_SendGoal_Request * data = NULL;

  if (size) {
    data = (hapthexa_msgs__action__Empty_SendGoal_Request *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__action__Empty_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__action__Empty_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__action__Empty_SendGoal_Request__fini(&data[i - 1]);
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
hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__fini(hapthexa_msgs__action__Empty_SendGoal_Request__Sequence * array)
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
      hapthexa_msgs__action__Empty_SendGoal_Request__fini(&array->data[i]);
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

hapthexa_msgs__action__Empty_SendGoal_Request__Sequence *
hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_SendGoal_Request__Sequence * array = (hapthexa_msgs__action__Empty_SendGoal_Request__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__destroy(hapthexa_msgs__action__Empty_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__are_equal(const hapthexa_msgs__action__Empty_SendGoal_Request__Sequence * lhs, const hapthexa_msgs__action__Empty_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__action__Empty_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__copy(
  const hapthexa_msgs__action__Empty_SendGoal_Request__Sequence * input,
  hapthexa_msgs__action__Empty_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__action__Empty_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__action__Empty_SendGoal_Request * data =
      (hapthexa_msgs__action__Empty_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__action__Empty_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__action__Empty_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__action__Empty_SendGoal_Request__copy(
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
hapthexa_msgs__action__Empty_SendGoal_Response__init(hapthexa_msgs__action__Empty_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hapthexa_msgs__action__Empty_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
hapthexa_msgs__action__Empty_SendGoal_Response__fini(hapthexa_msgs__action__Empty_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
hapthexa_msgs__action__Empty_SendGoal_Response__are_equal(const hapthexa_msgs__action__Empty_SendGoal_Response * lhs, const hapthexa_msgs__action__Empty_SendGoal_Response * rhs)
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
hapthexa_msgs__action__Empty_SendGoal_Response__copy(
  const hapthexa_msgs__action__Empty_SendGoal_Response * input,
  hapthexa_msgs__action__Empty_SendGoal_Response * output)
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

hapthexa_msgs__action__Empty_SendGoal_Response *
hapthexa_msgs__action__Empty_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_SendGoal_Response * msg = (hapthexa_msgs__action__Empty_SendGoal_Response *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__action__Empty_SendGoal_Response));
  bool success = hapthexa_msgs__action__Empty_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__action__Empty_SendGoal_Response__destroy(hapthexa_msgs__action__Empty_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__action__Empty_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__init(hapthexa_msgs__action__Empty_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_SendGoal_Response * data = NULL;

  if (size) {
    data = (hapthexa_msgs__action__Empty_SendGoal_Response *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__action__Empty_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__action__Empty_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__action__Empty_SendGoal_Response__fini(&data[i - 1]);
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
hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__fini(hapthexa_msgs__action__Empty_SendGoal_Response__Sequence * array)
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
      hapthexa_msgs__action__Empty_SendGoal_Response__fini(&array->data[i]);
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

hapthexa_msgs__action__Empty_SendGoal_Response__Sequence *
hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_SendGoal_Response__Sequence * array = (hapthexa_msgs__action__Empty_SendGoal_Response__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__destroy(hapthexa_msgs__action__Empty_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__are_equal(const hapthexa_msgs__action__Empty_SendGoal_Response__Sequence * lhs, const hapthexa_msgs__action__Empty_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__action__Empty_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__copy(
  const hapthexa_msgs__action__Empty_SendGoal_Response__Sequence * input,
  hapthexa_msgs__action__Empty_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__action__Empty_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__action__Empty_SendGoal_Response * data =
      (hapthexa_msgs__action__Empty_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__action__Empty_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__action__Empty_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__action__Empty_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "hapthexa_msgs/action/detail/empty__functions.h"

bool
hapthexa_msgs__action__Empty_SendGoal_Event__init(hapthexa_msgs__action__Empty_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    hapthexa_msgs__action__Empty_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    hapthexa_msgs__action__Empty_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    hapthexa_msgs__action__Empty_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
hapthexa_msgs__action__Empty_SendGoal_Event__fini(hapthexa_msgs__action__Empty_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
hapthexa_msgs__action__Empty_SendGoal_Event__are_equal(const hapthexa_msgs__action__Empty_SendGoal_Event * lhs, const hapthexa_msgs__action__Empty_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_SendGoal_Event__copy(
  const hapthexa_msgs__action__Empty_SendGoal_Event * input,
  hapthexa_msgs__action__Empty_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!hapthexa_msgs__action__Empty_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!hapthexa_msgs__action__Empty_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

hapthexa_msgs__action__Empty_SendGoal_Event *
hapthexa_msgs__action__Empty_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_SendGoal_Event * msg = (hapthexa_msgs__action__Empty_SendGoal_Event *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__action__Empty_SendGoal_Event));
  bool success = hapthexa_msgs__action__Empty_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__action__Empty_SendGoal_Event__destroy(hapthexa_msgs__action__Empty_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__action__Empty_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__action__Empty_SendGoal_Event__Sequence__init(hapthexa_msgs__action__Empty_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_SendGoal_Event * data = NULL;

  if (size) {
    data = (hapthexa_msgs__action__Empty_SendGoal_Event *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__action__Empty_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__action__Empty_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__action__Empty_SendGoal_Event__fini(&data[i - 1]);
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
hapthexa_msgs__action__Empty_SendGoal_Event__Sequence__fini(hapthexa_msgs__action__Empty_SendGoal_Event__Sequence * array)
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
      hapthexa_msgs__action__Empty_SendGoal_Event__fini(&array->data[i]);
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

hapthexa_msgs__action__Empty_SendGoal_Event__Sequence *
hapthexa_msgs__action__Empty_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_SendGoal_Event__Sequence * array = (hapthexa_msgs__action__Empty_SendGoal_Event__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__action__Empty_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__action__Empty_SendGoal_Event__Sequence__destroy(hapthexa_msgs__action__Empty_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__action__Empty_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__action__Empty_SendGoal_Event__Sequence__are_equal(const hapthexa_msgs__action__Empty_SendGoal_Event__Sequence * lhs, const hapthexa_msgs__action__Empty_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__action__Empty_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_SendGoal_Event__Sequence__copy(
  const hapthexa_msgs__action__Empty_SendGoal_Event__Sequence * input,
  hapthexa_msgs__action__Empty_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__action__Empty_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__action__Empty_SendGoal_Event * data =
      (hapthexa_msgs__action__Empty_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__action__Empty_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__action__Empty_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__action__Empty_SendGoal_Event__copy(
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
hapthexa_msgs__action__Empty_GetResult_Request__init(hapthexa_msgs__action__Empty_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hapthexa_msgs__action__Empty_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
hapthexa_msgs__action__Empty_GetResult_Request__fini(hapthexa_msgs__action__Empty_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
hapthexa_msgs__action__Empty_GetResult_Request__are_equal(const hapthexa_msgs__action__Empty_GetResult_Request * lhs, const hapthexa_msgs__action__Empty_GetResult_Request * rhs)
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
hapthexa_msgs__action__Empty_GetResult_Request__copy(
  const hapthexa_msgs__action__Empty_GetResult_Request * input,
  hapthexa_msgs__action__Empty_GetResult_Request * output)
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

hapthexa_msgs__action__Empty_GetResult_Request *
hapthexa_msgs__action__Empty_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_GetResult_Request * msg = (hapthexa_msgs__action__Empty_GetResult_Request *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__action__Empty_GetResult_Request));
  bool success = hapthexa_msgs__action__Empty_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__action__Empty_GetResult_Request__destroy(hapthexa_msgs__action__Empty_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__action__Empty_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__action__Empty_GetResult_Request__Sequence__init(hapthexa_msgs__action__Empty_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_GetResult_Request * data = NULL;

  if (size) {
    data = (hapthexa_msgs__action__Empty_GetResult_Request *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__action__Empty_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__action__Empty_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__action__Empty_GetResult_Request__fini(&data[i - 1]);
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
hapthexa_msgs__action__Empty_GetResult_Request__Sequence__fini(hapthexa_msgs__action__Empty_GetResult_Request__Sequence * array)
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
      hapthexa_msgs__action__Empty_GetResult_Request__fini(&array->data[i]);
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

hapthexa_msgs__action__Empty_GetResult_Request__Sequence *
hapthexa_msgs__action__Empty_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_GetResult_Request__Sequence * array = (hapthexa_msgs__action__Empty_GetResult_Request__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__action__Empty_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__action__Empty_GetResult_Request__Sequence__destroy(hapthexa_msgs__action__Empty_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__action__Empty_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__action__Empty_GetResult_Request__Sequence__are_equal(const hapthexa_msgs__action__Empty_GetResult_Request__Sequence * lhs, const hapthexa_msgs__action__Empty_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__action__Empty_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_GetResult_Request__Sequence__copy(
  const hapthexa_msgs__action__Empty_GetResult_Request__Sequence * input,
  hapthexa_msgs__action__Empty_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__action__Empty_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__action__Empty_GetResult_Request * data =
      (hapthexa_msgs__action__Empty_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__action__Empty_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__action__Empty_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__action__Empty_GetResult_Request__copy(
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
// #include "hapthexa_msgs/action/detail/empty__functions.h"

bool
hapthexa_msgs__action__Empty_GetResult_Response__init(hapthexa_msgs__action__Empty_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!hapthexa_msgs__action__Empty_Result__init(&msg->result)) {
    hapthexa_msgs__action__Empty_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
hapthexa_msgs__action__Empty_GetResult_Response__fini(hapthexa_msgs__action__Empty_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  hapthexa_msgs__action__Empty_Result__fini(&msg->result);
}

bool
hapthexa_msgs__action__Empty_GetResult_Response__are_equal(const hapthexa_msgs__action__Empty_GetResult_Response * lhs, const hapthexa_msgs__action__Empty_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!hapthexa_msgs__action__Empty_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_GetResult_Response__copy(
  const hapthexa_msgs__action__Empty_GetResult_Response * input,
  hapthexa_msgs__action__Empty_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!hapthexa_msgs__action__Empty_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

hapthexa_msgs__action__Empty_GetResult_Response *
hapthexa_msgs__action__Empty_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_GetResult_Response * msg = (hapthexa_msgs__action__Empty_GetResult_Response *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__action__Empty_GetResult_Response));
  bool success = hapthexa_msgs__action__Empty_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__action__Empty_GetResult_Response__destroy(hapthexa_msgs__action__Empty_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__action__Empty_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__action__Empty_GetResult_Response__Sequence__init(hapthexa_msgs__action__Empty_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_GetResult_Response * data = NULL;

  if (size) {
    data = (hapthexa_msgs__action__Empty_GetResult_Response *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__action__Empty_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__action__Empty_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__action__Empty_GetResult_Response__fini(&data[i - 1]);
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
hapthexa_msgs__action__Empty_GetResult_Response__Sequence__fini(hapthexa_msgs__action__Empty_GetResult_Response__Sequence * array)
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
      hapthexa_msgs__action__Empty_GetResult_Response__fini(&array->data[i]);
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

hapthexa_msgs__action__Empty_GetResult_Response__Sequence *
hapthexa_msgs__action__Empty_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_GetResult_Response__Sequence * array = (hapthexa_msgs__action__Empty_GetResult_Response__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__action__Empty_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__action__Empty_GetResult_Response__Sequence__destroy(hapthexa_msgs__action__Empty_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__action__Empty_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__action__Empty_GetResult_Response__Sequence__are_equal(const hapthexa_msgs__action__Empty_GetResult_Response__Sequence * lhs, const hapthexa_msgs__action__Empty_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__action__Empty_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_GetResult_Response__Sequence__copy(
  const hapthexa_msgs__action__Empty_GetResult_Response__Sequence * input,
  hapthexa_msgs__action__Empty_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__action__Empty_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__action__Empty_GetResult_Response * data =
      (hapthexa_msgs__action__Empty_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__action__Empty_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__action__Empty_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__action__Empty_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "hapthexa_msgs/action/detail/empty__functions.h"

bool
hapthexa_msgs__action__Empty_GetResult_Event__init(hapthexa_msgs__action__Empty_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    hapthexa_msgs__action__Empty_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!hapthexa_msgs__action__Empty_GetResult_Request__Sequence__init(&msg->request, 0)) {
    hapthexa_msgs__action__Empty_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!hapthexa_msgs__action__Empty_GetResult_Response__Sequence__init(&msg->response, 0)) {
    hapthexa_msgs__action__Empty_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
hapthexa_msgs__action__Empty_GetResult_Event__fini(hapthexa_msgs__action__Empty_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  hapthexa_msgs__action__Empty_GetResult_Request__Sequence__fini(&msg->request);
  // response
  hapthexa_msgs__action__Empty_GetResult_Response__Sequence__fini(&msg->response);
}

bool
hapthexa_msgs__action__Empty_GetResult_Event__are_equal(const hapthexa_msgs__action__Empty_GetResult_Event * lhs, const hapthexa_msgs__action__Empty_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!hapthexa_msgs__action__Empty_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!hapthexa_msgs__action__Empty_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_GetResult_Event__copy(
  const hapthexa_msgs__action__Empty_GetResult_Event * input,
  hapthexa_msgs__action__Empty_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!hapthexa_msgs__action__Empty_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!hapthexa_msgs__action__Empty_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

hapthexa_msgs__action__Empty_GetResult_Event *
hapthexa_msgs__action__Empty_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_GetResult_Event * msg = (hapthexa_msgs__action__Empty_GetResult_Event *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__action__Empty_GetResult_Event));
  bool success = hapthexa_msgs__action__Empty_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__action__Empty_GetResult_Event__destroy(hapthexa_msgs__action__Empty_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__action__Empty_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__action__Empty_GetResult_Event__Sequence__init(hapthexa_msgs__action__Empty_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_GetResult_Event * data = NULL;

  if (size) {
    data = (hapthexa_msgs__action__Empty_GetResult_Event *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__action__Empty_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__action__Empty_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__action__Empty_GetResult_Event__fini(&data[i - 1]);
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
hapthexa_msgs__action__Empty_GetResult_Event__Sequence__fini(hapthexa_msgs__action__Empty_GetResult_Event__Sequence * array)
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
      hapthexa_msgs__action__Empty_GetResult_Event__fini(&array->data[i]);
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

hapthexa_msgs__action__Empty_GetResult_Event__Sequence *
hapthexa_msgs__action__Empty_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_GetResult_Event__Sequence * array = (hapthexa_msgs__action__Empty_GetResult_Event__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__action__Empty_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__action__Empty_GetResult_Event__Sequence__destroy(hapthexa_msgs__action__Empty_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__action__Empty_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__action__Empty_GetResult_Event__Sequence__are_equal(const hapthexa_msgs__action__Empty_GetResult_Event__Sequence * lhs, const hapthexa_msgs__action__Empty_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__action__Empty_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_GetResult_Event__Sequence__copy(
  const hapthexa_msgs__action__Empty_GetResult_Event__Sequence * input,
  hapthexa_msgs__action__Empty_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__action__Empty_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__action__Empty_GetResult_Event * data =
      (hapthexa_msgs__action__Empty_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__action__Empty_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__action__Empty_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__action__Empty_GetResult_Event__copy(
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
// #include "hapthexa_msgs/action/detail/empty__functions.h"

bool
hapthexa_msgs__action__Empty_FeedbackMessage__init(hapthexa_msgs__action__Empty_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hapthexa_msgs__action__Empty_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!hapthexa_msgs__action__Empty_Feedback__init(&msg->feedback)) {
    hapthexa_msgs__action__Empty_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
hapthexa_msgs__action__Empty_FeedbackMessage__fini(hapthexa_msgs__action__Empty_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  hapthexa_msgs__action__Empty_Feedback__fini(&msg->feedback);
}

bool
hapthexa_msgs__action__Empty_FeedbackMessage__are_equal(const hapthexa_msgs__action__Empty_FeedbackMessage * lhs, const hapthexa_msgs__action__Empty_FeedbackMessage * rhs)
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
  if (!hapthexa_msgs__action__Empty_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_FeedbackMessage__copy(
  const hapthexa_msgs__action__Empty_FeedbackMessage * input,
  hapthexa_msgs__action__Empty_FeedbackMessage * output)
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
  if (!hapthexa_msgs__action__Empty_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

hapthexa_msgs__action__Empty_FeedbackMessage *
hapthexa_msgs__action__Empty_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_FeedbackMessage * msg = (hapthexa_msgs__action__Empty_FeedbackMessage *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__action__Empty_FeedbackMessage));
  bool success = hapthexa_msgs__action__Empty_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__action__Empty_FeedbackMessage__destroy(hapthexa_msgs__action__Empty_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__action__Empty_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__action__Empty_FeedbackMessage__Sequence__init(hapthexa_msgs__action__Empty_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_FeedbackMessage * data = NULL;

  if (size) {
    data = (hapthexa_msgs__action__Empty_FeedbackMessage *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__action__Empty_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__action__Empty_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__action__Empty_FeedbackMessage__fini(&data[i - 1]);
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
hapthexa_msgs__action__Empty_FeedbackMessage__Sequence__fini(hapthexa_msgs__action__Empty_FeedbackMessage__Sequence * array)
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
      hapthexa_msgs__action__Empty_FeedbackMessage__fini(&array->data[i]);
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

hapthexa_msgs__action__Empty_FeedbackMessage__Sequence *
hapthexa_msgs__action__Empty_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__action__Empty_FeedbackMessage__Sequence * array = (hapthexa_msgs__action__Empty_FeedbackMessage__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__action__Empty_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__action__Empty_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__action__Empty_FeedbackMessage__Sequence__destroy(hapthexa_msgs__action__Empty_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__action__Empty_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__action__Empty_FeedbackMessage__Sequence__are_equal(const hapthexa_msgs__action__Empty_FeedbackMessage__Sequence * lhs, const hapthexa_msgs__action__Empty_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__action__Empty_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__action__Empty_FeedbackMessage__Sequence__copy(
  const hapthexa_msgs__action__Empty_FeedbackMessage__Sequence * input,
  hapthexa_msgs__action__Empty_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__action__Empty_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__action__Empty_FeedbackMessage * data =
      (hapthexa_msgs__action__Empty_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__action__Empty_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__action__Empty_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__action__Empty_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
