# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /cygdrive/c/Users/AliNa/.CLion2017.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/AliNa/.CLion2017.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab_12_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab_12_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab_12_3.dir/flags.make

CMakeFiles/Lab_12_3.dir/main.cpp.o: CMakeFiles/Lab_12_3.dir/flags.make
CMakeFiles/Lab_12_3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab_12_3.dir/main.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab_12_3.dir/main.cpp.o -c /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3/main.cpp

CMakeFiles/Lab_12_3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab_12_3.dir/main.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3/main.cpp > CMakeFiles/Lab_12_3.dir/main.cpp.i

CMakeFiles/Lab_12_3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab_12_3.dir/main.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3/main.cpp -o CMakeFiles/Lab_12_3.dir/main.cpp.s

CMakeFiles/Lab_12_3.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Lab_12_3.dir/main.cpp.o.requires

CMakeFiles/Lab_12_3.dir/main.cpp.o.provides: CMakeFiles/Lab_12_3.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lab_12_3.dir/build.make CMakeFiles/Lab_12_3.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Lab_12_3.dir/main.cpp.o.provides

CMakeFiles/Lab_12_3.dir/main.cpp.o.provides.build: CMakeFiles/Lab_12_3.dir/main.cpp.o


# Object files for target Lab_12_3
Lab_12_3_OBJECTS = \
"CMakeFiles/Lab_12_3.dir/main.cpp.o"

# External object files for target Lab_12_3
Lab_12_3_EXTERNAL_OBJECTS =

Lab_12_3.exe: CMakeFiles/Lab_12_3.dir/main.cpp.o
Lab_12_3.exe: CMakeFiles/Lab_12_3.dir/build.make
Lab_12_3.exe: CMakeFiles/Lab_12_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab_12_3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab_12_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab_12_3.dir/build: Lab_12_3.exe

.PHONY : CMakeFiles/Lab_12_3.dir/build

CMakeFiles/Lab_12_3.dir/requires: CMakeFiles/Lab_12_3.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Lab_12_3.dir/requires

CMakeFiles/Lab_12_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab_12_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab_12_3.dir/clean

CMakeFiles/Lab_12_3.dir/depend:
	cd /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3 /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3 /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3/cmake-build-debug /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3/cmake-build-debug /cygdrive/c/Users/AliNa/CLionProjects/Lab_12_3/cmake-build-debug/CMakeFiles/Lab_12_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab_12_3.dir/depend

