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
CMAKE_COMMAND = "D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Exercise\CLionProjects\2022-nju-cpl-code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug

# Include any dependencies generated for this target.
include 0-intro/CMakeFiles/hello.dir/depend.make

# Include the progress variables for this target.
include 0-intro/CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include 0-intro/CMakeFiles/hello.dir/flags.make

0-intro/CMakeFiles/hello.dir/hello.c.obj: 0-intro/CMakeFiles/hello.dir/flags.make
0-intro/CMakeFiles/hello.dir/hello.c.obj: ../0-intro/hello.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 0-intro/CMakeFiles/hello.dir/hello.c.obj"
	cd /d E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\0-intro && D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\hello.dir\hello.c.obj -c E:\Exercise\CLionProjects\2022-nju-cpl-code\0-intro\hello.c

0-intro/CMakeFiles/hello.dir/hello.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hello.dir/hello.c.i"
	cd /d E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\0-intro && D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Exercise\CLionProjects\2022-nju-cpl-code\0-intro\hello.c > CMakeFiles\hello.dir\hello.c.i

0-intro/CMakeFiles/hello.dir/hello.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hello.dir/hello.c.s"
	cd /d E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\0-intro && D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Exercise\CLionProjects\2022-nju-cpl-code\0-intro\hello.c -o CMakeFiles\hello.dir\hello.c.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/hello.c.obj"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

0-intro/hello.exe: 0-intro/CMakeFiles/hello.dir/hello.c.obj
0-intro/hello.exe: 0-intro/CMakeFiles/hello.dir/build.make
0-intro/hello.exe: 0-intro/CMakeFiles/hello.dir/linklibs.rsp
0-intro/hello.exe: 0-intro/CMakeFiles/hello.dir/objects1.rsp
0-intro/hello.exe: 0-intro/CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable hello.exe"
	cd /d E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\0-intro && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hello.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
0-intro/CMakeFiles/hello.dir/build: 0-intro/hello.exe

.PHONY : 0-intro/CMakeFiles/hello.dir/build

0-intro/CMakeFiles/hello.dir/clean:
	cd /d E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\0-intro && $(CMAKE_COMMAND) -P CMakeFiles\hello.dir\cmake_clean.cmake
.PHONY : 0-intro/CMakeFiles/hello.dir/clean

0-intro/CMakeFiles/hello.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Exercise\CLionProjects\2022-nju-cpl-code E:\Exercise\CLionProjects\2022-nju-cpl-code\0-intro E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\0-intro E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\0-intro\CMakeFiles\hello.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 0-intro/CMakeFiles/hello.dir/depend

