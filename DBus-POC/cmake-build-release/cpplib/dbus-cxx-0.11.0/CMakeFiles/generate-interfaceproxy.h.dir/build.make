# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/max/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/max/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/max/Max/School/python/DBus-POC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/max/Max/School/python/DBus-POC/cmake-build-release

# Utility rule file for generate-interfaceproxy.h.

# Include the progress variables for this target.
include cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h.dir/progress.make

cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h: cpplib/dbus-cxx-0.11.0/dbus-cxx/interfaceproxy.h


cpplib/dbus-cxx-0.11.0/dbus-cxx/interfaceproxy.h:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/max/Max/School/python/DBus-POC/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating dbus-cxx/interfaceproxy.h"
	cd /home/max/Max/School/python/DBus-POC/cmake-build-release/cpplib/dbus-cxx-0.11.0 && m4 -I /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/dbus-cxx/interfaceproxy.h.m4 > /home/max/Max/School/python/DBus-POC/cmake-build-release/cpplib/dbus-cxx-0.11.0/dbus-cxx/interfaceproxy.h

generate-interfaceproxy.h: cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h
generate-interfaceproxy.h: cpplib/dbus-cxx-0.11.0/dbus-cxx/interfaceproxy.h
generate-interfaceproxy.h: cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h.dir/build.make

.PHONY : generate-interfaceproxy.h

# Rule to build all files generated by this target.
cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h.dir/build: generate-interfaceproxy.h

.PHONY : cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h.dir/build

cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h.dir/clean:
	cd /home/max/Max/School/python/DBus-POC/cmake-build-release/cpplib/dbus-cxx-0.11.0 && $(CMAKE_COMMAND) -P CMakeFiles/generate-interfaceproxy.h.dir/cmake_clean.cmake
.PHONY : cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h.dir/clean

cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h.dir/depend:
	cd /home/max/Max/School/python/DBus-POC/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/max/Max/School/python/DBus-POC /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0 /home/max/Max/School/python/DBus-POC/cmake-build-release /home/max/Max/School/python/DBus-POC/cmake-build-release/cpplib/dbus-cxx-0.11.0 /home/max/Max/School/python/DBus-POC/cmake-build-release/cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-interfaceproxy.h.dir/depend

