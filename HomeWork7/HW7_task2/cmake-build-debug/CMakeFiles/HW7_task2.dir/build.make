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
CMAKE_SOURCE_DIR = C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW7_task2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW7_task2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW7_task2.dir/flags.make

CMakeFiles/HW7_task2.dir/main.cpp.obj: CMakeFiles/HW7_task2.dir/flags.make
CMakeFiles/HW7_task2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW7_task2.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HW7_task2.dir\main.cpp.obj -c C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2\main.cpp

CMakeFiles/HW7_task2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW7_task2.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2\main.cpp > CMakeFiles\HW7_task2.dir\main.cpp.i

CMakeFiles/HW7_task2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW7_task2.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2\main.cpp -o CMakeFiles\HW7_task2.dir\main.cpp.s

# Object files for target HW7_task2
HW7_task2_OBJECTS = \
"CMakeFiles/HW7_task2.dir/main.cpp.obj"

# External object files for target HW7_task2
HW7_task2_EXTERNAL_OBJECTS =

HW7_task2.exe: CMakeFiles/HW7_task2.dir/main.cpp.obj
HW7_task2.exe: CMakeFiles/HW7_task2.dir/build.make
HW7_task2.exe: CMakeFiles/HW7_task2.dir/linklibs.rsp
HW7_task2.exe: CMakeFiles/HW7_task2.dir/objects1.rsp
HW7_task2.exe: CMakeFiles/HW7_task2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HW7_task2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HW7_task2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW7_task2.dir/build: HW7_task2.exe

.PHONY : CMakeFiles/HW7_task2.dir/build

CMakeFiles/HW7_task2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HW7_task2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HW7_task2.dir/clean

CMakeFiles/HW7_task2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2 C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2 C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2\cmake-build-debug C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2\cmake-build-debug C:\Users\1123085\CLionProjects\HomeWork7\HW7_task2\cmake-build-debug\CMakeFiles\HW7_task2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW7_task2.dir/depend

