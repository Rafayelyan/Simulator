# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rafayel/thesis/Simulator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rafayel/thesis/Simulator/cmake-build-debug

# Include any dependencies generated for this target.
include logic_elements/CMakeFiles/logic_elements.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include logic_elements/CMakeFiles/logic_elements.dir/compiler_depend.make

# Include the progress variables for this target.
include logic_elements/CMakeFiles/logic_elements.dir/progress.make

# Include the compile flags for this target's objects.
include logic_elements/CMakeFiles/logic_elements.dir/flags.make

logic_elements/CMakeFiles/logic_elements.dir/AndGate.cpp.o: logic_elements/CMakeFiles/logic_elements.dir/flags.make
logic_elements/CMakeFiles/logic_elements.dir/AndGate.cpp.o: ../logic_elements/AndGate.cpp
logic_elements/CMakeFiles/logic_elements.dir/AndGate.cpp.o: logic_elements/CMakeFiles/logic_elements.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object logic_elements/CMakeFiles/logic_elements.dir/AndGate.cpp.o"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT logic_elements/CMakeFiles/logic_elements.dir/AndGate.cpp.o -MF CMakeFiles/logic_elements.dir/AndGate.cpp.o.d -o CMakeFiles/logic_elements.dir/AndGate.cpp.o -c /home/rafayel/thesis/Simulator/logic_elements/AndGate.cpp

logic_elements/CMakeFiles/logic_elements.dir/AndGate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/logic_elements.dir/AndGate.cpp.i"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafayel/thesis/Simulator/logic_elements/AndGate.cpp > CMakeFiles/logic_elements.dir/AndGate.cpp.i

logic_elements/CMakeFiles/logic_elements.dir/AndGate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/logic_elements.dir/AndGate.cpp.s"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafayel/thesis/Simulator/logic_elements/AndGate.cpp -o CMakeFiles/logic_elements.dir/AndGate.cpp.s

logic_elements/CMakeFiles/logic_elements.dir/InverterGate.cpp.o: logic_elements/CMakeFiles/logic_elements.dir/flags.make
logic_elements/CMakeFiles/logic_elements.dir/InverterGate.cpp.o: ../logic_elements/InverterGate.cpp
logic_elements/CMakeFiles/logic_elements.dir/InverterGate.cpp.o: logic_elements/CMakeFiles/logic_elements.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object logic_elements/CMakeFiles/logic_elements.dir/InverterGate.cpp.o"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT logic_elements/CMakeFiles/logic_elements.dir/InverterGate.cpp.o -MF CMakeFiles/logic_elements.dir/InverterGate.cpp.o.d -o CMakeFiles/logic_elements.dir/InverterGate.cpp.o -c /home/rafayel/thesis/Simulator/logic_elements/InverterGate.cpp

logic_elements/CMakeFiles/logic_elements.dir/InverterGate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/logic_elements.dir/InverterGate.cpp.i"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafayel/thesis/Simulator/logic_elements/InverterGate.cpp > CMakeFiles/logic_elements.dir/InverterGate.cpp.i

logic_elements/CMakeFiles/logic_elements.dir/InverterGate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/logic_elements.dir/InverterGate.cpp.s"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafayel/thesis/Simulator/logic_elements/InverterGate.cpp -o CMakeFiles/logic_elements.dir/InverterGate.cpp.s

logic_elements/CMakeFiles/logic_elements.dir/OrGate.cpp.o: logic_elements/CMakeFiles/logic_elements.dir/flags.make
logic_elements/CMakeFiles/logic_elements.dir/OrGate.cpp.o: ../logic_elements/OrGate.cpp
logic_elements/CMakeFiles/logic_elements.dir/OrGate.cpp.o: logic_elements/CMakeFiles/logic_elements.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object logic_elements/CMakeFiles/logic_elements.dir/OrGate.cpp.o"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT logic_elements/CMakeFiles/logic_elements.dir/OrGate.cpp.o -MF CMakeFiles/logic_elements.dir/OrGate.cpp.o.d -o CMakeFiles/logic_elements.dir/OrGate.cpp.o -c /home/rafayel/thesis/Simulator/logic_elements/OrGate.cpp

logic_elements/CMakeFiles/logic_elements.dir/OrGate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/logic_elements.dir/OrGate.cpp.i"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafayel/thesis/Simulator/logic_elements/OrGate.cpp > CMakeFiles/logic_elements.dir/OrGate.cpp.i

logic_elements/CMakeFiles/logic_elements.dir/OrGate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/logic_elements.dir/OrGate.cpp.s"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafayel/thesis/Simulator/logic_elements/OrGate.cpp -o CMakeFiles/logic_elements.dir/OrGate.cpp.s

logic_elements/CMakeFiles/logic_elements.dir/Wire.cpp.o: logic_elements/CMakeFiles/logic_elements.dir/flags.make
logic_elements/CMakeFiles/logic_elements.dir/Wire.cpp.o: ../logic_elements/Wire.cpp
logic_elements/CMakeFiles/logic_elements.dir/Wire.cpp.o: logic_elements/CMakeFiles/logic_elements.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object logic_elements/CMakeFiles/logic_elements.dir/Wire.cpp.o"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT logic_elements/CMakeFiles/logic_elements.dir/Wire.cpp.o -MF CMakeFiles/logic_elements.dir/Wire.cpp.o.d -o CMakeFiles/logic_elements.dir/Wire.cpp.o -c /home/rafayel/thesis/Simulator/logic_elements/Wire.cpp

logic_elements/CMakeFiles/logic_elements.dir/Wire.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/logic_elements.dir/Wire.cpp.i"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafayel/thesis/Simulator/logic_elements/Wire.cpp > CMakeFiles/logic_elements.dir/Wire.cpp.i

logic_elements/CMakeFiles/logic_elements.dir/Wire.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/logic_elements.dir/Wire.cpp.s"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafayel/thesis/Simulator/logic_elements/Wire.cpp -o CMakeFiles/logic_elements.dir/Wire.cpp.s

# Object files for target logic_elements
logic_elements_OBJECTS = \
"CMakeFiles/logic_elements.dir/AndGate.cpp.o" \
"CMakeFiles/logic_elements.dir/InverterGate.cpp.o" \
"CMakeFiles/logic_elements.dir/OrGate.cpp.o" \
"CMakeFiles/logic_elements.dir/Wire.cpp.o"

# External object files for target logic_elements
logic_elements_EXTERNAL_OBJECTS =

logic_elements/liblogic_elements.a: logic_elements/CMakeFiles/logic_elements.dir/AndGate.cpp.o
logic_elements/liblogic_elements.a: logic_elements/CMakeFiles/logic_elements.dir/InverterGate.cpp.o
logic_elements/liblogic_elements.a: logic_elements/CMakeFiles/logic_elements.dir/OrGate.cpp.o
logic_elements/liblogic_elements.a: logic_elements/CMakeFiles/logic_elements.dir/Wire.cpp.o
logic_elements/liblogic_elements.a: logic_elements/CMakeFiles/logic_elements.dir/build.make
logic_elements/liblogic_elements.a: logic_elements/CMakeFiles/logic_elements.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library liblogic_elements.a"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && $(CMAKE_COMMAND) -P CMakeFiles/logic_elements.dir/cmake_clean_target.cmake
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/logic_elements.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
logic_elements/CMakeFiles/logic_elements.dir/build: logic_elements/liblogic_elements.a
.PHONY : logic_elements/CMakeFiles/logic_elements.dir/build

logic_elements/CMakeFiles/logic_elements.dir/clean:
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements && $(CMAKE_COMMAND) -P CMakeFiles/logic_elements.dir/cmake_clean.cmake
.PHONY : logic_elements/CMakeFiles/logic_elements.dir/clean

logic_elements/CMakeFiles/logic_elements.dir/depend:
	cd /home/rafayel/thesis/Simulator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafayel/thesis/Simulator /home/rafayel/thesis/Simulator/logic_elements /home/rafayel/thesis/Simulator/cmake-build-debug /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements /home/rafayel/thesis/Simulator/cmake-build-debug/logic_elements/CMakeFiles/logic_elements.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : logic_elements/CMakeFiles/logic_elements.dir/depend

