# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\thiago\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4445.17\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\thiago\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4445.17\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\faculdade\estrutura-de-dados-2\big-o-oo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\faculdade\estrutura-de-dados-2\big-o-oo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/big_o_oo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/big_o_oo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/big_o_oo.dir/flags.make

CMakeFiles/big_o_oo.dir/main.cpp.obj: CMakeFiles/big_o_oo.dir/flags.make
CMakeFiles/big_o_oo.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\faculdade\estrutura-de-dados-2\big-o-oo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/big_o_oo.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\big_o_oo.dir\main.cpp.obj -c D:\faculdade\estrutura-de-dados-2\big-o-oo\main.cpp

CMakeFiles/big_o_oo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/big_o_oo.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\faculdade\estrutura-de-dados-2\big-o-oo\main.cpp > CMakeFiles\big_o_oo.dir\main.cpp.i

CMakeFiles/big_o_oo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/big_o_oo.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\faculdade\estrutura-de-dados-2\big-o-oo\main.cpp -o CMakeFiles\big_o_oo.dir\main.cpp.s

CMakeFiles/big_o_oo.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/big_o_oo.dir/main.cpp.obj.requires

CMakeFiles/big_o_oo.dir/main.cpp.obj.provides: CMakeFiles/big_o_oo.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\big_o_oo.dir\build.make CMakeFiles/big_o_oo.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/big_o_oo.dir/main.cpp.obj.provides

CMakeFiles/big_o_oo.dir/main.cpp.obj.provides.build: CMakeFiles/big_o_oo.dir/main.cpp.obj


# Object files for target big_o_oo
big_o_oo_OBJECTS = \
"CMakeFiles/big_o_oo.dir/main.cpp.obj"

# External object files for target big_o_oo
big_o_oo_EXTERNAL_OBJECTS =

big_o_oo.exe: CMakeFiles/big_o_oo.dir/main.cpp.obj
big_o_oo.exe: CMakeFiles/big_o_oo.dir/build.make
big_o_oo.exe: CMakeFiles/big_o_oo.dir/linklibs.rsp
big_o_oo.exe: CMakeFiles/big_o_oo.dir/objects1.rsp
big_o_oo.exe: CMakeFiles/big_o_oo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\faculdade\estrutura-de-dados-2\big-o-oo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable big_o_oo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\big_o_oo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/big_o_oo.dir/build: big_o_oo.exe

.PHONY : CMakeFiles/big_o_oo.dir/build

CMakeFiles/big_o_oo.dir/requires: CMakeFiles/big_o_oo.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/big_o_oo.dir/requires

CMakeFiles/big_o_oo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\big_o_oo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/big_o_oo.dir/clean

CMakeFiles/big_o_oo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\faculdade\estrutura-de-dados-2\big-o-oo D:\faculdade\estrutura-de-dados-2\big-o-oo D:\faculdade\estrutura-de-dados-2\big-o-oo\cmake-build-debug D:\faculdade\estrutura-de-dados-2\big-o-oo\cmake-build-debug D:\faculdade\estrutura-de-dados-2\big-o-oo\cmake-build-debug\CMakeFiles\big_o_oo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/big_o_oo.dir/depend
