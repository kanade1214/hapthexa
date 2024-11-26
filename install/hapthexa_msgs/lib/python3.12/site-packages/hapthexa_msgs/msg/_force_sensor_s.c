// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hapthexa_msgs:msg/ForceSensor.idl
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
#include "hapthexa_msgs/msg/detail/force_sensor__struct.h"
#include "hapthexa_msgs/msg/detail/force_sensor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hapthexa_msgs__msg__force_sensor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("hapthexa_msgs.msg._force_sensor.ForceSensor", full_classname_dest, 43) == 0);
  }
  hapthexa_msgs__msg__ForceSensor * ros_message = _ros_message;
  {  // loadcell1
    PyObject * field = PyObject_GetAttrString(_pymsg, "loadcell1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loadcell1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loadcell2
    PyObject * field = PyObject_GetAttrString(_pymsg, "loadcell2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loadcell2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // piezo
    PyObject * field = PyObject_GetAttrString(_pymsg, "piezo");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->piezo = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radial_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "radial_direction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->radial_direction = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radial_magnitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "radial_magnitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->radial_magnitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loadcell1_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "loadcell1_raw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->loadcell1_raw = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // loadcell2_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "loadcell2_raw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->loadcell2_raw = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // piezo_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "piezo_raw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->piezo_raw = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->z = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hapthexa_msgs__msg__force_sensor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ForceSensor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hapthexa_msgs.msg._force_sensor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ForceSensor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hapthexa_msgs__msg__ForceSensor * ros_message = (hapthexa_msgs__msg__ForceSensor *)raw_ros_message;
  {  // loadcell1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loadcell1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loadcell1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loadcell2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loadcell2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loadcell2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // piezo
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->piezo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "piezo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radial_direction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->radial_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radial_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radial_magnitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->radial_magnitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radial_magnitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loadcell1_raw
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->loadcell1_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loadcell1_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loadcell2_raw
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->loadcell2_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loadcell2_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // piezo_raw
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->piezo_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "piezo_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
