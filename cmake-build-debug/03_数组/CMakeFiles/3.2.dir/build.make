# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Application\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Application\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CPP_Learning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CPP_Learning\cmake-build-debug

# Include any dependencies generated for this target.
include 03_数组/CMakeFiles/3.2.dir/depend.make

# Include the progress variables for this target.
include 03_数组/CMakeFiles/3.2.dir/progress.make

# Include the compile flags for this target's objects.
include 03_数组/CMakeFiles/3.2.dir/flags.make

03_数组/CMakeFiles/3.2.dir/2_TwoDim.cpp.obj: 03_数组/CMakeFiles/3.2.dir/flags.make
03_数组/CMakeFiles/3.2.dir/2_TwoDim.cpp.obj: 03_数组/CMakeFiles/3.2.dir/includes_CXX.rsp
03_数组/CMakeFiles/3.2.dir/2_TwoDim.cpp.obj: ../03_数组/2_TwoDim.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CPP_Learning\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 03_数组/CMakeFiles/3.2.dir/2_TwoDim.cpp.obj"
	cd /d D:\CPP_Learning\cmake-build-debug\03_数组 && C:\Application\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\3.2.dir\2_TwoDim.cpp.obj -c D:\CPP_Learning\03_数组\2_TwoDim.cpp

03_数组/CMakeFiles/3.2.dir/2_TwoDim.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3.2.dir/2_TwoDim.cpp.i"
	cd /d D:\CPP_Learning\cmake-build-debug\03_数组 && C:\Application\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CPP_Learning\03_数组\2_TwoDim.cpp > CMakeFiles\3.2.dir\2_TwoDim.cpp.i

03_数组/CMakeFiles/3.2.dir/2_TwoDim.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3.2.dir/2_TwoDim.cpp.s"
	cd /d D:\CPP_Learning\cmake-build-debug\03_数组 && C:\Application\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CPP_Learning\03_数组\2_TwoDim.cpp -o CMakeFiles\3.2.dir\2_TwoDim.cpp.s

# Object files for target 3.2
3_2_OBJECTS = \
"CMakeFiles/3.2.dir/2_TwoDim.cpp.obj"

# External object files for target 3.2
3_2_EXTERNAL_OBJECTS =

03_数组/3.2.exe: 03_数组/CMakeFiles/3.2.dir/2_TwoDim.cpp.obj
03_数组/3.2.exe: 03_数组/CMakeFiles/3.2.dir/build.make
03_数组/3.2.exe: 03_数组/CMakeFiles/3.2.dir/linklibs.rsp
03_数组/3.2.exe: 03_数组/CMakeFiles/3.2.dir/objects1.rsp
03_数组/3.2.exe: 03_数组/CMakeFiles/3.2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CPP_Learning\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 3.2.exe"
	cd /d D:\CPP_Learning\cmake-build-debug\03_数组 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\3.2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
03_数组/CMakeFiles/3.2.dir/build: 03_数组/3.2.exe

.PHONY : 03_数组/CMakeFiles/3.2.dir/build

03_数组/CMakeFiles/3.2.dir/clean:
	cd /d D:\CPP_Learning\cmake-build-debug\03_数组 && $(CMAKE_COMMAND) -P CMakeFiles\3.2.dir\cmake_clean.cmake
.PHONY : 03_数组/CMakeFiles/3.2.dir/clean

03_数组/CMakeFiles/3.2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CPP_Learning D:\CPP_Learning\03_数组 D:\CPP_Learning\cmake-build-debug D:\CPP_Learning\cmake-build-debug\03_数组 D:\CPP_Learning\cmake-build-debug\03_数组\CMakeFiles\3.2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 03_数组/CMakeFiles/3.2.dir/depend

