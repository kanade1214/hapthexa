// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hapthexa_msgs:msg/ForceSensor.idl
// generated code does not contain a copyright notice
#include "hapthexa_msgs/msg/detail/force_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hapthexa_msgs__msg__ForceSensor__init(hapthexa_msgs__msg__ForceSensor * msg)
{
  if (!msg) {
    return false;
  }
  // loadcell1
  // loadcell2
  // piezo
  // radial_direction
  // radial_magnitude
  // loadcell1_raw
  // loadcell2_raw
  // piezo_raw
  // x
  // y
  // z
  return true;
}

void
hapthexa_msgs__msg__ForceSensor__fini(hapthexa_msgs__msg__ForceSensor * msg)
{
  if (!msg) {
    return;
  }
  // loadcell1
  // loadcell2
  // piezo
  // radial_direction
  // radial_magnitude
  // loadcell1_raw
  // loadcell2_raw
  // piezo_raw
  // x
  // y
  // z
}

bool
hapthexa_msgs__msg__ForceSensor__are_equal(const hapthexa_msgs__msg__ForceSensor * lhs, const hapthexa_msgs__msg__ForceSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // loadcell1
  if (lhs->loadcell1 != rhs->loadcell1) {
    return false;
  }
  // loadcell2
  if (lhs->loadcell2 != rhs->loadcell2) {
    return false;
  }
  // piezo
  if (lhs->piezo != rhs->piezo) {
    return false;
  }
  // radial_direction
  if (lhs->radial_direction != rhs->radial_direction) {
    return false;
  }
  // radial_magnitude
  if (lhs->radial_magnitude != rhs->radial_magnitude) {
    return false;
  }
  // loadcell1_raw
  if (lhs->loadcell1_raw != rhs->loadcell1_raw) {
    return false;
  }
  // loadcell2_raw
  if (lhs->loadcell2_raw != rhs->loadcell2_raw) {
    return false;
  }
  // piezo_raw
  if (lhs->piezo_raw != rhs->piezo_raw) {
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
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
hapthexa_msgs__msg__ForceSensor__copy(
  const hapthexa_msgs__msg__ForceSensor * input,
  hapthexa_msgs__msg__ForceSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // loadcell1
  output->loadcell1 = input->loadcell1;
  // loadcell2
  output->loadcell2 = input->loadcell2;
  // piezo
  output->piezo = input->piezo;
  // radial_direction
  output->radial_direction = input->radial_direction;
  // radial_magnitude
  output->radial_magnitude = input->radial_magnitude;
  // loadcell1_raw
  output->loadcell1_raw = input->loadcell1_raw;
  // loadcell2_raw
  output->loadcell2_raw = input->loadcell2_raw;
  // piezo_raw
  output->piezo_raw = input->piezo_raw;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

hapthexa_msgs__msg__ForceSensor *
hapthexa_msgs__msg__ForceSensor__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__msg__ForceSensor * msg = (hapthexa_msgs__msg__ForceSensor *)allocator.allocate(sizeof(hapthexa_msgs__msg__ForceSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hapthexa_msgs__msg__ForceSensor));
  bool success = hapthexa_msgs__msg__ForceSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hapthexa_msgs__msg__ForceSensor__destroy(hapthexa_msgs__msg__ForceSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hapthexa_msgs__msg__ForceSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hapthexa_msgs__msg__ForceSensor__Sequence__init(hapthexa_msgs__msg__ForceSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__msg__ForceSensor * data = NULL;

  if (size) {
    data = (hapthexa_msgs__msg__ForceSensor *)allocator.zero_allocate(size, sizeof(hapthexa_msgs__msg__ForceSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hapthexa_msgs__msg__ForceSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hapthexa_msgs__msg__ForceSensor__fini(&data[i - 1]);
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
hapthexa_msgs__msg__ForceSensor__Sequence__fini(hapthexa_msgs__msg__ForceSensor__Sequence * array)
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
      hapthexa_msgs__msg__ForceSensor__fini(&array->data[i]);
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

hapthexa_msgs__msg__ForceSensor__Sequence *
hapthexa_msgs__msg__ForceSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hapthexa_msgs__msg__ForceSensor__Sequence * array = (hapthexa_msgs__msg__ForceSensor__Sequence *)allocator.allocate(sizeof(hapthexa_msgs__msg__ForceSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hapthexa_msgs__msg__ForceSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hapthexa_msgs__msg__ForceSensor__Sequence__destroy(hapthexa_msgs__msg__ForceSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hapthexa_msgs__msg__ForceSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hapthexa_msgs__msg__ForceSensor__Sequence__are_equal(const hapthexa_msgs__msg__ForceSensor__Sequence * lhs, const hapthexa_msgs__msg__ForceSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hapthexa_msgs__msg__ForceSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hapthexa_msgs__msg__ForceSensor__Sequence__copy(
  const hapthexa_msgs__msg__ForceSensor__Sequence * input,
  hapthexa_msgs__msg__ForceSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hapthexa_msgs__msg__ForceSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hapthexa_msgs__msg__ForceSensor * data =
      (hapthexa_msgs__msg__ForceSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hapthexa_msgs__msg__ForceSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hapthexa_msgs__msg__ForceSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hapthexa_msgs__msg__ForceSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
