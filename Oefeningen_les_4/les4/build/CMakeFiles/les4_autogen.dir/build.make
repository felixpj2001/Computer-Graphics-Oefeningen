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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.20.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.20.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_4/les4/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_4/les4/build

# Utility rule file for les4_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/les4_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/les4_autogen.dir/progress.make

CMakeFiles/les4_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_4/les4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target les4"
	/usr/local/Cellar/cmake/3.20.2/bin/cmake -E cmake_autogen /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_4/les4/build/CMakeFiles/les4_autogen.dir/AutogenInfo.json Debug

les4_autogen: CMakeFiles/les4_autogen
les4_autogen: CMakeFiles/les4_autogen.dir/build.make
.PHONY : les4_autogen

# Rule to build all files generated by this target.
CMakeFiles/les4_autogen.dir/build: les4_autogen
.PHONY : CMakeFiles/les4_autogen.dir/build

CMakeFiles/les4_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/les4_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/les4_autogen.dir/clean

CMakeFiles/les4_autogen.dir/depend:
	cd /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_4/les4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_4/les4/src /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_4/les4/src /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_4/les4/build /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_4/les4/build /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_4/les4/build/CMakeFiles/les4_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/les4_autogen.dir/depend

