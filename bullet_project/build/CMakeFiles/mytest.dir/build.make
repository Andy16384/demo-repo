# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /desktop/demo-repo/bullet_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /desktop/demo-repo/bullet_project/build

# Include any dependencies generated for this target.
include CMakeFiles/mytest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mytest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mytest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mytest.dir/flags.make

CMakeFiles/mytest.dir/main.cpp.o: CMakeFiles/mytest.dir/flags.make
CMakeFiles/mytest.dir/main.cpp.o: ../main.cpp
CMakeFiles/mytest.dir/main.cpp.o: CMakeFiles/mytest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/desktop/demo-repo/bullet_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mytest.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mytest.dir/main.cpp.o -MF CMakeFiles/mytest.dir/main.cpp.o.d -o CMakeFiles/mytest.dir/main.cpp.o -c /desktop/demo-repo/bullet_project/main.cpp

CMakeFiles/mytest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mytest.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /desktop/demo-repo/bullet_project/main.cpp > CMakeFiles/mytest.dir/main.cpp.i

CMakeFiles/mytest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mytest.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /desktop/demo-repo/bullet_project/main.cpp -o CMakeFiles/mytest.dir/main.cpp.s

# Object files for target mytest
mytest_OBJECTS = \
"CMakeFiles/mytest.dir/main.cpp.o"

# External object files for target mytest
mytest_EXTERNAL_OBJECTS =

mytest: CMakeFiles/mytest.dir/main.cpp.o
mytest: CMakeFiles/mytest.dir/build.make
mytest: /usr/lib/x86_64-linux-gnu/libBulletDynamics.so
mytest: /usr/lib/x86_64-linux-gnu/libBulletCollision.so
mytest: /usr/lib/x86_64-linux-gnu/libLinearMath.so
mytest: /usr/lib/x86_64-linux-gnu/libBulletSoftBody.so
mytest: /usr/lib/x86_64-linux-gnu/libglfw.so.3.3
mytest: CMakeFiles/mytest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/desktop/demo-repo/bullet_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mytest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mytest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mytest.dir/build: mytest
.PHONY : CMakeFiles/mytest.dir/build

CMakeFiles/mytest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mytest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mytest.dir/clean

CMakeFiles/mytest.dir/depend:
	cd /desktop/demo-repo/bullet_project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /desktop/demo-repo/bullet_project /desktop/demo-repo/bullet_project /desktop/demo-repo/bullet_project/build /desktop/demo-repo/bullet_project/build /desktop/demo-repo/bullet_project/build/CMakeFiles/mytest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mytest.dir/depend
