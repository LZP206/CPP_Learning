# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/lizeping/Documents/CPP Learning/02 Structure"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug"

# Include any dependencies generated for this target.
include Loop_Structure/CMakeFiles/Loop.dir/depend.make

# Include the progress variables for this target.
include Loop_Structure/CMakeFiles/Loop.dir/progress.make

# Include the compile flags for this target's objects.
include Loop_Structure/CMakeFiles/Loop.dir/flags.make

Loop_Structure/CMakeFiles/Loop.dir/Loop.cpp.o: Loop_Structure/CMakeFiles/Loop.dir/flags.make
Loop_Structure/CMakeFiles/Loop.dir/Loop.cpp.o: ../Loop_Structure/Loop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Loop_Structure/CMakeFiles/Loop.dir/Loop.cpp.o"
	cd "/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug/Loop_Structure" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Loop.dir/Loop.cpp.o -c "/Users/lizeping/Documents/CPP Learning/02 Structure/Loop_Structure/Loop.cpp"

Loop_Structure/CMakeFiles/Loop.dir/Loop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Loop.dir/Loop.cpp.i"
	cd "/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug/Loop_Structure" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/lizeping/Documents/CPP Learning/02 Structure/Loop_Structure/Loop.cpp" > CMakeFiles/Loop.dir/Loop.cpp.i

Loop_Structure/CMakeFiles/Loop.dir/Loop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Loop.dir/Loop.cpp.s"
	cd "/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug/Loop_Structure" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/lizeping/Documents/CPP Learning/02 Structure/Loop_Structure/Loop.cpp" -o CMakeFiles/Loop.dir/Loop.cpp.s

# Object files for target Loop
Loop_OBJECTS = \
"CMakeFiles/Loop.dir/Loop.cpp.o"

# External object files for target Loop
Loop_EXTERNAL_OBJECTS =

Loop_Structure/Loop: Loop_Structure/CMakeFiles/Loop.dir/Loop.cpp.o
Loop_Structure/Loop: Loop_Structure/CMakeFiles/Loop.dir/build.make
Loop_Structure/Loop: Loop_Structure/CMakeFiles/Loop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Loop"
	cd "/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug/Loop_Structure" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Loop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Loop_Structure/CMakeFiles/Loop.dir/build: Loop_Structure/Loop

.PHONY : Loop_Structure/CMakeFiles/Loop.dir/build

Loop_Structure/CMakeFiles/Loop.dir/clean:
	cd "/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug/Loop_Structure" && $(CMAKE_COMMAND) -P CMakeFiles/Loop.dir/cmake_clean.cmake
.PHONY : Loop_Structure/CMakeFiles/Loop.dir/clean

Loop_Structure/CMakeFiles/Loop.dir/depend:
	cd "/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/lizeping/Documents/CPP Learning/02 Structure" "/Users/lizeping/Documents/CPP Learning/02 Structure/Loop_Structure" "/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug" "/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug/Loop_Structure" "/Users/lizeping/Documents/CPP Learning/02 Structure/cmake-build-debug/Loop_Structure/CMakeFiles/Loop.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : Loop_Structure/CMakeFiles/Loop.dir/depend

