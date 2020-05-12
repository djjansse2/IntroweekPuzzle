# Install script for directory: /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/libdbus-cxx.so.1.0.0"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/libdbus-cxx.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so.1.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/libdbus-cxx.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/dbus-cxx-0.11/dbus-cxx" TYPE FILE FILES
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/accumulators.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/callmessage.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/dbus-cxx-private.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/dispatcher.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/enums.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/error.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/errormessage.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/filedescriptor.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/forward_decls.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/headerlog.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/messageappenditerator.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/messagefilter.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/message.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/messagehandler.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/messageiterator.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/methodbase.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/objectpathhandler.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/path.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/pendingcall.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/pointer.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/returnmessage.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/signal_base.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/signalmessage.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/signal_proxy_base.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/signalreceiver.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/signature.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/signatureiterator.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/simplelogger_defs.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/simplelogger.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/timeout.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/types.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/utility.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/variant.h"
    "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/watch.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/dbus-cxx-config.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/dbus_signal.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/interface.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/interfaceproxy.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/method.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/method_impl.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/methodproxybase.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/methodproxy.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/objectproxy.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/signal_proxy.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/connection.h"
    "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/cpplib/dbus-cxx-0.11.0/dbus-cxx/object.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/dbus-cxx-0.11" TYPE FILE FILES "/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/max/Max/School/python/DBus-POC/cmake-build-debug-gcc/dbus-cxx-1.0.pc")
endif()

