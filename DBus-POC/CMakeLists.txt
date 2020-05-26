cmake_minimum_required(VERSION 3.15)
project(DBus_POC)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "/home/max/Max/School/python/DBus-POC")

find_package(PkgConfig)
pkg_check_modules(DBUS REQUIRED "dbus-cxx-1.0")

add_executable(DBus_POC
        client3.cpp)

target_link_libraries(DBus_POC ${DBUS_LIBRARIES})
include_directories(${DBUS_INCLUDE_DIRS})
target_compile_options(DBus_POC PUBLIC ${DBUS_CFLAGS_OTHER})

