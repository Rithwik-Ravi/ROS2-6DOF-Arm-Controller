// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from melfa_msgs:msg/ControlMode.idl
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
#include "melfa_msgs/msg/detail/control_mode__struct.h"
#include "melfa_msgs/msg/detail/control_mode__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool melfa_msgs__msg__control_mode__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("melfa_msgs.msg._control_mode.ControlMode", full_classname_dest, 40) == 0);
  }
  melfa_msgs__msg__ControlMode * ros_message = _ros_message;
  {  // hand_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "hand_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hand_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // plc_link_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "plc_link_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->plc_link_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // safety_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safety_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // io_unit_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_unit_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->io_unit_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // misc1_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "misc1_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->misc1_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // misc2_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "misc2_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->misc2_io_interface = (Py_True == field);
    Py_DECREF(field);
  }
  {  // misc3_io_interface
    PyObject * field = PyObject_GetAttrString(_pymsg, "misc3_io_interface");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->misc3_io_interface = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * melfa_msgs__msg__control_mode__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlMode */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("melfa_msgs.msg._control_mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlMode");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  melfa_msgs__msg__ControlMode * ros_message = (melfa_msgs__msg__ControlMode *)raw_ros_message;
  {  // hand_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hand_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hand_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plc_link_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->plc_link_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plc_link_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safety_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_unit_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->io_unit_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_unit_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // misc1_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->misc1_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "misc1_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // misc2_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->misc2_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "misc2_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // misc3_io_interface
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->misc3_io_interface ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "misc3_io_interface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
