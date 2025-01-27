# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rovercon_msgs:msg/SubRocon.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SubRocon(type):
    """Metaclass of message 'SubRocon'."""

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
                'rovercon_msgs.msg.SubRocon')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sub_rocon
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sub_rocon
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sub_rocon
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sub_rocon
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sub_rocon

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SubRocon(metaclass=Metaclass_SubRocon):
    """Message class 'SubRocon'."""

    __slots__ = [
        '_roctrl_msg1',
        '_roctrl_msg2',
        '_spd_msg',
        '_b_dr_msg',
    ]

    _fields_and_field_types = {
        'roctrl_msg1': 'uint16',
        'roctrl_msg2': 'float',
        'spd_msg': 'uint16',
        'b_dr_msg': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.roctrl_msg1 = kwargs.get('roctrl_msg1', int())
        self.roctrl_msg2 = kwargs.get('roctrl_msg2', float())
        self.spd_msg = kwargs.get('spd_msg', int())
        self.b_dr_msg = kwargs.get('b_dr_msg', int())

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
        if self.roctrl_msg1 != other.roctrl_msg1:
            return False
        if self.roctrl_msg2 != other.roctrl_msg2:
            return False
        if self.spd_msg != other.spd_msg:
            return False
        if self.b_dr_msg != other.b_dr_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def roctrl_msg1(self):
        """Message field 'roctrl_msg1'."""
        return self._roctrl_msg1

    @roctrl_msg1.setter
    def roctrl_msg1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roctrl_msg1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'roctrl_msg1' field must be an unsigned integer in [0, 65535]"
        self._roctrl_msg1 = value

    @builtins.property
    def roctrl_msg2(self):
        """Message field 'roctrl_msg2'."""
        return self._roctrl_msg2

    @roctrl_msg2.setter
    def roctrl_msg2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roctrl_msg2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roctrl_msg2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roctrl_msg2 = value

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
            assert value >= 0 and value < 65536, \
                "The 'spd_msg' field must be an unsigned integer in [0, 65535]"
        self._spd_msg = value

    @builtins.property
    def b_dr_msg(self):
        """Message field 'b_dr_msg'."""
        return self._b_dr_msg

    @b_dr_msg.setter
    def b_dr_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_dr_msg' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'b_dr_msg' field must be an unsigned integer in [0, 65535]"
        self._b_dr_msg = value
