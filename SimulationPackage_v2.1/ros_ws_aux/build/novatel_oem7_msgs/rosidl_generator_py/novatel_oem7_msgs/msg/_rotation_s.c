// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from novatel_oem7_msgs:msg/Rotation.idl
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
#include "novatel_oem7_msgs/msg/detail/rotation__struct.h"
#include "novatel_oem7_msgs/msg/detail/rotation__functions.h"

bool novatel_oem7_msgs__msg__rotational_offset__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__rotational_offset__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__ins_frame__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__ins_frame__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__ins_source_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__ins_source_status__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool novatel_oem7_msgs__msg__rotation__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("novatel_oem7_msgs.msg._rotation.Rotation", full_classname_dest, 40) == 0);
  }
  novatel_oem7_msgs__msg__Rotation * ros_message = _ros_message;
  {  // rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__rotational_offset__convert_from_py(field, &ros_message->rotation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__ins_frame__convert_from_py(field, &ros_message->frame)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // x_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_rotation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_rotation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_rotation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_rotation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_rotation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_rotation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_rotation_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_rotation_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_rotation_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_rotation_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_rotation_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_rotation_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_rotation_stdev
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_rotation_stdev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_rotation_stdev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_source");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__ins_source_status__convert_from_py(field, &ros_message->rotation_source)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * novatel_oem7_msgs__msg__rotation__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Rotation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("novatel_oem7_msgs.msg._rotation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Rotation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  novatel_oem7_msgs__msg__Rotation * ros_message = (novatel_oem7_msgs__msg__Rotation *)raw_ros_message;
  {  // rotation
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__rotational_offset__convert_to_py(&ros_message->rotation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__ins_frame__convert_to_py(&ros_message->frame);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_rotation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_rotation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_rotation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_rotation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_rotation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_rotation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_rotation_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_rotation_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_rotation_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_rotation_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_rotation_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_rotation_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_rotation_stdev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_rotation_stdev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_rotation_stdev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_source
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__ins_source_status__convert_to_py(&ros_message->rotation_source);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
