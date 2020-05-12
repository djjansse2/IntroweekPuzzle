#!/usr/bin/env python3

import dbus.mainloop.glib
import dbus
import dbus.service
from gi.repository import GLib


class DbusException(dbus.DBusException):
    _dbus_error_name = 'com.example.DemoException'


class DbusObject(dbus.service.Object):

    def __init__(self, bus, path):
        dbus.service.Object.__init__(self, bus, path)
        self.value = 0

    @dbus.service.method("com.example.SampleInterface",
                         in_signature='s', out_signature='s')
    def HelloWorld(self, hello_message):
        print(str(hello_message))
        return "Hello from dbus_service.py"

    @dbus.service.method("com.example.SampleInterface",
                         in_signature='', out_signature='')
    def RaiseException(self):
        raise DbusException('The RaiseException method does what you might '
                            'expect')

    @dbus.service.method("com.example.SampleInterface",
                         in_signature='', out_signature='a{ss}')
    def getDict(self):
        return {"first": "Hello Dict", "second": " from dbus_service.py"}

    @dbus.service.method("com.example.SampleInterface",
                         in_signature='x', out_signature='')
    def increaseValue(self, value):
        self.value = self.value + value

    @dbus.service.method("com.example.SampleInterface",
                         in_signature='', out_signature='x')
    def getValue(self):
        return self.value


if __name__ == '__main__':
    dbus.mainloop.glib.DBusGMainLoop(set_as_default=True)

    system_bus = dbus.SystemBus()
    name = dbus.service.BusName("com.example.SampleService", system_bus)
    object = DbusObject(system_bus, '/DbusObject')

    mainloop = GLib.MainLoop()
    print("Running example service.")
    mainloop.run()
