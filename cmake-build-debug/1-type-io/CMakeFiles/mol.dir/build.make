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
include 1-type-io/CMakeFiles/mol.dir/depend.make

# Include the progress variables for this target.
include 1-type-io/CMakeFiles/mol.dir/progress.make

# Include the compile flags for this target's objects.
include 1-type-io/CMakeFiles/mol.dir/flags.make

1-type-io/CMakeFiles/mol.dir/mol.c.obj: 1-type-io/CMakeFiles/mol.dir/flags.make
1-type-io/CMakeFiles/mol.dir/mol.c.obj: ../1-type-io/mol.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 1-type-io/CMakeFiles/mol.dir/mol.c.obj"
	cd /d E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\1-type-io && D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\mol.dir\mol.c.obj -c E:\Exercise\CLionProjects\2022-nju-cpl-code\1-type-io\mol.c

1-type-io/CMakeFiles/mol.dir/mol.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mol.dir/mol.c.i"
	cd /d E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\1-type-io && D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\Exercise\CLionProjects\2022-nju-cpl-code\1-type-io\mol.c > CMakeFiles\mol.dir\mol.c.i

1-type-io/CMakeFiles/mol.dir/mol.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mol.dir/mol.c.s"
	cd /d E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\1-type-io && D:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\Exercise\CLionProjects\2022-nju-cpl-code\1-type-io\mol.c -o CMakeFiles\mol.dir\mol.c.s

# Object files for target mol
mol_OBJECTS = \
"CMakeFiles/mol.dir/mol.c.obj"

# External object files for target mol
mol_EXTERNAL_OBJECTS =

1-type-io/mol.exe: 1-type-io/CMakeFiles/mol.dir/mol.c.obj
1-type-io/mol.exe: 1-type-io/CMakeFiles/mol.dir/build.make
1-type-io/mol.exe: 1-type-io/CMakeFiles/mol.dir/linklibs.rsp
1-type-io/mol.exe: 1-type-io/CMakeFiles/mol.dir/objects1.rsp
1-type-io/mol.exe: 1-type-io/CMakeFiles/mol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable mol.exe"
	cd /d E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\1-type-io && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mol.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
1-type-io/CMakeFiles/mol.dir/build: 1-type-io/mol.exe

.PHONY : 1-type-io/CMakeFiles/mol.dir/build

1-type-io/CMakeFiles/mol.dir/clean:
	cd /d E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\1-type-io && $(CMAKE_COMMAND) -P CMakeFiles\mol.dir\cmake_clean.cmake
.PHONY : 1-type-io/CMakeFiles/mol.dir/clean

1-type-io/CMakeFiles/mol.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Exercise\CLionProjects\2022-nju-cpl-code E:\Exercise\CLionProjects\2022-nju-cpl-code\1-type-io E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\1-type-io E:\Exercise\CLionProjects\2022-nju-cpl-code\cmake-build-debug\1-type-io\CMakeFiles\mol.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : 1-type-io/CMakeFiles/mol.dir/depend

