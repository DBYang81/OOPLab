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
CMAKE_SOURCE_DIR = "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/intro_proj.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/intro_proj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/intro_proj.dir/flags.make

CMakeFiles/intro_proj.dir/introd.cpp.o: CMakeFiles/intro_proj.dir/flags.make
CMakeFiles/intro_proj.dir/introd.cpp.o: ../introd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/intro_proj.dir/introd.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/intro_proj.dir/introd.cpp.o -c "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1/introd.cpp"

CMakeFiles/intro_proj.dir/introd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/intro_proj.dir/introd.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1/introd.cpp" > CMakeFiles/intro_proj.dir/introd.cpp.i

CMakeFiles/intro_proj.dir/introd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/intro_proj.dir/introd.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1/introd.cpp" -o CMakeFiles/intro_proj.dir/introd.cpp.s

# Object files for target intro_proj
intro_proj_OBJECTS = \
"CMakeFiles/intro_proj.dir/introd.cpp.o"

# External object files for target intro_proj
intro_proj_EXTERNAL_OBJECTS =

intro_proj: CMakeFiles/intro_proj.dir/introd.cpp.o
intro_proj: CMakeFiles/intro_proj.dir/build.make
intro_proj: CMakeFiles/intro_proj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable intro_proj"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/intro_proj.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/intro_proj.dir/build: intro_proj
.PHONY : CMakeFiles/intro_proj.dir/build

CMakeFiles/intro_proj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/intro_proj.dir/cmake_clean.cmake
.PHONY : CMakeFiles/intro_proj.dir/clean

CMakeFiles/intro_proj.dir/depend:
	cd "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1" "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1" "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1/cmake-build-debug" "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1/cmake-build-debug" "/Volumes/EXTMACIN/Metropolia/Metro_Semester III/period II/C++/weekly_proj/OOPLab/proj1/cmake-build-debug/CMakeFiles/intro_proj.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/intro_proj.dir/depend

