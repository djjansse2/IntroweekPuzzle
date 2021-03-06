# Install script for directory: /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0

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
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/libdbus-cxx.so.1.0.0"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/libdbus-cxx.so.1"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/libdbus-cxx.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdbus-cxx.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/dbus-cxx-0.11/dbus-cxx" TYPE FILE FILES
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/accumulators.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/callmessage.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/dbus-cxx-private.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/dispatcher.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/enums.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/error.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/errormessage.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/filedescriptor.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/forward_decls.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/headerlog.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/messageappenditerator.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/messagefilter.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/message.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/messagehandler.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/messageiterator.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/methodbase.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/objectpathhandler.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/path.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/pendingcall.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/pointer.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/returnmessage.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/signal_base.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/signalmessage.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/signal_proxy_base.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/signalreceiver.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/signature.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/signatureiterator.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/simplelogger_defs.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/simplelogger.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/timeout.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/types.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/utility.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/variant.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/watch.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/dbus-cxx-config.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/dbus_signal.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/interface.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/interfaceproxy.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/method.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/method_impl.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/methodproxybase.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/methodproxy.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/objectproxy.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/signal_proxy.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/connection.h"
    "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/object.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/dbus-cxx-0.11" TYPE FILE FILES "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx-1.0.pc")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
