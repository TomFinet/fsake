# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /opt/cmake-3.25.1-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.25.1-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tomfinet/projects/fsake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tomfinet/projects/fsake/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_fsake.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/test_fsake.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_fsake.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_fsake.dir/flags.make

tests/CMakeFiles/test_fsake.dir/test_main.c.o: tests/CMakeFiles/test_fsake.dir/flags.make
tests/CMakeFiles/test_fsake.dir/test_main.c.o: /home/tomfinet/projects/fsake/tests/test_main.c
tests/CMakeFiles/test_fsake.dir/test_main.c.o: tests/CMakeFiles/test_fsake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tomfinet/projects/fsake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/test_fsake.dir/test_main.c.o"
	cd /home/tomfinet/projects/fsake/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT tests/CMakeFiles/test_fsake.dir/test_main.c.o -MF CMakeFiles/test_fsake.dir/test_main.c.o.d -o CMakeFiles/test_fsake.dir/test_main.c.o -c /home/tomfinet/projects/fsake/tests/test_main.c

tests/CMakeFiles/test_fsake.dir/test_main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_fsake.dir/test_main.c.i"
	cd /home/tomfinet/projects/fsake/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tomfinet/projects/fsake/tests/test_main.c > CMakeFiles/test_fsake.dir/test_main.c.i

tests/CMakeFiles/test_fsake.dir/test_main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_fsake.dir/test_main.c.s"
	cd /home/tomfinet/projects/fsake/build/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tomfinet/projects/fsake/tests/test_main.c -o CMakeFiles/test_fsake.dir/test_main.c.s

# Object files for target test_fsake
test_fsake_OBJECTS = \
"CMakeFiles/test_fsake.dir/test_main.c.o"

# External object files for target test_fsake
test_fsake_EXTERNAL_OBJECTS =

tests/test_fsake: tests/CMakeFiles/test_fsake.dir/test_main.c.o
tests/test_fsake: tests/CMakeFiles/test_fsake.dir/build.make
tests/test_fsake: src/liblibfsake.a
tests/test_fsake: tests/CMakeFiles/test_fsake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tomfinet/projects/fsake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_fsake"
	cd /home/tomfinet/projects/fsake/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_fsake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_fsake.dir/build: tests/test_fsake
.PHONY : tests/CMakeFiles/test_fsake.dir/build

tests/CMakeFiles/test_fsake.dir/clean:
	cd /home/tomfinet/projects/fsake/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_fsake.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_fsake.dir/clean

tests/CMakeFiles/test_fsake.dir/depend:
	cd /home/tomfinet/projects/fsake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tomfinet/projects/fsake /home/tomfinet/projects/fsake/tests /home/tomfinet/projects/fsake/build /home/tomfinet/projects/fsake/build/tests /home/tomfinet/projects/fsake/build/tests/CMakeFiles/test_fsake.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test_fsake.dir/depend

