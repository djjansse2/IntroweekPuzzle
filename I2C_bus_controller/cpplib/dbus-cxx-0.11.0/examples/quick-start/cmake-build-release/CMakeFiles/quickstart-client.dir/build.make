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
CMAKE_SOURCE_DIR = /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start/cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/quickstart-client.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/quickstart-client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/quickstart-client.dir/flags.make

CMakeFiles/quickstart-client.dir/quickstart_client_0.o: CMakeFiles/quickstart-client.dir/flags.make
CMakeFiles/quickstart-client.dir/quickstart_client_0.o: ../quickstart_client_0.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/quickstart-client.dir/quickstart_client_0.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/quickstart-client.dir/quickstart_client_0.o -c /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start/quickstart_client_0.cpp

CMakeFiles/quickstart-client.dir/quickstart_client_0.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quickstart-client.dir/quickstart_client_0.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start/quickstart_client_0.cpp > CMakeFiles/quickstart-client.dir/quickstart_client_0.i

CMakeFiles/quickstart-client.dir/quickstart_client_0.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quickstart-client.dir/quickstart_client_0.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start/quickstart_client_0.cpp -o CMakeFiles/quickstart-client.dir/quickstart_client_0.s

# Object files for target quickstart-client
quickstart__client_OBJECTS = \
"CMakeFiles/quickstart-client.dir/quickstart_client_0.o"

# External object files for target quickstart-client
quickstart__client_EXTERNAL_OBJECTS =

quickstart-client: CMakeFiles/quickstart-client.dir/quickstart_client_0.o
quickstart-client: CMakeFiles/quickstart-client.dir/build.make
quickstart-client: CMakeFiles/quickstart-client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable quickstart-client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/quickstart-client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/quickstart-client.dir/build: quickstart-client

.PHONY : CMakeFiles/quickstart-client.dir/build

CMakeFiles/quickstart-client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/quickstart-client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/quickstart-client.dir/clean

CMakeFiles/quickstart-client.dir/depend:
	cd /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start/cmake-build-release /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start/cmake-build-release /home/max/Max/School/python/DBus-POC/cpplib/dbus-cxx-0.11.0/examples/quick-start/cmake-build-release/CMakeFiles/quickstart-client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/quickstart-client.dir/depend

