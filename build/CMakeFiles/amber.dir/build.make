# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\aaron\Desktop\repos\amber

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\aaron\Desktop\repos\amber\build

# Include any dependencies generated for this target.
include CMakeFiles/amber.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/amber.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/amber.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/amber.dir/flags.make

CMakeFiles/amber.dir/amber.cpp.obj: CMakeFiles/amber.dir/flags.make
CMakeFiles/amber.dir/amber.cpp.obj: CMakeFiles/amber.dir/includes_CXX.rsp
CMakeFiles/amber.dir/amber.cpp.obj: C:/Users/aaron/Desktop/repos/amber/amber.cpp
CMakeFiles/amber.dir/amber.cpp.obj: CMakeFiles/amber.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\aaron\Desktop\repos\amber\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/amber.dir/amber.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/amber.dir/amber.cpp.obj -MF CMakeFiles\amber.dir\amber.cpp.obj.d -o CMakeFiles\amber.dir\amber.cpp.obj -c C:\Users\aaron\Desktop\repos\amber\amber.cpp

CMakeFiles/amber.dir/amber.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/amber.dir/amber.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\aaron\Desktop\repos\amber\amber.cpp > CMakeFiles\amber.dir\amber.cpp.i

CMakeFiles/amber.dir/amber.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/amber.dir/amber.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\aaron\Desktop\repos\amber\amber.cpp -o CMakeFiles\amber.dir\amber.cpp.s

# Object files for target amber
amber_OBJECTS = \
"CMakeFiles/amber.dir/amber.cpp.obj"

# External object files for target amber
amber_EXTERNAL_OBJECTS =

libamber.a: CMakeFiles/amber.dir/amber.cpp.obj
libamber.a: CMakeFiles/amber.dir/build.make
libamber.a: CMakeFiles/amber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\aaron\Desktop\repos\amber\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libamber.a"
	$(CMAKE_COMMAND) -P CMakeFiles\amber.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\amber.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/amber.dir/build: libamber.a
.PHONY : CMakeFiles/amber.dir/build

CMakeFiles/amber.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\amber.dir\cmake_clean.cmake
.PHONY : CMakeFiles/amber.dir/clean

CMakeFiles/amber.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\aaron\Desktop\repos\amber C:\Users\aaron\Desktop\repos\amber C:\Users\aaron\Desktop\repos\amber\build C:\Users\aaron\Desktop\repos\amber\build C:\Users\aaron\Desktop\repos\amber\build\CMakeFiles\amber.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/amber.dir/depend

