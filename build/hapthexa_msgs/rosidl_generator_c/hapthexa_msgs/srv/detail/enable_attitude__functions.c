// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hapthexa_msgs:srv/EnableAttitude.idl
// generated code does not contain a copyright notice
#include "hapthexa_msgs/srv/detail/enable_attitude__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
hapthexa_msgs__srv__EnableAttitude_Request__init(hapthexa_msgs__srv__EnableAttitude_Request * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  return true;
}

void
hapthexa_msgs__srv__EnableAttitude_Request__fini(hapthexa_msgs__srv__EnableAttitude_Request * msg)
{
  if (!msg) {
    return;
  }
  // enable
}

bool
hapthexa_msgs__srv__EnableAttitude_Request__are_equal(const hapthexa_msgs__srv__EnableAttitude_Request * lhs, const hapthexa_msgs__srv__EnableAttitude_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__srv__EnableAttitude_Request__copy(
  const hapthexa_msgs__srv__EnableAttitude_Request * input,
  hapthexa_msgs__srv__EnableAttitude_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // enable
  output->enable = input->enable;
  return true;
}

hapthexa_msgs__srv__EnableAttitude_Request *
hapthexa_msgs__srv__EnableAttitude_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__srv__EnableAttitude_Request * msg = (hapthexa_msgs__srv__EnableAttitude_Request *)allocator.allocate(sizeof(hapthexa_msgs__srv__EnableAttitude_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__srv__EnableAttitude_Request));
  bool success = hapthexa_msgs__srv__EnableAttitude_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__srv__EnableAttitude_Request__destroy(hapthexa_msgs__srv__EnableAttitude_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__srv__EnableAttitude_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__srv__EnableAttitude_Request__Sequence__init(hapthexa_msgs__srv__EnableAttitude_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__srv__EnableAttitude_Request * data = NULL;

  if (size) {
    data = (hapthexa_msgs__srv__EnableAttitude_Request *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__srv__EnableAttitude_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__srv__EnableAttitude_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__srv__EnableAttitude_Request__fini(&data[i - 1]);
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
hapthexa_msgs__srv__EnableAttitude_Request__Sequence__fini(hapthexa_msgs__srv__EnableAttitude_Request__Sequence * array)
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
      hapthexa_msgs__srv__EnableAttitude_Request__fini(&array->data[i]);
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

hapthexa_msgs__srv__EnableAttitude_Request__Sequence *
hapthexa_msgs__srv__EnableAttitude_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__srv__EnableAttitude_Request__Sequence * array = (hapthexa_msgs__srv__EnableAttitude_Request__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__srv__EnableAttitude_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__srv__EnableAttitude_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__srv__EnableAttitude_Request__Sequence__destroy(hapthexa_msgs__srv__EnableAttitude_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__srv__EnableAttitude_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__srv__EnableAttitude_Request__Sequence__are_equal(const hapthexa_msgs__srv__EnableAttitude_Request__Sequence * lhs, const hapthexa_msgs__srv__EnableAttitude_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__srv__EnableAttitude_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__srv__EnableAttitude_Request__Sequence__copy(
  const hapthexa_msgs__srv__EnableAttitude_Request__Sequence * input,
  hapthexa_msgs__srv__EnableAttitude_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__srv__EnableAttitude_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__srv__EnableAttitude_Request * data =
      (hapthexa_msgs__srv__EnableAttitude_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__srv__EnableAttitude_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__srv__EnableAttitude_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__srv__EnableAttitude_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
hapthexa_msgs__srv__EnableAttitude_Response__init(hapthexa_msgs__srv__EnableAttitude_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
hapthexa_msgs__srv__EnableAttitude_Response__fini(hapthexa_msgs__srv__EnableAttitude_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
hapthexa_msgs__srv__EnableAttitude_Response__are_equal(const hapthexa_msgs__srv__EnableAttitude_Response * lhs, const hapthexa_msgs__srv__EnableAttitude_Response * rhs)
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
hapthexa_msgs__srv__EnableAttitude_Response__copy(
  const hapthexa_msgs__srv__EnableAttitude_Response * input,
  hapthexa_msgs__srv__EnableAttitude_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

hapthexa_msgs__srv__EnableAttitude_Response *
hapthexa_msgs__srv__EnableAttitude_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__srv__EnableAttitude_Response * msg = (hapthexa_msgs__srv__EnableAttitude_Response *)allocator.allocate(sizeof(hapthexa_msgs__srv__EnableAttitude_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__srv__EnableAttitude_Response));
  bool success = hapthexa_msgs__srv__EnableAttitude_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__srv__EnableAttitude_Response__destroy(hapthexa_msgs__srv__EnableAttitude_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__srv__EnableAttitude_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__srv__EnableAttitude_Response__Sequence__init(hapthexa_msgs__srv__EnableAttitude_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__srv__EnableAttitude_Response * data = NULL;

  if (size) {
    data = (hapthexa_msgs__srv__EnableAttitude_Response *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__srv__EnableAttitude_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__srv__EnableAttitude_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__srv__EnableAttitude_Response__fini(&data[i - 1]);
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
hapthexa_msgs__srv__EnableAttitude_Response__Sequence__fini(hapthexa_msgs__srv__EnableAttitude_Response__Sequence * array)
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
      hapthexa_msgs__srv__EnableAttitude_Response__fini(&array->data[i]);
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

hapthexa_msgs__srv__EnableAttitude_Response__Sequence *
hapthexa_msgs__srv__EnableAttitude_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__srv__EnableAttitude_Response__Sequence * array = (hapthexa_msgs__srv__EnableAttitude_Response__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__srv__EnableAttitude_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__srv__EnableAttitude_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__srv__EnableAttitude_Response__Sequence__destroy(hapthexa_msgs__srv__EnableAttitude_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__srv__EnableAttitude_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__srv__EnableAttitude_Response__Sequence__are_equal(const hapthexa_msgs__srv__EnableAttitude_Response__Sequence * lhs, const hapthexa_msgs__srv__EnableAttitude_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__srv__EnableAttitude_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__srv__EnableAttitude_Response__Sequence__copy(
  const hapthexa_msgs__srv__EnableAttitude_Response__Sequence * input,
  hapthexa_msgs__srv__EnableAttitude_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__srv__EnableAttitude_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__srv__EnableAttitude_Response * data =
      (hapthexa_msgs__srv__EnableAttitude_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__srv__EnableAttitude_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__srv__EnableAttitude_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__srv__EnableAttitude_Response__copy(
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
// #include "hapthexa_msgs/srv/detail/enable_attitude__functions.h"

bool
hapthexa_msgs__srv__EnableAttitude_Event__init(hapthexa_msgs__srv__EnableAttitude_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    hapthexa_msgs__srv__EnableAttitude_Event__fini(msg);
    return false;
  }
  // request
  if (!hapthexa_msgs__srv__EnableAttitude_Request__Sequence__init(&msg->request, 0)) {
    hapthexa_msgs__srv__EnableAttitude_Event__fini(msg);
    return false;
  }
  // response
  if (!hapthexa_msgs__srv__EnableAttitude_Response__Sequence__init(&msg->response, 0)) {
    hapthexa_msgs__srv__EnableAttitude_Event__fini(msg);
    return false;
  }
  return true;
}

void
hapthexa_msgs__srv__EnableAttitude_Event__fini(hapthexa_msgs__srv__EnableAttitude_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  hapthexa_msgs__srv__EnableAttitude_Request__Sequence__fini(&msg->request);
  // response
  hapthexa_msgs__srv__EnableAttitude_Response__Sequence__fini(&msg->response);
}

bool
hapthexa_msgs__srv__EnableAttitude_Event__are_equal(const hapthexa_msgs__srv__EnableAttitude_Event * lhs, const hapthexa_msgs__srv__EnableAttitude_Event * rhs)
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
  if (!hapthexa_msgs__srv__EnableAttitude_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!hapthexa_msgs__srv__EnableAttitude_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__srv__EnableAttitude_Event__copy(
  const hapthexa_msgs__srv__EnableAttitude_Event * input,
  hapthexa_msgs__srv__EnableAttitude_Event * output)
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
  if (!hapthexa_msgs__srv__EnableAttitude_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!hapthexa_msgs__srv__EnableAttitude_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

hapthexa_msgs__srv__EnableAttitude_Event *
hapthexa_msgs__srv__EnableAttitude_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__srv__EnableAttitude_Event * msg = (hapthexa_msgs__srv__EnableAttitude_Event *)allocator.allocate(sizeof(hapthexa_msgs__srv__EnableAttitude_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__srv__EnableAttitude_Event));
  bool success = hapthexa_msgs__srv__EnableAttitude_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__srv__EnableAttitude_Event__destroy(hapthexa_msgs__srv__EnableAttitude_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__srv__EnableAttitude_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__srv__EnableAttitude_Event__Sequence__init(hapthexa_msgs__srv__EnableAttitude_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__srv__EnableAttitude_Event * data = NULL;

  if (size) {
    data = (hapthexa_msgs__srv__EnableAttitude_Event *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__srv__EnableAttitude_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__srv__EnableAttitude_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__srv__EnableAttitude_Event__fini(&data[i - 1]);
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
hapthexa_msgs__srv__EnableAttitude_Event__Sequence__fini(hapthexa_msgs__srv__EnableAttitude_Event__Sequence * array)
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
      hapthexa_msgs__srv__EnableAttitude_Event__fini(&array->data[i]);
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

hapthexa_msgs__srv__EnableAttitude_Event__Sequence *
hapthexa_msgs__srv__EnableAttitude_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__srv__EnableAttitude_Event__Sequence * array = (hapthexa_msgs__srv__EnableAttitude_Event__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__srv__EnableAttitude_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__srv__EnableAttitude_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__srv__EnableAttitude_Event__Sequence__destroy(hapthexa_msgs__srv__EnableAttitude_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__srv__EnableAttitude_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__srv__EnableAttitude_Event__Sequence__are_equal(const hapthexa_msgs__srv__EnableAttitude_Event__Sequence * lhs, const hapthexa_msgs__srv__EnableAttitude_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__srv__EnableAttitude_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__srv__EnableAttitude_Event__Sequence__copy(
  const hapthexa_msgs__srv__EnableAttitude_Event__Sequence * input,
  hapthexa_msgs__srv__EnableAttitude_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__srv__EnableAttitude_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__srv__EnableAttitude_Event * data =
      (hapthexa_msgs__srv__EnableAttitude_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__srv__EnableAttitude_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__srv__EnableAttitude_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__srv__EnableAttitude_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
