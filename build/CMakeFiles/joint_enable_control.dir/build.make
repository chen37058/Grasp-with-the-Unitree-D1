# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/unitree/d1_sdk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/unitree/d1_sdk/build

# Include any dependencies generated for this target.
include CMakeFiles/joint_enable_control.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/joint_enable_control.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/joint_enable_control.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/joint_enable_control.dir/flags.make

CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.o: CMakeFiles/joint_enable_control.dir/flags.make
CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.o: /home/unitree/d1_sdk/src/joint_enable_control.cpp
CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.o: CMakeFiles/joint_enable_control.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/unitree/d1_sdk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.o -MF CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.o.d -o CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.o -c /home/unitree/d1_sdk/src/joint_enable_control.cpp

CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unitree/d1_sdk/src/joint_enable_control.cpp > CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.i

CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unitree/d1_sdk/src/joint_enable_control.cpp -o CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.s

CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.o: CMakeFiles/joint_enable_control.dir/flags.make
CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.o: /home/unitree/d1_sdk/src/msg/ArmString_.cpp
CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.o: CMakeFiles/joint_enable_control.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/unitree/d1_sdk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.o -MF CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.o.d -o CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.o -c /home/unitree/d1_sdk/src/msg/ArmString_.cpp

CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unitree/d1_sdk/src/msg/ArmString_.cpp > CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.i

CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unitree/d1_sdk/src/msg/ArmString_.cpp -o CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.s

# Object files for target joint_enable_control
joint_enable_control_OBJECTS = \
"CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.o" \
"CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.o"

# External object files for target joint_enable_control
joint_enable_control_EXTERNAL_OBJECTS =

joint_enable_control: CMakeFiles/joint_enable_control.dir/src/joint_enable_control.cpp.o
joint_enable_control: CMakeFiles/joint_enable_control.dir/src/msg/ArmString_.cpp.o
joint_enable_control: CMakeFiles/joint_enable_control.dir/build.make
joint_enable_control: CMakeFiles/joint_enable_control.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/unitree/d1_sdk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable joint_enable_control"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/joint_enable_control.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/joint_enable_control.dir/build: joint_enable_control
.PHONY : CMakeFiles/joint_enable_control.dir/build

CMakeFiles/joint_enable_control.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/joint_enable_control.dir/cmake_clean.cmake
.PHONY : CMakeFiles/joint_enable_control.dir/clean

CMakeFiles/joint_enable_control.dir/depend:
	cd /home/unitree/d1_sdk/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/unitree/d1_sdk /home/unitree/d1_sdk /home/unitree/d1_sdk/build /home/unitree/d1_sdk/build /home/unitree/d1_sdk/build/CMakeFiles/joint_enable_control.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/joint_enable_control.dir/depend

