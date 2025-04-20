// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from npc_controller_msgs:msg/TireReport.idl
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
#include "npc_controller_msgs/msg/detail/tire_report__struct.h"
#include "npc_controller_msgs/msg/detail/tire_report__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool npc_controller_msgs__msg__tire_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("npc_controller_msgs.msg._tire_report.TireReport", full_classname_dest, 47) == 0);
  }
  npc_controller_msgs__msg__TireReport * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fl_tire_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_tire_temperature");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->fl_tire_temperature), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->fl_tire_temperature.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'fl_tire_temperature'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->fl_tire_temperature), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->fl_tire_temperature.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // fl_damper_linear_potentiometer
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_damper_linear_potentiometer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_damper_linear_potentiometer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fl_tire_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_tire_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_tire_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fl_tire_pressure_gauge
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_tire_pressure_gauge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_tire_pressure_gauge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fl_wheel_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_wheel_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_wheel_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_tire_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_tire_temperature");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->fr_tire_temperature), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->fr_tire_temperature.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'fr_tire_temperature'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->fr_tire_temperature), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->fr_tire_temperature.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // fr_damper_linear_potentiometer
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_damper_linear_potentiometer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_damper_linear_potentiometer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_tire_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_tire_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_tire_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_tire_pressure_gauge
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_tire_pressure_gauge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_tire_pressure_gauge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_wheel_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_wheel_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_wheel_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_tire_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_tire_temperature");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->rl_tire_temperature), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->rl_tire_temperature.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'rl_tire_temperature'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->rl_tire_temperature), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->rl_tire_temperature.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rl_damper_linear_potentiometer
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_damper_linear_potentiometer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_damper_linear_potentiometer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_tire_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_tire_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_tire_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_tire_pressure_gauge
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_tire_pressure_gauge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_tire_pressure_gauge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_wheel_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_wheel_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_wheel_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_tire_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_tire_temperature");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->rr_tire_temperature), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->rr_tire_temperature.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'rr_tire_temperature'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->rr_tire_temperature), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->rr_tire_temperature.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rr_damper_linear_potentiometer
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_damper_linear_potentiometer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_damper_linear_potentiometer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_tire_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_tire_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_tire_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_tire_pressure_gauge
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_tire_pressure_gauge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_tire_pressure_gauge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_wheel_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_wheel_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_wheel_load = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * npc_controller_msgs__msg__tire_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TireReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("npc_controller_msgs.msg._tire_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TireReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  npc_controller_msgs__msg__TireReport * ros_message = (npc_controller_msgs__msg__TireReport *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_tire_temperature
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "fl_tire_temperature");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->fl_tire_temperature.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->fl_tire_temperature.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->fl_tire_temperature.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // fl_damper_linear_potentiometer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_damper_linear_potentiometer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_damper_linear_potentiometer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_tire_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_tire_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_tire_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_tire_pressure_gauge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_tire_pressure_gauge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_tire_pressure_gauge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_wheel_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_wheel_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_wheel_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_tire_temperature
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "fr_tire_temperature");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->fr_tire_temperature.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->fr_tire_temperature.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->fr_tire_temperature.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // fr_damper_linear_potentiometer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_damper_linear_potentiometer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_damper_linear_potentiometer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_tire_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_tire_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_tire_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_tire_pressure_gauge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_tire_pressure_gauge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_tire_pressure_gauge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_wheel_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_wheel_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_wheel_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_tire_temperature
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rl_tire_temperature");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->rl_tire_temperature.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->rl_tire_temperature.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->rl_tire_temperature.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // rl_damper_linear_potentiometer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_damper_linear_potentiometer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_damper_linear_potentiometer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_tire_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_tire_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_tire_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_tire_pressure_gauge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_tire_pressure_gauge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_tire_pressure_gauge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_wheel_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_wheel_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_wheel_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_tire_temperature
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rr_tire_temperature");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->rr_tire_temperature.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->rr_tire_temperature.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->rr_tire_temperature.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // rr_damper_linear_potentiometer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_damper_linear_potentiometer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_damper_linear_potentiometer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_tire_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_tire_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_tire_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_tire_pressure_gauge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_tire_pressure_gauge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_tire_pressure_gauge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_wheel_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_wheel_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_wheel_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
