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
CMAKE_SOURCE_DIR = /cygdrive/c/Users/AliNa/CLionProjects/insertionSort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/AliNa/CLionProjects/insertionSort/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/insertionSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/insertionSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/insertionSort.dir/flags.make

CMakeFiles/insertionSort.dir/main.cpp.o: CMakeFiles/insertionSort.dir/flags.make
CMakeFiles/insertionSort.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/AliNa/CLionProjects/insertionSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/insertionSort.dir/main.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/insertionSort.dir/main.cpp.o -c /cygdrive/c/Users/AliNa/CLionProjects/insertionSort/main.cpp

CMakeFiles/insertionSort.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/insertionSort.dir/main.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/AliNa/CLionProjects/insertionSort/main.cpp > CMakeFiles/insertionSort.dir/main.cpp.i

CMakeFiles/insertionSort.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/insertionSort.dir/main.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/AliNa/CLionProjects/insertionSort/main.cpp -o CMakeFiles/insertionSort.dir/main.cpp.s

CMakeFiles/insertionSort.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/insertionSort.dir/main.cpp.o.requires

CMakeFiles/insertionSort.dir/main.cpp.o.provides: CMakeFiles/insertionSort.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/insertionSort.dir/build.make CMakeFiles/insertionSort.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/insertionSort.dir/main.cpp.o.provides

CMakeFiles/insertionSort.dir/main.cpp.o.provides.build: CMakeFiles/insertionSort.dir/main.cpp.o


# Object files for target insertionSort
insertionSort_OBJECTS = \
"CMakeFiles/insertionSort.dir/main.cpp.o"

# External object files for target insertionSort
insertionSort_EXTERNAL_OBJECTS =

insertionSort.exe: CMakeFiles/insertionSort.dir/main.cpp.o
insertionSort.exe: CMakeFiles/insertionSort.dir/build.make
insertionSort.exe: CMakeFiles/insertionSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/AliNa/CLionProjects/insertionSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable insertionSort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/insertionSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/insertionSort.dir/build: insertionSort.exe

.PHONY : CMakeFiles/insertionSort.dir/build

CMakeFiles/insertionSort.dir/requires: CMakeFiles/insertionSort.dir/main.cpp.o.requires

.PHONY : CMakeFiles/insertionSort.dir/requires

CMakeFiles/insertionSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/insertionSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/insertionSort.dir/clean

CMakeFiles/insertionSort.dir/depend:
	cd /cygdrive/c/Users/AliNa/CLionProjects/insertionSort/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/AliNa/CLionProjects/insertionSort /cygdrive/c/Users/AliNa/CLionProjects/insertionSort /cygdrive/c/Users/AliNa/CLionProjects/insertionSort/cmake-build-debug /cygdrive/c/Users/AliNa/CLionProjects/insertionSort/cmake-build-debug /cygdrive/c/Users/AliNa/CLionProjects/insertionSort/cmake-build-debug/CMakeFiles/insertionSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/insertionSort.dir/depend

