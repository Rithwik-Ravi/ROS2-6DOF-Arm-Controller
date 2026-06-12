# generated from rosidl_generator_py/resource/_idl.py.em
# with input from melfa_msgs:msg/GpioCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GpioCommand(type):
    """Metaclass of message 'GpioCommand'."""

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
                'melfa_msgs.msg.GpioCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpio_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpio_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpio_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpio_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpio_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GpioCommand(metaclass=Metaclass_GpioCommand):
    """Message class 'GpioCommand'."""

    __slots__ = [
        '_bitid',
        '_bitmask',
        '_bit_recv_type',
        '_bit_send_type',
        '_bitdata',
    ]

    _fields_and_field_types = {
        'bitid': 'uint16',
        'bitmask': 'uint16',
        'bit_recv_type': 'string',
        'bit_send_type': 'string',
        'bitdata': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bitid = kwargs.get('bitid', int())
        self.bitmask = kwargs.get('bitmask', int())
        self.bit_recv_type = kwargs.get('bit_recv_type', str())
        self.bit_send_type = kwargs.get('bit_send_type', str())
        self.bitdata = kwargs.get('bitdata', int())

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
        if self.bitid != other.bitid:
            return False
        if self.bitmask != other.bitmask:
            return False
        if self.bit_recv_type != other.bit_recv_type:
            return False
        if self.bit_send_type != other.bit_send_type:
            return False
        if self.bitdata != other.bitdata:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bitid(self):
        """Message field 'bitid'."""
        return self._bitid

    @bitid.setter
    def bitid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bitid' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bitid' field must be an unsigned integer in [0, 65535]"
        self._bitid = value

    @builtins.property
    def bitmask(self):
        """Message field 'bitmask'."""
        return self._bitmask

    @bitmask.setter
    def bitmask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bitmask' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bitmask' field must be an unsigned integer in [0, 65535]"
        self._bitmask = value

    @builtins.property
    def bit_recv_type(self):
        """Message field 'bit_recv_type'."""
        return self._bit_recv_type

    @bit_recv_type.setter
    def bit_recv_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bit_recv_type' field must be of type 'str'"
        self._bit_recv_type = value

    @builtins.property
    def bit_send_type(self):
        """Message field 'bit_send_type'."""
        return self._bit_send_type

    @bit_send_type.setter
    def bit_send_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bit_send_type' field must be of type 'str'"
        self._bit_send_type = value

    @builtins.property
    def bitdata(self):
        """Message field 'bitdata'."""
        return self._bitdata

    @bitdata.setter
    def bitdata(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bitdata' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bitdata' field must be an unsigned integer in [0, 65535]"
        self._bitdata = value
