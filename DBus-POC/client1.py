#!/usr/bin/env python3

import dbus

dbus_client = dbus.SystemBus()

test_object = dbus_client.get_object('com.example.SampleService', '/DbusObject')

print(test_object.getValue())
test_object.increaseValue(5)
print(test_object.getValue())

