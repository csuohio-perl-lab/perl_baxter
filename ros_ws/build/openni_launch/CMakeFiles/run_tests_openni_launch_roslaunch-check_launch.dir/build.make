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

# Utility rule file for run_tests_openni_launch_roslaunch-check_launch.

# Include the progress variables for this target.
include openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch.dir/progress.make

openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch:
	cd /home/ai05/ros_ws/build/openni_launch && ../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/catkin/cmake/test/run_tests.py /home/ai05/ros_ws/build/test_results/openni_launch/roslaunch-check_launch.xml /usr/bin/cmake\ -E\ make_directory\ /home/ai05/ros_ws/build/test_results/openni_launch /home/ai05/ros_ws/src/ros_comm/tools/roslaunch/scripts/roslaunch-check\ -o\ '/home/ai05/ros_ws/build/test_results/openni_launch/roslaunch-check_launch.xml'\ '/home/ai05/ros_ws/src/openni_launch/launch'\ 

run_tests_openni_launch_roslaunch-check_launch: openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch
run_tests_openni_launch_roslaunch-check_launch: openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch.dir/build.make
.PHONY : run_tests_openni_launch_roslaunch-check_launch

# Rule to build all files generated by this target.
openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch.dir/build: run_tests_openni_launch_roslaunch-check_launch
.PHONY : openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch.dir/build

openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch.dir/clean:
	cd /home/ai05/ros_ws/build/openni_launch && $(CMAKE_COMMAND) -P CMakeFiles/run_tests_openni_launch_roslaunch-check_launch.dir/cmake_clean.cmake
.PHONY : openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch.dir/clean

openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch.dir/depend:
	cd /home/ai05/ros_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ai05/ros_ws/src /home/ai05/ros_ws/src/openni_launch /home/ai05/ros_ws/build /home/ai05/ros_ws/build/openni_launch /home/ai05/ros_ws/build/openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : openni_launch/CMakeFiles/run_tests_openni_launch_roslaunch-check_launch.dir/depend

