# generated from rosidl_generator_py/resource/_idl.py.em
# with input from melfa_msgs:msg/ControlMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlMode(type):
    """Metaclass of message 'ControlMode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('melfa_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'melfa_msgs.msg.ControlMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlMode(metaclass=Metaclass_ControlMode):
    """Message class 'ControlMode'."""

    __slots__ = [
        '_hand_io_interface',
        '_plc_link_io_interface',
        '_safety_io_interface',
        '_io_unit_interface',
        '_misc1_io_interface',
        '_misc2_io_interface',
        '_misc3_io_interface',
    ]

    _fields_and_field_types = {
        'hand_io_interface': 'boolean',
        'plc_link_io_interface': 'boolean',
        'safety_io_interface': 'boolean',
        'io_unit_interface': 'boolean',
        'misc1_io_interface': 'boolean',
        'misc2_io_interface': 'boolean',
        'misc3_io_interface': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hand_io_interface = kwargs.get('hand_io_interface', bool())
        self.plc_link_io_interface = kwargs.get('plc_link_io_interface', bool())
        self.safety_io_interface = kwargs.get('safety_io_interface', bool())
        self.io_unit_interface = kwargs.get('io_unit_interface', bool())
        self.misc1_io_interface = kwargs.get('misc1_io_interface', bool())
        self.misc2_io_interface = kwargs.get('misc2_io_interface', bool())
        self.misc3_io_interface = kwargs.get('misc3_io_interface', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.hand_io_interface != other.hand_io_interface:
            return False
        if self.plc_link_io_interface != other.plc_link_io_interface:
            return False
        if self.safety_io_interface != other.safety_io_interface:
            return False
        if self.io_unit_interface != other.io_unit_interface:
            return False
        if self.misc1_io_interface != other.misc1_io_interface:
            return False
        if self.misc2_io_interface != other.misc2_io_interface:
            return False
        if self.misc3_io_interface != other.misc3_io_interface:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hand_io_interface(self):
        """Message field 'hand_io_interface'."""
        return self._hand_io_interface

    @hand_io_interface.setter
    def hand_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hand_io_interface' field must be of type 'bool'"
        self._hand_io_interface = value

    @builtins.property
    def plc_link_io_interface(self):
        """Message field 'plc_link_io_interface'."""
        return self._plc_link_io_interface

    @plc_link_io_interface.setter
    def plc_link_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plc_link_io_interface' field must be of type 'bool'"
        self._plc_link_io_interface = value

    @builtins.property
    def safety_io_interface(self):
        """Message field 'safety_io_interface'."""
        return self._safety_io_interface

    @safety_io_interface.setter
    def safety_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safety_io_interface' field must be of type 'bool'"
        self._safety_io_interface = value

    @builtins.property
    def io_unit_interface(self):
        """Message field 'io_unit_interface'."""
        return self._io_unit_interface

    @io_unit_interface.setter
    def io_unit_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'io_unit_interface' field must be of type 'bool'"
        self._io_unit_interface = value

    @builtins.property
    def misc1_io_interface(self):
        """Message field 'misc1_io_interface'."""
        return self._misc1_io_interface

    @misc1_io_interface.setter
    def misc1_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'misc1_io_interface' field must be of type 'bool'"
        self._misc1_io_interface = value

    @builtins.property
    def misc2_io_interface(self):
        """Message field 'misc2_io_interface'."""
        return self._misc2_io_interface

    @misc2_io_interface.setter
    def misc2_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'misc2_io_interface' field must be of type 'bool'"
        self._misc2_io_interface = value

    @builtins.property
    def misc3_io_interface(self):
        """Message field 'misc3_io_interface'."""
        return self._misc3_io_interface

    @misc3_io_interface.setter
    def misc3_io_interface(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'misc3_io_interface' field must be of type 'bool'"
        self._misc3_io_interface = value
