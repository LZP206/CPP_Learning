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
CMAKE_SOURCE_DIR = "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/FunctionPlus.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FunctionPlus.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FunctionPlus.dir/flags.make

CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.o: CMakeFiles/FunctionPlus.dir/flags.make
CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.o: ../FunctionPlus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.o -c "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/FunctionPlus.cpp"

CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/FunctionPlus.cpp" > CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.i

CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/FunctionPlus.cpp" -o CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.s

CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.o: CMakeFiles/FunctionPlus.dir/flags.make
CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.o: ../src/func/swap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.o -c "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/src/func/swap.cpp"

CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/src/func/swap.cpp" > CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.i

CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/src/func/swap.cpp" -o CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.s

# Object files for target FunctionPlus
FunctionPlus_OBJECTS = \
"CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.o" \
"CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.o"

# External object files for target FunctionPlus
FunctionPlus_EXTERNAL_OBJECTS =

FunctionPlus: CMakeFiles/FunctionPlus.dir/FunctionPlus.cpp.o
FunctionPlus: CMakeFiles/FunctionPlus.dir/src/func/swap.cpp.o
FunctionPlus: CMakeFiles/FunctionPlus.dir/build.make
FunctionPlus: CMakeFiles/FunctionPlus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable FunctionPlus"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FunctionPlus.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FunctionPlus.dir/build: FunctionPlus

.PHONY : CMakeFiles/FunctionPlus.dir/build

CMakeFiles/FunctionPlus.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FunctionPlus.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FunctionPlus.dir/clean

CMakeFiles/FunctionPlus.dir/depend:
	cd "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function" "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function" "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/cmake-build-debug" "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/cmake-build-debug" "/Users/lizeping/Library/Mobile Documents/com~apple~CloudDocs/CPP Learning/04  Function/cmake-build-debug/CMakeFiles/FunctionPlus.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/FunctionPlus.dir/depend
