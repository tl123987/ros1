# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build

# Include any dependencies generated for this target.
include test/CMakeFiles/turt_back.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/turt_back.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/turt_back.dir/flags.make

test/CMakeFiles/turt_back.dir/src/four.cpp.o: test/CMakeFiles/turt_back.dir/flags.make
test/CMakeFiles/turt_back.dir/src/four.cpp.o: /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/src/test/src/four.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/turt_back.dir/src/four.cpp.o"
	cd /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/turt_back.dir/src/four.cpp.o -c /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/src/test/src/four.cpp

test/CMakeFiles/turt_back.dir/src/four.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/turt_back.dir/src/four.cpp.i"
	cd /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/src/test/src/four.cpp > CMakeFiles/turt_back.dir/src/four.cpp.i

test/CMakeFiles/turt_back.dir/src/four.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/turt_back.dir/src/four.cpp.s"
	cd /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/src/test/src/four.cpp -o CMakeFiles/turt_back.dir/src/four.cpp.s

# Object files for target turt_back
turt_back_OBJECTS = \
"CMakeFiles/turt_back.dir/src/four.cpp.o"

# External object files for target turt_back
turt_back_EXTERNAL_OBJECTS =

/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: test/CMakeFiles/turt_back.dir/src/four.cpp.o
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: test/CMakeFiles/turt_back.dir/build.make
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /opt/ros/noetic/lib/libroscpp.so
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /usr/lib/x86_64-linux-gnu/libpthread.so
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /opt/ros/noetic/lib/librosconsole.so
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /opt/ros/noetic/lib/libxmlrpcpp.so
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /opt/ros/noetic/lib/libroscpp_serialization.so
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /opt/ros/noetic/lib/librostime.so
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /opt/ros/noetic/lib/libcpp_common.so
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back: test/CMakeFiles/turt_back.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back"
	cd /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/turt_back.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/turt_back.dir/build: /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/devel/lib/test/turt_back

.PHONY : test/CMakeFiles/turt_back.dir/build

test/CMakeFiles/turt_back.dir/clean:
	cd /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build/test && $(CMAKE_COMMAND) -P CMakeFiles/turt_back.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/turt_back.dir/clean

test/CMakeFiles/turt_back.dir/depend:
	cd /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/src /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/src/test /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build/test /media/q/Elenments/5ubuntu/rosresoure/ros1/basic/build/test/CMakeFiles/turt_back.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/turt_back.dir/depend

