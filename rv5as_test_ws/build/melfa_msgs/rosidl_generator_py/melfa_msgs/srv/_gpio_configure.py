# generated from rosidl_generator_py/resource/_idl.py.em
# with input from melfa_msgs:srv/GpioConfigure.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GpioConfigure_Request(type):
    """Metaclass of message 'GpioConfigure_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RQ_STOP': 10000,
        'RQ_START': 10001,
        'RQ_ERRRESET': 10009,
        'RQ_SRVON': 10010,
        'RQ_SRVOFF': 10011,
        'BIT_TOP_MODE': 1,
        'PACKET_MODE': 65535,
        'SET_READ_OUT': 'READ_OUT',
        'SET_WRITE_OUT': 'WRITE_OUT',
        'SET_READ_IN': 'READ_IN',
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
                'melfa_msgs.srv.GpioConfigure_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gpio_configure__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gpio_configure__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gpio_configure__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gpio_configure__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gpio_configure__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RQ_STOP': cls.__constants['RQ_STOP'],
            'RQ_START': cls.__constants['RQ_START'],
            'RQ_ERRRESET': cls.__constants['RQ_ERRRESET'],
            'RQ_SRVON': cls.__constants['RQ_SRVON'],
            'RQ_SRVOFF': cls.__constants['RQ_SRVOFF'],
            'BIT_TOP_MODE': cls.__constants['BIT_TOP_MODE'],
            'PACKET_MODE': cls.__constants['PACKET_MODE'],
            'SET_READ_OUT': cls.__constants['SET_READ_OUT'],
            'SET_WRITE_OUT': cls.__constants['SET_WRITE_OUT'],
            'SET_READ_IN': cls.__constants['SET_READ_IN'],
        }

    @property
    def RQ_STOP(self):
        """Message constant 'RQ_STOP'."""
        return Metaclass_GpioConfigure_Request.__constants['RQ_STOP']

    @property
    def RQ_START(self):
        """Message constant 'RQ_START'."""
        return Metaclass_GpioConfigure_Request.__constants['RQ_START']

    @property
    def RQ_ERRRESET(self):
        """Message constant 'RQ_ERRRESET'."""
        return Metaclass_GpioConfigure_Request.__constants['RQ_ERRRESET']

    @property
    def RQ_SRVON(self):
        """Message constant 'RQ_SRVON'."""
        return Metaclass_GpioConfigure_Request.__constants['RQ_SRVON']

    @property
    def RQ_SRVOFF(self):
        """Message constant 'RQ_SRVOFF'."""
        return Metaclass_GpioConfigure_Request.__constants['RQ_SRVOFF']

    @property
    def BIT_TOP_MODE(self):
        """Message constant 'BIT_TOP_MODE'."""
        return Metaclass_GpioConfigure_Request.__constants['BIT_TOP_MODE']

    @property
    def PACKET_MODE(self):
        """Message constant 'PACKET_MODE'."""
        return Metaclass_GpioConfigure_Request.__constants['PACKET_MODE']

    @property
    def SET_READ_OUT(self):
        """Message constant 'SET_READ_OUT'."""
        return Metaclass_GpioConfigure_Request.__constants['SET_READ_OUT']

    @property
    def SET_WRITE_OUT(self):
        """Message constant 'SET_WRITE_OUT'."""
        return Metaclass_GpioConfigure_Request.__constants['SET_WRITE_OUT']

    @property
    def SET_READ_IN(self):
        """Message constant 'SET_READ_IN'."""
        return Metaclass_GpioConfigure_Request.__constants['SET_READ_IN']


class GpioConfigure_Request(metaclass=Metaclass_GpioConfigure_Request):
    """
    Message class 'GpioConfigure_Request'.

    Constants:
      RQ_STOP
      RQ_START
      RQ_ERRRESET
      RQ_SRVON
      RQ_SRVOFF
      BIT_TOP_MODE
      PACKET_MODE
      SET_READ_OUT
      SET_WRITE_OUT
      SET_READ_IN
    """

    __slots__ = [
        '_bitid',
        '_mode',
        '_bitdata',
        '_bitmask',
    ]

    _fields_and_field_types = {
        'bitid': 'uint16',
        'mode': 'string',
        'bitdata': 'uint16',
        'bitmask': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bitid = kwargs.get('bitid', int())
        self.mode = kwargs.get('mode', str())
        self.bitdata = kwargs.get('bitdata', int())
        self.bitmask = kwargs.get('bitmask', int())

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
        if self.mode != other.mode:
            return False
        if self.bitdata != other.bitdata:
            return False
        if self.bitmask != other.bitmask:
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
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GpioConfigure_Response(type):
    """Metaclass of message 'GpioConfigure_Response'."""

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
                'melfa_msgs.srv.GpioConfigure_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gpio_configure__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gpio_configure__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gpio_configure__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gpio_configure__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gpio_configure__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GpioConfigure_Response(metaclass=Metaclass_GpioConfigure_Response):
    """Message class 'GpioConfigure_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_GpioConfigure(type):
    """Metaclass of service 'GpioConfigure'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('melfa_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'melfa_msgs.srv.GpioConfigure')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__gpio_configure

            from melfa_msgs.srv import _gpio_configure
            if _gpio_configure.Metaclass_GpioConfigure_Request._TYPE_SUPPORT is None:
                _gpio_configure.Metaclass_GpioConfigure_Request.__import_type_support__()
            if _gpio_configure.Metaclass_GpioConfigure_Response._TYPE_SUPPORT is None:
                _gpio_configure.Metaclass_GpioConfigure_Response.__import_type_support__()


class GpioConfigure(metaclass=Metaclass_GpioConfigure):
    from melfa_msgs.srv._gpio_configure import GpioConfigure_Request as Request
    from melfa_msgs.srv._gpio_configure import GpioConfigure_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
