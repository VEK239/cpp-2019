# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\1123085\CLionProjects\HomeWork4\hw4_D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\1123085\CLionProjects\HomeWork4\hw4_D\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hw4_D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw4_D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw4_D.dir/flags.make

CMakeFiles/hw4_D.dir/main.cpp.obj: CMakeFiles/hw4_D.dir/flags.make
CMakeFiles/hw4_D.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\1123085\CLionProjects\HomeWork4\hw4_D\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw4_D.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hw4_D.dir\main.cpp.obj -c C:\Users\1123085\CLionProjects\HomeWork4\hw4_D\main.cpp

CMakeFiles/hw4_D.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw4_D.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\1123085\CLionProjects\HomeWork4\hw4_D\main.cpp > CMakeFiles\hw4_D.dir\main.cpp.i

CMakeFiles/hw4_D.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw4_D.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\1123085\CLionProjects\HomeWork4\hw4_D\main.cpp -o CMakeFiles\hw4_D.dir\main.cpp.s

# Object files for target hw4_D
hw4_D_OBJECTS = \
"CMakeFiles/hw4_D.dir/main.cpp.obj"

# External object files for target hw4_D
hw4_D_EXTERNAL_OBJECTS =

hw4_D.exe: CMakeFiles/hw4_D.dir/main.cpp.obj
hw4_D.exe: CMakeFiles/hw4_D.dir/build.make
hw4_D.exe: CMakeFiles/hw4_D.dir/linklibs.rsp
hw4_D.exe: CMakeFiles/hw4_D.dir/objects1.rsp
hw4_D.exe: CMakeFiles/hw4_D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\1123085\CLionProjects\HomeWork4\hw4_D\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hw4_D.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hw4_D.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw4_D.dir/build: hw4_D.exe

.PHONY : CMakeFiles/hw4_D.dir/build

CMakeFiles/hw4_D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hw4_D.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hw4_D.dir/clean

CMakeFiles/hw4_D.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\1123085\CLionProjects\HomeWork4\hw4_D C:\Users\1123085\CLionProjects\HomeWork4\hw4_D C:\Users\1123085\CLionProjects\HomeWork4\hw4_D\cmake-build-debug C:\Users\1123085\CLionProjects\HomeWork4\hw4_D\cmake-build-debug C:\Users\1123085\CLionProjects\HomeWork4\hw4_D\cmake-build-debug\CMakeFiles\hw4_D.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hw4_D.dir/depend

