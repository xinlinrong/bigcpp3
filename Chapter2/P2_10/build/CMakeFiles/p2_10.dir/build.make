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
CMAKE_SOURCE_DIR = /root/Sources/BigC++/Chapter2/P2_10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Sources/BigC++/Chapter2/P2_10/build

# Include any dependencies generated for this target.
include CMakeFiles/p2_10.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/p2_10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/p2_10.dir/flags.make

CMakeFiles/p2_10.dir/main.cpp.o: CMakeFiles/p2_10.dir/flags.make
CMakeFiles/p2_10.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /root/Sources/BigC++/Chapter2/P2_10/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/p2_10.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/p2_10.dir/main.cpp.o -c /root/Sources/BigC++/Chapter2/P2_10/main.cpp

CMakeFiles/p2_10.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p2_10.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /root/Sources/BigC++/Chapter2/P2_10/main.cpp > CMakeFiles/p2_10.dir/main.cpp.i

CMakeFiles/p2_10.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p2_10.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /root/Sources/BigC++/Chapter2/P2_10/main.cpp -o CMakeFiles/p2_10.dir/main.cpp.s

CMakeFiles/p2_10.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/p2_10.dir/main.cpp.o.requires

CMakeFiles/p2_10.dir/main.cpp.o.provides: CMakeFiles/p2_10.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/p2_10.dir/build.make CMakeFiles/p2_10.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/p2_10.dir/main.cpp.o.provides

CMakeFiles/p2_10.dir/main.cpp.o.provides.build: CMakeFiles/p2_10.dir/main.cpp.o

# Object files for target p2_10
p2_10_OBJECTS = \
"CMakeFiles/p2_10.dir/main.cpp.o"

# External object files for target p2_10
p2_10_EXTERNAL_OBJECTS =

p2_10: CMakeFiles/p2_10.dir/main.cpp.o
p2_10: CMakeFiles/p2_10.dir/build.make
p2_10: CMakeFiles/p2_10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable p2_10"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/p2_10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/p2_10.dir/build: p2_10
.PHONY : CMakeFiles/p2_10.dir/build

CMakeFiles/p2_10.dir/requires: CMakeFiles/p2_10.dir/main.cpp.o.requires
.PHONY : CMakeFiles/p2_10.dir/requires

CMakeFiles/p2_10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/p2_10.dir/cmake_clean.cmake
.PHONY : CMakeFiles/p2_10.dir/clean

CMakeFiles/p2_10.dir/depend:
	cd /root/Sources/BigC++/Chapter2/P2_10/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Sources/BigC++/Chapter2/P2_10 /root/Sources/BigC++/Chapter2/P2_10 /root/Sources/BigC++/Chapter2/P2_10/build /root/Sources/BigC++/Chapter2/P2_10/build /root/Sources/BigC++/Chapter2/P2_10/build/CMakeFiles/p2_10.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/p2_10.dir/depend

