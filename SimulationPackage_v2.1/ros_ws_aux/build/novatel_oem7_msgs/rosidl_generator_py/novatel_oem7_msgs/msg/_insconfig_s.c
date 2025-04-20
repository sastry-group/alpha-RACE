// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from novatel_oem7_msgs:msg/INSCONFIG.idl
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
#include "novatel_oem7_msgs/msg/detail/insconfig__struct.h"
#include "novatel_oem7_msgs/msg/detail/insconfig__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "novatel_oem7_msgs/msg/detail/rotation__functions.h"
#include "novatel_oem7_msgs/msg/detail/translation__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__oem7_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__oem7_header__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__ins_alignment_mode__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__ins_alignment_mode__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__ins_output_frame__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__ins_output_frame__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__ins_receiver_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__ins_receiver_status__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__translation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__translation__convert_to_py(void * raw_ros_message);
bool novatel_oem7_msgs__msg__rotation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * novatel_oem7_msgs__msg__rotation__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool novatel_oem7_msgs__msg__insconfig__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("novatel_oem7_msgs.msg._insconfig.INSCONFIG", full_classname_dest, 42) == 0);
  }
  novatel_oem7_msgs__msg__INSCONFIG * ros_message = _ros_message;
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
  {  // imu_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imu_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mapping
    PyObject * field = PyObject_GetAttrString(_pymsg, "mapping");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mapping = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // initial_alignment_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_alignment_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->initial_alignment_velocity = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // heave_window
    PyObject * field = PyObject_GetAttrString(_pymsg, "heave_window");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heave_window = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // profile
    PyObject * field = PyObject_GetAttrString(_pymsg, "profile");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->profile = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // enabled_updates
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled_updates");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 4;
      uint8_t * dest = ros_message->enabled_updates;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // alignment_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "alignment_mode");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__ins_alignment_mode__convert_from_py(field, &ros_message->alignment_mode)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relative_ins_output_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_ins_output_frame");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__ins_output_frame__convert_from_py(field, &ros_message->relative_ins_output_frame)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relative_ins_output_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_ins_output_direction");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->relative_ins_output_direction = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ins_receiver_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "ins_receiver_status");
    if (!field) {
      return false;
    }
    if (!novatel_oem7_msgs__msg__ins_receiver_status__convert_from_py(field, &ros_message->ins_receiver_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ins_seed_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "ins_seed_enabled");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ins_seed_enabled = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ins_seed_validation
    PyObject * field = PyObject_GetAttrString(_pymsg, "ins_seed_validation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ins_seed_validation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved_1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved_2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved_3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved_4 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved_5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved_5 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved_6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved_6 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved_7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved_7 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // number_of_translations
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_translations");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_translations = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // translations
    PyObject * field = PyObject_GetAttrString(_pymsg, "translations");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'translations'");
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
    if (!novatel_oem7_msgs__msg__Translation__Sequence__init(&(ros_message->translations), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create novatel_oem7_msgs__msg__Translation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    novatel_oem7_msgs__msg__Translation * dest = ros_message->translations.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!novatel_oem7_msgs__msg__translation__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // number_of_rotations
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_rotations");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_rotations = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rotations
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotations");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'rotations'");
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
    if (!novatel_oem7_msgs__msg__Rotation__Sequence__init(&(ros_message->rotations), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create novatel_oem7_msgs__msg__Rotation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    novatel_oem7_msgs__msg__Rotation * dest = ros_message->rotations.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!novatel_oem7_msgs__msg__rotation__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * novatel_oem7_msgs__msg__insconfig__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of INSCONFIG */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("novatel_oem7_msgs.msg._insconfig");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "INSCONFIG");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  novatel_oem7_msgs__msg__INSCONFIG * ros_message = (novatel_oem7_msgs__msg__INSCONFIG *)raw_ros_message;
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
  {  // imu_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imu_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mapping
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mapping);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mapping", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_alignment_velocity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->initial_alignment_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_alignment_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heave_window
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->heave_window);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heave_window", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // profile
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->profile);
    {
      int rc = PyObject_SetAttrString(_pymessage, "profile", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enabled_updates
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "enabled_updates");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->enabled_updates[0]);
    memcpy(dst, src, 4 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // alignment_mode
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__ins_alignment_mode__convert_to_py(&ros_message->alignment_mode);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "alignment_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_ins_output_frame
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__ins_output_frame__convert_to_py(&ros_message->relative_ins_output_frame);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_ins_output_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_ins_output_direction
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->relative_ins_output_direction ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_ins_output_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ins_receiver_status
    PyObject * field = NULL;
    field = novatel_oem7_msgs__msg__ins_receiver_status__convert_to_py(&ros_message->ins_receiver_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ins_receiver_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ins_seed_enabled
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ins_seed_enabled);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ins_seed_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ins_seed_validation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ins_seed_validation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ins_seed_validation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved_5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved_6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved_7
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_translations
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->number_of_translations);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_translations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // translations
    PyObject * field = NULL;
    size_t size = ros_message->translations.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    novatel_oem7_msgs__msg__Translation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->translations.data[i]);
      PyObject * pyitem = novatel_oem7_msgs__msg__translation__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "translations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_rotations
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->number_of_rotations);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_rotations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotations
    PyObject * field = NULL;
    size_t size = ros_message->rotations.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    novatel_oem7_msgs__msg__Rotation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->rotations.data[i]);
      PyObject * pyitem = novatel_oem7_msgs__msg__rotation__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
