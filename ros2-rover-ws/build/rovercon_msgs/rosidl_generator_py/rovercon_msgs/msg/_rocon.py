# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rovercon_msgs:msg/Rocon.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rocon(type):
    """Metaclass of message 'Rocon'."""

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
            module = import_type_support('rovercon_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rovercon_msgs.msg.Rocon')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rocon
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rocon
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rocon
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rocon
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rocon

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rocon(metaclass=Metaclass_Rocon):
    """Message class 'Rocon'."""

    __slots__ = [
        '_fdr_msg',
        '_ro_ctrl_msg',
        '_spd_msg',
        '_bdr_msg',
    ]

    _fields_and_field_types = {
        'fdr_msg': 'uint8',
        'ro_ctrl_msg': 'float',
        'spd_msg': 'uint8',
        'bdr_msg': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fdr_msg = kwargs.get('fdr_msg', int())
        self.ro_ctrl_msg = kwargs.get('ro_ctrl_msg', float())
        self.spd_msg = kwargs.get('spd_msg', int())
        self.bdr_msg = kwargs.get('bdr_msg', int())

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
        if self.fdr_msg != other.fdr_msg:
            return False
        if self.ro_ctrl_msg != other.ro_ctrl_msg:
            return False
        if self.spd_msg != other.spd_msg:
            return False
        if self.bdr_msg != other.bdr_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fdr_msg(self):
        """Message field 'fdr_msg'."""
        return self._fdr_msg

    @fdr_msg.setter
    def fdr_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fdr_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fdr_msg' field must be an unsigned integer in [0, 255]"
        self._fdr_msg = value

    @builtins.property
    def ro_ctrl_msg(self):
        """Message field 'ro_ctrl_msg'."""
        return self._ro_ctrl_msg

    @ro_ctrl_msg.setter
    def ro_ctrl_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ro_ctrl_msg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ro_ctrl_msg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ro_ctrl_msg = value

    @builtins.property
    def spd_msg(self):
        """Message field 'spd_msg'."""
        return self._spd_msg

    @spd_msg.setter
    def spd_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spd_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'spd_msg' field must be an unsigned integer in [0, 255]"
        self._spd_msg = value

    @builtins.property
    def bdr_msg(self):
        """Message field 'bdr_msg'."""
        return self._bdr_msg

    @bdr_msg.setter
    def bdr_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bdr_msg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bdr_msg' field must be an unsigned integer in [0, 255]"
        self._bdr_msg = value
