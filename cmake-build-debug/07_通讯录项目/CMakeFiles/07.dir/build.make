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
CMAKE_SOURCE_DIR = /Users/lizeping/CPP_Learning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lizeping/CPP_Learning/cmake-build-debug

# Include any dependencies generated for this target.
include 07_通讯录项目/CMakeFiles/07.dir/depend.make

# Include the progress variables for this target.
include 07_通讯录项目/CMakeFiles/07.dir/progress.make

# Include the compile flags for this target's objects.
include 07_通讯录项目/CMakeFiles/07.dir/flags.make

07_通讯录项目/CMakeFiles/07.dir/main.cpp.o: 07_通讯录项目/CMakeFiles/07.dir/flags.make
07_通讯录项目/CMakeFiles/07.dir/main.cpp.o: ../07_通讯录项目/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lizeping/CPP_Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 07_通讯录项目/CMakeFiles/07.dir/main.cpp.o"
	cd /Users/lizeping/CPP_Learning/cmake-build-debug/07_通讯录项目 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/07.dir/main.cpp.o -c /Users/lizeping/CPP_Learning/07_通讯录项目/main.cpp

07_通讯录项目/CMakeFiles/07.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/07.dir/main.cpp.i"
	cd /Users/lizeping/CPP_Learning/cmake-build-debug/07_通讯录项目 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lizeping/CPP_Learning/07_通讯录项目/main.cpp > CMakeFiles/07.dir/main.cpp.i

07_通讯录项目/CMakeFiles/07.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/07.dir/main.cpp.s"
	cd /Users/lizeping/CPP_Learning/cmake-build-debug/07_通讯录项目 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lizeping/CPP_Learning/07_通讯录项目/main.cpp -o CMakeFiles/07.dir/main.cpp.s

# Object files for target 07
07_OBJECTS = \
"CMakeFiles/07.dir/main.cpp.o"

# External object files for target 07
07_EXTERNAL_OBJECTS =

07_通讯录项目/07: 07_通讯录项目/CMakeFiles/07.dir/main.cpp.o
07_通讯录项目/07: 07_通讯录项目/CMakeFiles/07.dir/build.make
07_通讯录项目/07: 07_通讯录项目/CMakeFiles/07.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lizeping/CPP_Learning/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 07"
	cd /Users/lizeping/CPP_Learning/cmake-build-debug/07_通讯录项目 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/07.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
07_通讯录项目/CMakeFiles/07.dir/build: 07_通讯录项目/07

.PHONY : 07_通讯录项目/CMakeFiles/07.dir/build

07_通讯录项目/CMakeFiles/07.dir/clean:
	cd /Users/lizeping/CPP_Learning/cmake-build-debug/07_通讯录项目 && $(CMAKE_COMMAND) -P CMakeFiles/07.dir/cmake_clean.cmake
.PHONY : 07_通讯录项目/CMakeFiles/07.dir/clean

07_通讯录项目/CMakeFiles/07.dir/depend:
	cd /Users/lizeping/CPP_Learning/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lizeping/CPP_Learning /Users/lizeping/CPP_Learning/07_通讯录项目 /Users/lizeping/CPP_Learning/cmake-build-debug /Users/lizeping/CPP_Learning/cmake-build-debug/07_通讯录项目 /Users/lizeping/CPP_Learning/cmake-build-debug/07_通讯录项目/CMakeFiles/07.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 07_通讯录项目/CMakeFiles/07.dir/depend

