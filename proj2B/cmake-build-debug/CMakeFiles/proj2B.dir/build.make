# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/proj2B.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/proj2B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/proj2B.dir/flags.make

CMakeFiles/proj2B.dir/lab2b.cpp.o: CMakeFiles/proj2B.dir/flags.make
CMakeFiles/proj2B.dir/lab2b.cpp.o: ../lab2b.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/proj2B.dir/lab2b.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/proj2B.dir/lab2b.cpp.o -c "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B/lab2b.cpp"

CMakeFiles/proj2B.dir/lab2b.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proj2B.dir/lab2b.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B/lab2b.cpp" > CMakeFiles/proj2B.dir/lab2b.cpp.i

CMakeFiles/proj2B.dir/lab2b.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proj2B.dir/lab2b.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B/lab2b.cpp" -o CMakeFiles/proj2B.dir/lab2b.cpp.s

# Object files for target proj2B
proj2B_OBJECTS = \
"CMakeFiles/proj2B.dir/lab2b.cpp.o"

# External object files for target proj2B
proj2B_EXTERNAL_OBJECTS =

proj2B: CMakeFiles/proj2B.dir/lab2b.cpp.o
proj2B: CMakeFiles/proj2B.dir/build.make
proj2B: CMakeFiles/proj2B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable proj2B"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/proj2B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/proj2B.dir/build: proj2B
.PHONY : CMakeFiles/proj2B.dir/build

CMakeFiles/proj2B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/proj2B.dir/cmake_clean.cmake
.PHONY : CMakeFiles/proj2B.dir/clean

CMakeFiles/proj2B.dir/depend:
	cd "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B" "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B" "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B/cmake-build-debug" "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B/cmake-build-debug" "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj2B/cmake-build-debug/CMakeFiles/proj2B.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/proj2B.dir/depend

