# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0

# Utility rule file for generate-methodproxybase.h.

# Include the progress variables for this target.
include CMakeFiles/generate-methodproxybase.h.dir/progress.make

CMakeFiles/generate-methodproxybase.h: dbus-cxx/methodproxybase.h


dbus-cxx/methodproxybase.h:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating dbus-cxx/methodproxybase.h"
	m4 -I /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/methodproxybase.h.m4 > /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/dbus-cxx/methodproxybase.h

generate-methodproxybase.h: CMakeFiles/generate-methodproxybase.h
generate-methodproxybase.h: dbus-cxx/methodproxybase.h
generate-methodproxybase.h: CMakeFiles/generate-methodproxybase.h.dir/build.make

.PHONY : generate-methodproxybase.h

# Rule to build all files generated by this target.
CMakeFiles/generate-methodproxybase.h.dir/build: generate-methodproxybase.h

.PHONY : CMakeFiles/generate-methodproxybase.h.dir/build

CMakeFiles/generate-methodproxybase.h.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/generate-methodproxybase.h.dir/cmake_clean.cmake
.PHONY : CMakeFiles/generate-methodproxybase.h.dir/clean

CMakeFiles/generate-methodproxybase.h.dir/depend:
	cd /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0 /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0 /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0 /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0 /home/dion/AutomationGameController/I2C_bus/cpplib/dbus-cxx-0.11.0/CMakeFiles/generate-methodproxybase.h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/generate-methodproxybase.h.dir/depend

