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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.3.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.3.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab0.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Lab0.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab0.dir/flags.make

CMakeFiles/Lab0.dir/lab0.c.obj: CMakeFiles/Lab0.dir/flags.make
CMakeFiles/Lab0.dir/lab0.c.obj: CMakeFiles/Lab0.dir/includes_C.rsp
CMakeFiles/Lab0.dir/lab0.c.obj: C:/Users/Ernesto/Documents/GitHub/ECE175/Labs/Lab0/lab0.c
CMakeFiles/Lab0.dir/lab0.c.obj: CMakeFiles/Lab0.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab0.dir/lab0.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Lab0.dir/lab0.c.obj -MF CMakeFiles\Lab0.dir\lab0.c.obj.d -o CMakeFiles\Lab0.dir\lab0.c.obj -c C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0\lab0.c

CMakeFiles/Lab0.dir/lab0.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Lab0.dir/lab0.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0\lab0.c > CMakeFiles\Lab0.dir\lab0.c.i

CMakeFiles/Lab0.dir/lab0.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Lab0.dir/lab0.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0\lab0.c -o CMakeFiles\Lab0.dir\lab0.c.s

# Object files for target Lab0
Lab0_OBJECTS = \
"CMakeFiles/Lab0.dir/lab0.c.obj"

# External object files for target Lab0
Lab0_EXTERNAL_OBJECTS =

Lab0.exe: CMakeFiles/Lab0.dir/lab0.c.obj
Lab0.exe: CMakeFiles/Lab0.dir/build.make
Lab0.exe: CMakeFiles/Lab0.dir/linkLibs.rsp
Lab0.exe: CMakeFiles/Lab0.dir/objects1.rsp
Lab0.exe: CMakeFiles/Lab0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Lab0.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lab0.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab0.dir/build: Lab0.exe
.PHONY : CMakeFiles/Lab0.dir/build

CMakeFiles/Lab0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab0.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lab0.dir/clean

CMakeFiles/Lab0.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0 C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0 C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0\cmake-build-debug C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0\cmake-build-debug C:\Users\Ernesto\Documents\GitHub\ECE175\Labs\Lab0\cmake-build-debug\CMakeFiles\Lab0.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Lab0.dir/depend

