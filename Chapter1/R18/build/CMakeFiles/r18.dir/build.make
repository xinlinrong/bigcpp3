# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/Sources/BigC++/Chapter1/R18

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Sources/BigC++/Chapter1/R18/build

# Include any dependencies generated for this target.
include CMakeFiles/r18.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/r18.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/r18.dir/flags.make

CMakeFiles/r18.dir/main.cpp.o: CMakeFiles/r18.dir/flags.make
CMakeFiles/r18.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /root/Sources/BigC++/Chapter1/R18/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/r18.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/r18.dir/main.cpp.o -c /root/Sources/BigC++/Chapter1/R18/main.cpp

CMakeFiles/r18.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r18.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /root/Sources/BigC++/Chapter1/R18/main.cpp > CMakeFiles/r18.dir/main.cpp.i

CMakeFiles/r18.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r18.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /root/Sources/BigC++/Chapter1/R18/main.cpp -o CMakeFiles/r18.dir/main.cpp.s

CMakeFiles/r18.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/r18.dir/main.cpp.o.requires

CMakeFiles/r18.dir/main.cpp.o.provides: CMakeFiles/r18.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/r18.dir/build.make CMakeFiles/r18.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/r18.dir/main.cpp.o.provides

CMakeFiles/r18.dir/main.cpp.o.provides.build: CMakeFiles/r18.dir/main.cpp.o

# Object files for target r18
r18_OBJECTS = \
"CMakeFiles/r18.dir/main.cpp.o"

# External object files for target r18
r18_EXTERNAL_OBJECTS =

r18: CMakeFiles/r18.dir/main.cpp.o
r18: CMakeFiles/r18.dir/build.make
r18: CMakeFiles/r18.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable r18"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/r18.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/r18.dir/build: r18
.PHONY : CMakeFiles/r18.dir/build

CMakeFiles/r18.dir/requires: CMakeFiles/r18.dir/main.cpp.o.requires
.PHONY : CMakeFiles/r18.dir/requires

CMakeFiles/r18.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/r18.dir/cmake_clean.cmake
.PHONY : CMakeFiles/r18.dir/clean

CMakeFiles/r18.dir/depend:
	cd /root/Sources/BigC++/Chapter1/R18/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Sources/BigC++/Chapter1/R18 /root/Sources/BigC++/Chapter1/R18 /root/Sources/BigC++/Chapter1/R18/build /root/Sources/BigC++/Chapter1/R18/build /root/Sources/BigC++/Chapter1/R18/build/CMakeFiles/r18.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/r18.dir/depend

