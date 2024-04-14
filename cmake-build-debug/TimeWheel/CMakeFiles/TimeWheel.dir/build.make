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
include TimeWheel/CMakeFiles/TimeWheel.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include TimeWheel/CMakeFiles/TimeWheel.dir/compiler_depend.make

# Include the progress variables for this target.
include TimeWheel/CMakeFiles/TimeWheel.dir/progress.make

# Include the compile flags for this target's objects.
include TimeWheel/CMakeFiles/TimeWheel.dir/flags.make

TimeWheel/CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.o: TimeWheel/CMakeFiles/TimeWheel.dir/flags.make
TimeWheel/CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.o: ../TimeWheel/src/TimeWheel.cpp
TimeWheel/CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.o: TimeWheel/CMakeFiles/TimeWheel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object TimeWheel/CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.o"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT TimeWheel/CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.o -MF CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.o.d -o CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.o -c /home/rafayel/thesis/Simulator/TimeWheel/src/TimeWheel.cpp

TimeWheel/CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.i"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafayel/thesis/Simulator/TimeWheel/src/TimeWheel.cpp > CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.i

TimeWheel/CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.s"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafayel/thesis/Simulator/TimeWheel/src/TimeWheel.cpp -o CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.s

TimeWheel/CMakeFiles/TimeWheel.dir/src/Event.cpp.o: TimeWheel/CMakeFiles/TimeWheel.dir/flags.make
TimeWheel/CMakeFiles/TimeWheel.dir/src/Event.cpp.o: ../TimeWheel/src/Event.cpp
TimeWheel/CMakeFiles/TimeWheel.dir/src/Event.cpp.o: TimeWheel/CMakeFiles/TimeWheel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object TimeWheel/CMakeFiles/TimeWheel.dir/src/Event.cpp.o"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT TimeWheel/CMakeFiles/TimeWheel.dir/src/Event.cpp.o -MF CMakeFiles/TimeWheel.dir/src/Event.cpp.o.d -o CMakeFiles/TimeWheel.dir/src/Event.cpp.o -c /home/rafayel/thesis/Simulator/TimeWheel/src/Event.cpp

TimeWheel/CMakeFiles/TimeWheel.dir/src/Event.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeWheel.dir/src/Event.cpp.i"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafayel/thesis/Simulator/TimeWheel/src/Event.cpp > CMakeFiles/TimeWheel.dir/src/Event.cpp.i

TimeWheel/CMakeFiles/TimeWheel.dir/src/Event.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeWheel.dir/src/Event.cpp.s"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafayel/thesis/Simulator/TimeWheel/src/Event.cpp -o CMakeFiles/TimeWheel.dir/src/Event.cpp.s

TimeWheel/CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.o: TimeWheel/CMakeFiles/TimeWheel.dir/flags.make
TimeWheel/CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.o: ../TimeWheel/src/CircuitReader.cpp
TimeWheel/CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.o: TimeWheel/CMakeFiles/TimeWheel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object TimeWheel/CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.o"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT TimeWheel/CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.o -MF CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.o.d -o CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.o -c /home/rafayel/thesis/Simulator/TimeWheel/src/CircuitReader.cpp

TimeWheel/CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.i"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafayel/thesis/Simulator/TimeWheel/src/CircuitReader.cpp > CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.i

TimeWheel/CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.s"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafayel/thesis/Simulator/TimeWheel/src/CircuitReader.cpp -o CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.s

# Object files for target TimeWheel
TimeWheel_OBJECTS = \
"CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.o" \
"CMakeFiles/TimeWheel.dir/src/Event.cpp.o" \
"CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.o"

# External object files for target TimeWheel
TimeWheel_EXTERNAL_OBJECTS =

TimeWheel/libTimeWheel.a: TimeWheel/CMakeFiles/TimeWheel.dir/src/TimeWheel.cpp.o
TimeWheel/libTimeWheel.a: TimeWheel/CMakeFiles/TimeWheel.dir/src/Event.cpp.o
TimeWheel/libTimeWheel.a: TimeWheel/CMakeFiles/TimeWheel.dir/src/CircuitReader.cpp.o
TimeWheel/libTimeWheel.a: TimeWheel/CMakeFiles/TimeWheel.dir/build.make
TimeWheel/libTimeWheel.a: TimeWheel/CMakeFiles/TimeWheel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafayel/thesis/Simulator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libTimeWheel.a"
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && $(CMAKE_COMMAND) -P CMakeFiles/TimeWheel.dir/cmake_clean_target.cmake
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TimeWheel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
TimeWheel/CMakeFiles/TimeWheel.dir/build: TimeWheel/libTimeWheel.a
.PHONY : TimeWheel/CMakeFiles/TimeWheel.dir/build

TimeWheel/CMakeFiles/TimeWheel.dir/clean:
	cd /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel && $(CMAKE_COMMAND) -P CMakeFiles/TimeWheel.dir/cmake_clean.cmake
.PHONY : TimeWheel/CMakeFiles/TimeWheel.dir/clean

TimeWheel/CMakeFiles/TimeWheel.dir/depend:
	cd /home/rafayel/thesis/Simulator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafayel/thesis/Simulator /home/rafayel/thesis/Simulator/TimeWheel /home/rafayel/thesis/Simulator/cmake-build-debug /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel /home/rafayel/thesis/Simulator/cmake-build-debug/TimeWheel/CMakeFiles/TimeWheel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : TimeWheel/CMakeFiles/TimeWheel.dir/depend

