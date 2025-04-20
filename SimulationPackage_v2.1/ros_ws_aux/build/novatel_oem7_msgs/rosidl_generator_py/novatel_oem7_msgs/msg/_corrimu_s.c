// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from novatel_oem7_msgs:msg/CORRIMU.idl
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
#include "novatel_oem7_msgs/msg/detail/corrimu__struct.h"
#include "novatel_oem7_msgs/msg/detail/corrimu__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__oem7_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__oem7_header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool novatel_oem7_msgs__msg__corrimu__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("novatel_oem7_msgs.msg._corrimu.CORRIMU", full_classname_dest, 38) == 0);
  }
  novatel_oem7_msgs__msg__CORRIMU * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nov_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "nov_header");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__oem7_header__convert_from_py(field, &ros_message->nov_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // imu_data_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_data_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imu_data_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pitch_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitudinal_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitudinal_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reserved1
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved2
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * novatel_oem7_msgs__msg__corrimu__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CORRIMU */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("novatel_oem7_msgs.msg._corrimu");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CORRIMU");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  novatel_oem7_msgs__msg__CORRIMU * ros_message = (novatel_oem7_msgs__msg__CORRIMU *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nov_header
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__oem7_header__convert_to_py(&ros_message->nov_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nov_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_data_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imu_data_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_data_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitudinal_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
