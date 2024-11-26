// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hapthexa_msgs:msg/LegArgs.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "hapthexa_msgs/msg/detail/leg_args__struct.h"
#include "hapthexa_msgs/msg/detail/leg_args__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hapthexa_msgs__msg__leg_args__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("hapthexa_msgs.msg._leg_args.LegArgs", full_classname_dest, 35) == 0);
  }
  hapthexa_msgs__msg__LegArgs * ros_message = _ros_message;
  {  // coxa_arg
    PyObject * field = PyObject_GetAttrString(_pymsg, "coxa_arg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->coxa_arg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // femur_arg
    PyObject * field = PyObject_GetAttrString(_pymsg, "femur_arg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->femur_arg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tibia_arg
    PyObject * field = PyObject_GetAttrString(_pymsg, "tibia_arg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tibia_arg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hapthexa_msgs__msg__leg_args__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LegArgs */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hapthexa_msgs.msg._leg_args");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LegArgs");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hapthexa_msgs__msg__LegArgs * ros_message = (hapthexa_msgs__msg__LegArgs *)raw_ros_message;
  {  // coxa_arg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->coxa_arg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coxa_arg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // femur_arg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->femur_arg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "femur_arg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tibia_arg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tibia_arg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tibia_arg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
