# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack.dir/flags.make

CMakeFiles/stack.dir/stack.cpp.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/stack.cpp.o: ../stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stack.dir/stack.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stack.dir/stack.cpp.o -c "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel/stack.cpp"

CMakeFiles/stack.dir/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack.dir/stack.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel/stack.cpp" > CMakeFiles/stack.dir/stack.cpp.i

CMakeFiles/stack.dir/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack.dir/stack.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel/stack.cpp" -o CMakeFiles/stack.dir/stack.cpp.s

# Object files for target stack
stack_OBJECTS = \
"CMakeFiles/stack.dir/stack.cpp.o"

# External object files for target stack
stack_EXTERNAL_OBJECTS =

stack: CMakeFiles/stack.dir/stack.cpp.o
stack: CMakeFiles/stack.dir/build.make
stack: CMakeFiles/stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack.dir/build: stack

.PHONY : CMakeFiles/stack.dir/build

CMakeFiles/stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack.dir/clean

CMakeFiles/stack.dir/depend:
	cd "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel" "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel" "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel/cmake-build-debug" "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel/cmake-build-debug" "/Users/lizeping/OneDrive/CPP Learning/08 MemoryModel/cmake-build-debug/CMakeFiles/stack.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/stack.dir/depend
