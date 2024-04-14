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
include CMakeFiles/simulator_logic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/simulator_logic.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/simulator_logic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simulator_logic.dir/flags.make

CMakeFiles/simulator_logic.dir/simulator.cpp.o: CMakeFiles/simulator_logic.dir/flags.make
CMakeFiles/simulator_logic.dir/simulator.cpp.o: ../simulator.cpp
CMakeFiles/simulator_logic.dir/simulator.cpp.o: CMakeFiles/simulator_logic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simulator_logic.dir/simulator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/simulator_logic.dir/simulator.cpp.o -MF CMakeFiles/simulator_logic.dir/simulator.cpp.o.d -o CMakeFiles/simulator_logic.dir/simulator.cpp.o -c /home/rafayel/thesis/Simulator/simulator.cpp

CMakeFiles/simulator_logic.dir/simulator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simulator_logic.dir/simulator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafayel/thesis/Simulator/simulator.cpp > CMakeFiles/simulator_logic.dir/simulator.cpp.i

CMakeFiles/simulator_logic.dir/simulator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simulator_logic.dir/simulator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafayel/thesis/Simulator/simulator.cpp -o CMakeFiles/simulator_logic.dir/simulator.cpp.s

# Object files for target simulator_logic
simulator_logic_OBJECTS = \
"CMakeFiles/simulator_logic.dir/simulator.cpp.o"

# External object files for target simulator_logic
simulator_logic_EXTERNAL_OBJECTS =

simulator_logic: CMakeFiles/simulator_logic.dir/simulator.cpp.o
simulator_logic: CMakeFiles/simulator_logic.dir/build.make
simulator_logic: logic_elements/liblogic_elements.a
simulator_logic: TimeWheel/libTimeWheel.a
simulator_logic: CircuitParser/libCircuitParser.a
simulator_logic: ../CircuitParser/lib/parser-verilog/verilog_parser_lib.a
simulator_logic: CMakeFiles/simulator_logic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable simulator_logic"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simulator_logic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simulator_logic.dir/build: simulator_logic
.PHONY : CMakeFiles/simulator_logic.dir/build

CMakeFiles/simulator_logic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simulator_logic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simulator_logic.dir/clean

CMakeFiles/simulator_logic.dir/depend:
	cd /home/rafayel/thesis/Simulator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafayel/thesis/Simulator /home/rafayel/thesis/Simulator /home/rafayel/thesis/Simulator/cmake-build-debug /home/rafayel/thesis/Simulator/cmake-build-debug /home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles/simulator_logic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simulator_logic.dir/depend

