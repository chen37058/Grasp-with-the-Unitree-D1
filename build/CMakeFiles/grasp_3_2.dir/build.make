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
include CMakeFiles/grasp_3_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/grasp_3_2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/grasp_3_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/grasp_3_2.dir/flags.make

CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.o: CMakeFiles/grasp_3_2.dir/flags.make
CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.o: /home/unitree/d1_sdk/src/grasp_3_2.cpp
CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.o: CMakeFiles/grasp_3_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/unitree/d1_sdk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.o -MF CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.o.d -o CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.o -c /home/unitree/d1_sdk/src/grasp_3_2.cpp

CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unitree/d1_sdk/src/grasp_3_2.cpp > CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.i

CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unitree/d1_sdk/src/grasp_3_2.cpp -o CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.s

CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.o: CMakeFiles/grasp_3_2.dir/flags.make
CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.o: /home/unitree/d1_sdk/src/msg/ArmString_.cpp
CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.o: CMakeFiles/grasp_3_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/unitree/d1_sdk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.o -MF CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.o.d -o CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.o -c /home/unitree/d1_sdk/src/msg/ArmString_.cpp

CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/unitree/d1_sdk/src/msg/ArmString_.cpp > CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.i

CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/unitree/d1_sdk/src/msg/ArmString_.cpp -o CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.s

# Object files for target grasp_3_2
grasp_3_2_OBJECTS = \
"CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.o" \
"CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.o"

# External object files for target grasp_3_2
grasp_3_2_EXTERNAL_OBJECTS =

libgrasp_3_2.so: CMakeFiles/grasp_3_2.dir/src/grasp_3_2.cpp.o
libgrasp_3_2.so: CMakeFiles/grasp_3_2.dir/src/msg/ArmString_.cpp.o
libgrasp_3_2.so: CMakeFiles/grasp_3_2.dir/build.make
libgrasp_3_2.so: CMakeFiles/grasp_3_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/unitree/d1_sdk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libgrasp_3_2.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/grasp_3_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/grasp_3_2.dir/build: libgrasp_3_2.so
.PHONY : CMakeFiles/grasp_3_2.dir/build

CMakeFiles/grasp_3_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/grasp_3_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/grasp_3_2.dir/clean

CMakeFiles/grasp_3_2.dir/depend:
	cd /home/unitree/d1_sdk/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/unitree/d1_sdk /home/unitree/d1_sdk /home/unitree/d1_sdk/build /home/unitree/d1_sdk/build /home/unitree/d1_sdk/build/CMakeFiles/grasp_3_2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/grasp_3_2.dir/depend

