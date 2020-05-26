cmake_minimum_required(VERSION 3.15)
project(DBus_POC)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "/home/dion/AutomationGameController/I2C_bus")

find_package(PkgConfig)
pkg_check_modules(DBUS REQUIRED "dbus-cxx-1.0")

add_executable(i2c_controller Source.cpp I2C_Controller.cpp)

target_link_libraries(i2c_controller ${DBUS_LIBRARIES})
include_directories(${DBUS_INCLUDE_DIRS})
target_compile_options(i2c_controller PUBLIC ${DBUS_CFLAGS_OTHER})

