# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/eduardo/Desktop/cpp-course

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/eduardo/Desktop/cpp-course/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pointers_and_references_review.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pointers_and_references_review.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pointers_and_references_review.dir/flags.make

CMakeFiles/pointers_and_references_review.dir/main.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pointers_and_references_review.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/main.cpp.o -c /Users/eduardo/Desktop/cpp-course/main.cpp

CMakeFiles/pointers_and_references_review.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/main.cpp > CMakeFiles/pointers_and_references_review.dir/main.cpp.i

CMakeFiles/pointers_and_references_review.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/main.cpp -o CMakeFiles/pointers_and_references_review.dir/main.cpp.s

CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.o: ../code/arrays_and_pointers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.o -c /Users/eduardo/Desktop/cpp-course/code/arrays_and_pointers.cpp

CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/code/arrays_and_pointers.cpp > CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.i

CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/code/arrays_and_pointers.cpp -o CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.s

CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.o: ../code/const_and_pointers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.o -c /Users/eduardo/Desktop/cpp-course/code/const_and_pointers.cpp

CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/code/const_and_pointers.cpp > CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.i

CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/code/const_and_pointers.cpp -o CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.s

CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.o: ../code/functions_and_pointers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.o -c /Users/eduardo/Desktop/cpp-course/code/functions_and_pointers.cpp

CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/code/functions_and_pointers.cpp > CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.i

CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/code/functions_and_pointers.cpp -o CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.s

CMakeFiles/pointers_and_references_review.dir/code/references.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/code/references.cpp.o: ../code/references.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/pointers_and_references_review.dir/code/references.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/code/references.cpp.o -c /Users/eduardo/Desktop/cpp-course/code/references.cpp

CMakeFiles/pointers_and_references_review.dir/code/references.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/code/references.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/code/references.cpp > CMakeFiles/pointers_and_references_review.dir/code/references.cpp.i

CMakeFiles/pointers_and_references_review.dir/code/references.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/code/references.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/code/references.cpp -o CMakeFiles/pointers_and_references_review.dir/code/references.cpp.s

CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.o: ../code/left_and_right_values.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.o -c /Users/eduardo/Desktop/cpp-course/code/left_and_right_values.cpp

CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/code/left_and_right_values.cpp > CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.i

CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/code/left_and_right_values.cpp -o CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.s

CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.o: ../classes/player/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.o -c /Users/eduardo/Desktop/cpp-course/classes/player/Player.cpp

CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/classes/player/Player.cpp > CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.i

CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/classes/player/Player.cpp -o CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.s

CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.o: ../classes/account/Account.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.o -c /Users/eduardo/Desktop/cpp-course/classes/account/Account.cpp

CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/classes/account/Account.cpp > CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.i

CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/classes/account/Account.cpp -o CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.s

CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.o: ../code/constructors.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.o -c /Users/eduardo/Desktop/cpp-course/code/constructors.cpp

CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/code/constructors.cpp > CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.i

CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/code/constructors.cpp -o CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.s

CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.o: ../classes/shallow/Shallow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.o -c /Users/eduardo/Desktop/cpp-course/classes/shallow/Shallow.cpp

CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/classes/shallow/Shallow.cpp > CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.i

CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/classes/shallow/Shallow.cpp -o CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.s

CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.o: ../classes/deep/Deep.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.o -c /Users/eduardo/Desktop/cpp-course/classes/deep/Deep.cpp

CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/classes/deep/Deep.cpp > CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.i

CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/classes/deep/Deep.cpp -o CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.s

CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.o: ../code/shallow_and_deep_copy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.o -c /Users/eduardo/Desktop/cpp-course/code/shallow_and_deep_copy.cpp

CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/code/shallow_and_deep_copy.cpp > CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.i

CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/code/shallow_and_deep_copy.cpp -o CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.s

CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.o: ../classes/move/Move.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.o -c /Users/eduardo/Desktop/cpp-course/classes/move/Move.cpp

CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/classes/move/Move.cpp > CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.i

CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/classes/move/Move.cpp -o CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.s

CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.o: ../code/move_constructor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.o -c /Users/eduardo/Desktop/cpp-course/code/move_constructor.cpp

CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/code/move_constructor.cpp > CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.i

CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/code/move_constructor.cpp -o CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.s

CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.o: ../code/static_members_and_methods.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.o -c /Users/eduardo/Desktop/cpp-course/code/static_members_and_methods.cpp

CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/code/static_members_and_methods.cpp > CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.i

CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/code/static_members_and_methods.cpp -o CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.s

CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.o: ../classes/my-string/MyString.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.o -c /Users/eduardo/Desktop/cpp-course/classes/my-string/MyString.cpp

CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/classes/my-string/MyString.cpp > CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.i

CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/classes/my-string/MyString.cpp -o CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.s

CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.o: CMakeFiles/pointers_and_references_review.dir/flags.make
CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.o: ../code/assignment_overload.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.o -c /Users/eduardo/Desktop/cpp-course/code/assignment_overload.cpp

CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eduardo/Desktop/cpp-course/code/assignment_overload.cpp > CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.i

CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eduardo/Desktop/cpp-course/code/assignment_overload.cpp -o CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.s

# Object files for target pointers_and_references_review
pointers_and_references_review_OBJECTS = \
"CMakeFiles/pointers_and_references_review.dir/main.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/code/references.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.o" \
"CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.o"

# External object files for target pointers_and_references_review
pointers_and_references_review_EXTERNAL_OBJECTS =

pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/main.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/code/arrays_and_pointers.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/code/const_and_pointers.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/code/functions_and_pointers.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/code/references.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/code/left_and_right_values.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/classes/player/Player.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/classes/account/Account.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/code/constructors.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/classes/shallow/Shallow.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/classes/deep/Deep.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/code/shallow_and_deep_copy.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/classes/move/Move.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/code/move_constructor.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/code/static_members_and_methods.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/classes/my-string/MyString.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/code/assignment_overload.cpp.o
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/build.make
pointers_and_references_review: CMakeFiles/pointers_and_references_review.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX executable pointers_and_references_review"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pointers_and_references_review.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pointers_and_references_review.dir/build: pointers_and_references_review

.PHONY : CMakeFiles/pointers_and_references_review.dir/build

CMakeFiles/pointers_and_references_review.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pointers_and_references_review.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pointers_and_references_review.dir/clean

CMakeFiles/pointers_and_references_review.dir/depend:
	cd /Users/eduardo/Desktop/cpp-course/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/eduardo/Desktop/cpp-course /Users/eduardo/Desktop/cpp-course /Users/eduardo/Desktop/cpp-course/cmake-build-debug /Users/eduardo/Desktop/cpp-course/cmake-build-debug /Users/eduardo/Desktop/cpp-course/cmake-build-debug/CMakeFiles/pointers_and_references_review.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointers_and_references_review.dir/depend

