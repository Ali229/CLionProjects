# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /cygdrive/c/Users/AliNa/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/AliNa/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Assignment2_17.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment2_17.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment2_17.dir/flags.make

CMakeFiles/Assignment2_17.dir/main.cpp.o: CMakeFiles/Assignment2_17.dir/flags.make
CMakeFiles/Assignment2_17.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment2_17.dir/main.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment2_17.dir/main.cpp.o -c /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/main.cpp

CMakeFiles/Assignment2_17.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment2_17.dir/main.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/main.cpp > CMakeFiles/Assignment2_17.dir/main.cpp.i

CMakeFiles/Assignment2_17.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment2_17.dir/main.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/main.cpp -o CMakeFiles/Assignment2_17.dir/main.cpp.s

CMakeFiles/Assignment2_17.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Assignment2_17.dir/main.cpp.o.requires

CMakeFiles/Assignment2_17.dir/main.cpp.o.provides: CMakeFiles/Assignment2_17.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Assignment2_17.dir/build.make CMakeFiles/Assignment2_17.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Assignment2_17.dir/main.cpp.o.provides

CMakeFiles/Assignment2_17.dir/main.cpp.o.provides.build: CMakeFiles/Assignment2_17.dir/main.cpp.o


CMakeFiles/Assignment2_17.dir/date.cpp.o: CMakeFiles/Assignment2_17.dir/flags.make
CMakeFiles/Assignment2_17.dir/date.cpp.o: ../date.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment2_17.dir/date.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment2_17.dir/date.cpp.o -c /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/date.cpp

CMakeFiles/Assignment2_17.dir/date.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment2_17.dir/date.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/date.cpp > CMakeFiles/Assignment2_17.dir/date.cpp.i

CMakeFiles/Assignment2_17.dir/date.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment2_17.dir/date.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/date.cpp -o CMakeFiles/Assignment2_17.dir/date.cpp.s

CMakeFiles/Assignment2_17.dir/date.cpp.o.requires:

.PHONY : CMakeFiles/Assignment2_17.dir/date.cpp.o.requires

CMakeFiles/Assignment2_17.dir/date.cpp.o.provides: CMakeFiles/Assignment2_17.dir/date.cpp.o.requires
	$(MAKE) -f CMakeFiles/Assignment2_17.dir/build.make CMakeFiles/Assignment2_17.dir/date.cpp.o.provides.build
.PHONY : CMakeFiles/Assignment2_17.dir/date.cpp.o.provides

CMakeFiles/Assignment2_17.dir/date.cpp.o.provides.build: CMakeFiles/Assignment2_17.dir/date.cpp.o


# Object files for target Assignment2_17
Assignment2_17_OBJECTS = \
"CMakeFiles/Assignment2_17.dir/main.cpp.o" \
"CMakeFiles/Assignment2_17.dir/date.cpp.o"

# External object files for target Assignment2_17
Assignment2_17_EXTERNAL_OBJECTS =

Assignment2_17.exe: CMakeFiles/Assignment2_17.dir/main.cpp.o
Assignment2_17.exe: CMakeFiles/Assignment2_17.dir/date.cpp.o
Assignment2_17.exe: CMakeFiles/Assignment2_17.dir/build.make
Assignment2_17.exe: CMakeFiles/Assignment2_17.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Assignment2_17.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment2_17.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment2_17.dir/build: Assignment2_17.exe

.PHONY : CMakeFiles/Assignment2_17.dir/build

CMakeFiles/Assignment2_17.dir/requires: CMakeFiles/Assignment2_17.dir/main.cpp.o.requires
CMakeFiles/Assignment2_17.dir/requires: CMakeFiles/Assignment2_17.dir/date.cpp.o.requires

.PHONY : CMakeFiles/Assignment2_17.dir/requires

CMakeFiles/Assignment2_17.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment2_17.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment2_17.dir/clean

CMakeFiles/Assignment2_17.dir/depend:
	cd /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17 /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17 /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/cmake-build-debug /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/cmake-build-debug /cygdrive/c/Users/AliNa/CLionProjects/Assignment2_17/cmake-build-debug/CMakeFiles/Assignment2_17.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Assignment2_17.dir/depend
