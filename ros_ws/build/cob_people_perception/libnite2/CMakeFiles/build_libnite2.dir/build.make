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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ai05/ros_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ai05/ros_ws/build

# Utility rule file for build_libnite2.

# Include the progress variables for this target.
include cob_people_perception/libnite2/CMakeFiles/build_libnite2.dir/progress.make

cob_people_perception/libnite2/CMakeFiles/build_libnite2:
	cd /home/ai05/ros_ws/build/cob_people_perception/libnite2 && test -e /home/ai05/ros_ws/devel/share/libnite2/INSTALLED || ( cmake -E chdir /home/ai05/ros_ws/src/cob_people_perception/libnite2 make -f Makefile.tarball && touch /home/ai05/ros_ws/devel/share/libnite2/INSTALLED )

build_libnite2: cob_people_perception/libnite2/CMakeFiles/build_libnite2
build_libnite2: cob_people_perception/libnite2/CMakeFiles/build_libnite2.dir/build.make
.PHONY : build_libnite2

# Rule to build all files generated by this target.
cob_people_perception/libnite2/CMakeFiles/build_libnite2.dir/build: build_libnite2
.PHONY : cob_people_perception/libnite2/CMakeFiles/build_libnite2.dir/build

cob_people_perception/libnite2/CMakeFiles/build_libnite2.dir/clean:
	cd /home/ai05/ros_ws/build/cob_people_perception/libnite2 && $(CMAKE_COMMAND) -P CMakeFiles/build_libnite2.dir/cmake_clean.cmake
.PHONY : cob_people_perception/libnite2/CMakeFiles/build_libnite2.dir/clean

cob_people_perception/libnite2/CMakeFiles/build_libnite2.dir/depend:
	cd /home/ai05/ros_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ai05/ros_ws/src /home/ai05/ros_ws/src/cob_people_perception/libnite2 /home/ai05/ros_ws/build /home/ai05/ros_ws/build/cob_people_perception/libnite2 /home/ai05/ros_ws/build/cob_people_perception/libnite2/CMakeFiles/build_libnite2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cob_people_perception/libnite2/CMakeFiles/build_libnite2.dir/depend

