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
CMAKE_SOURCE_DIR = /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build

# Include any dependencies generated for this target.
include CMakeFiles/raytracer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/raytracer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/raytracer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/raytracer.dir/flags.make

CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.o: raytracer_autogen/mocs_compilation.cpp
CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.o -MF CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/raytracer_autogen/mocs_compilation.cpp

CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/raytracer_autogen/mocs_compilation.cpp > CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.i

CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/raytracer_autogen/mocs_compilation.cpp -o CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.s

CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/AxisAlignedBox.cpp
CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.o -MF CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.o.d -o CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/AxisAlignedBox.cpp

CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/AxisAlignedBox.cpp > CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.i

CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/AxisAlignedBox.cpp -o CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.s

CMakeFiles/raytracer.dir/RGB_Color.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/RGB_Color.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/RGB_Color.cpp
CMakeFiles/raytracer.dir/RGB_Color.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/raytracer.dir/RGB_Color.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/RGB_Color.cpp.o -MF CMakeFiles/raytracer.dir/RGB_Color.cpp.o.d -o CMakeFiles/raytracer.dir/RGB_Color.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/RGB_Color.cpp

CMakeFiles/raytracer.dir/RGB_Color.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/RGB_Color.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/RGB_Color.cpp > CMakeFiles/raytracer.dir/RGB_Color.cpp.i

CMakeFiles/raytracer.dir/RGB_Color.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/RGB_Color.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/RGB_Color.cpp -o CMakeFiles/raytracer.dir/RGB_Color.cpp.s

CMakeFiles/raytracer.dir/RayTracer.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/RayTracer.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/RayTracer.cpp
CMakeFiles/raytracer.dir/RayTracer.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/raytracer.dir/RayTracer.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/RayTracer.cpp.o -MF CMakeFiles/raytracer.dir/RayTracer.cpp.o.d -o CMakeFiles/raytracer.dir/RayTracer.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/RayTracer.cpp

CMakeFiles/raytracer.dir/RayTracer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/RayTracer.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/RayTracer.cpp > CMakeFiles/raytracer.dir/RayTracer.cpp.i

CMakeFiles/raytracer.dir/RayTracer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/RayTracer.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/RayTracer.cpp -o CMakeFiles/raytracer.dir/RayTracer.cpp.s

CMakeFiles/raytracer.dir/Shape.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/Shape.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/Shape.cpp
CMakeFiles/raytracer.dir/Shape.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/raytracer.dir/Shape.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/Shape.cpp.o -MF CMakeFiles/raytracer.dir/Shape.cpp.o.d -o CMakeFiles/raytracer.dir/Shape.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/Shape.cpp

CMakeFiles/raytracer.dir/Shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/Shape.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/Shape.cpp > CMakeFiles/raytracer.dir/Shape.cpp.i

CMakeFiles/raytracer.dir/Shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/Shape.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/Shape.cpp -o CMakeFiles/raytracer.dir/Shape.cpp.s

CMakeFiles/raytracer.dir/ShapeList.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/ShapeList.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/ShapeList.cpp
CMakeFiles/raytracer.dir/ShapeList.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/raytracer.dir/ShapeList.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/ShapeList.cpp.o -MF CMakeFiles/raytracer.dir/ShapeList.cpp.o.d -o CMakeFiles/raytracer.dir/ShapeList.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/ShapeList.cpp

CMakeFiles/raytracer.dir/ShapeList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/ShapeList.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/ShapeList.cpp > CMakeFiles/raytracer.dir/ShapeList.cpp.i

CMakeFiles/raytracer.dir/ShapeList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/ShapeList.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/ShapeList.cpp -o CMakeFiles/raytracer.dir/ShapeList.cpp.s

CMakeFiles/raytracer.dir/Vec3.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/Vec3.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/Vec3.cpp
CMakeFiles/raytracer.dir/Vec3.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/raytracer.dir/Vec3.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/Vec3.cpp.o -MF CMakeFiles/raytracer.dir/Vec3.cpp.o.d -o CMakeFiles/raytracer.dir/Vec3.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/Vec3.cpp

CMakeFiles/raytracer.dir/Vec3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/Vec3.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/Vec3.cpp > CMakeFiles/raytracer.dir/Vec3.cpp.i

CMakeFiles/raytracer.dir/Vec3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/Vec3.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/Vec3.cpp -o CMakeFiles/raytracer.dir/Vec3.cpp.s

CMakeFiles/raytracer.dir/cg_Canvas.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/cg_Canvas.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/cg_Canvas.cpp
CMakeFiles/raytracer.dir/cg_Canvas.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/raytracer.dir/cg_Canvas.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/cg_Canvas.cpp.o -MF CMakeFiles/raytracer.dir/cg_Canvas.cpp.o.d -o CMakeFiles/raytracer.dir/cg_Canvas.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/cg_Canvas.cpp

CMakeFiles/raytracer.dir/cg_Canvas.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/cg_Canvas.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/cg_Canvas.cpp > CMakeFiles/raytracer.dir/cg_Canvas.cpp.i

CMakeFiles/raytracer.dir/cg_Canvas.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/cg_Canvas.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/cg_Canvas.cpp -o CMakeFiles/raytracer.dir/cg_Canvas.cpp.s

CMakeFiles/raytracer.dir/cg_MainWindow.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/cg_MainWindow.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/cg_MainWindow.cpp
CMakeFiles/raytracer.dir/cg_MainWindow.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/raytracer.dir/cg_MainWindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/cg_MainWindow.cpp.o -MF CMakeFiles/raytracer.dir/cg_MainWindow.cpp.o.d -o CMakeFiles/raytracer.dir/cg_MainWindow.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/cg_MainWindow.cpp

CMakeFiles/raytracer.dir/cg_MainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/cg_MainWindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/cg_MainWindow.cpp > CMakeFiles/raytracer.dir/cg_MainWindow.cpp.i

CMakeFiles/raytracer.dir/cg_MainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/cg_MainWindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/cg_MainWindow.cpp -o CMakeFiles/raytracer.dir/cg_MainWindow.cpp.s

CMakeFiles/raytracer.dir/main.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/main.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/main.cpp
CMakeFiles/raytracer.dir/main.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/raytracer.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/main.cpp.o -MF CMakeFiles/raytracer.dir/main.cpp.o.d -o CMakeFiles/raytracer.dir/main.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/main.cpp

CMakeFiles/raytracer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/main.cpp > CMakeFiles/raytracer.dir/main.cpp.i

CMakeFiles/raytracer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/main.cpp -o CMakeFiles/raytracer.dir/main.cpp.s

CMakeFiles/raytracer.dir/pointLight.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/pointLight.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/pointLight.cpp
CMakeFiles/raytracer.dir/pointLight.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/raytracer.dir/pointLight.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/pointLight.cpp.o -MF CMakeFiles/raytracer.dir/pointLight.cpp.o.d -o CMakeFiles/raytracer.dir/pointLight.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/pointLight.cpp

CMakeFiles/raytracer.dir/pointLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/pointLight.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/pointLight.cpp > CMakeFiles/raytracer.dir/pointLight.cpp.i

CMakeFiles/raytracer.dir/pointLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/pointLight.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/pointLight.cpp -o CMakeFiles/raytracer.dir/pointLight.cpp.s

CMakeFiles/raytracer.dir/ray.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/ray.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/ray.cpp
CMakeFiles/raytracer.dir/ray.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/raytracer.dir/ray.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/ray.cpp.o -MF CMakeFiles/raytracer.dir/ray.cpp.o.d -o CMakeFiles/raytracer.dir/ray.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/ray.cpp

CMakeFiles/raytracer.dir/ray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/ray.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/ray.cpp > CMakeFiles/raytracer.dir/ray.cpp.i

CMakeFiles/raytracer.dir/ray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/ray.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/ray.cpp -o CMakeFiles/raytracer.dir/ray.cpp.s

CMakeFiles/raytracer.dir/returnObject.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/returnObject.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/returnObject.cpp
CMakeFiles/raytracer.dir/returnObject.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/raytracer.dir/returnObject.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/returnObject.cpp.o -MF CMakeFiles/raytracer.dir/returnObject.cpp.o.d -o CMakeFiles/raytracer.dir/returnObject.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/returnObject.cpp

CMakeFiles/raytracer.dir/returnObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/returnObject.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/returnObject.cpp > CMakeFiles/raytracer.dir/returnObject.cpp.i

CMakeFiles/raytracer.dir/returnObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/returnObject.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/returnObject.cpp -o CMakeFiles/raytracer.dir/returnObject.cpp.s

CMakeFiles/raytracer.dir/scene.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/scene.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/scene.cpp
CMakeFiles/raytracer.dir/scene.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/raytracer.dir/scene.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/scene.cpp.o -MF CMakeFiles/raytracer.dir/scene.cpp.o.d -o CMakeFiles/raytracer.dir/scene.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/scene.cpp

CMakeFiles/raytracer.dir/scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/scene.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/scene.cpp > CMakeFiles/raytracer.dir/scene.cpp.i

CMakeFiles/raytracer.dir/scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/scene.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/scene.cpp -o CMakeFiles/raytracer.dir/scene.cpp.s

CMakeFiles/raytracer.dir/sphere.cpp.o: CMakeFiles/raytracer.dir/flags.make
CMakeFiles/raytracer.dir/sphere.cpp.o: /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/sphere.cpp
CMakeFiles/raytracer.dir/sphere.cpp.o: CMakeFiles/raytracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/raytracer.dir/sphere.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/raytracer.dir/sphere.cpp.o -MF CMakeFiles/raytracer.dir/sphere.cpp.o.d -o CMakeFiles/raytracer.dir/sphere.cpp.o -c /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/sphere.cpp

CMakeFiles/raytracer.dir/sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raytracer.dir/sphere.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/sphere.cpp > CMakeFiles/raytracer.dir/sphere.cpp.i

CMakeFiles/raytracer.dir/sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raytracer.dir/sphere.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src/sphere.cpp -o CMakeFiles/raytracer.dir/sphere.cpp.s

# Object files for target raytracer
raytracer_OBJECTS = \
"CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.o" \
"CMakeFiles/raytracer.dir/RGB_Color.cpp.o" \
"CMakeFiles/raytracer.dir/RayTracer.cpp.o" \
"CMakeFiles/raytracer.dir/Shape.cpp.o" \
"CMakeFiles/raytracer.dir/ShapeList.cpp.o" \
"CMakeFiles/raytracer.dir/Vec3.cpp.o" \
"CMakeFiles/raytracer.dir/cg_Canvas.cpp.o" \
"CMakeFiles/raytracer.dir/cg_MainWindow.cpp.o" \
"CMakeFiles/raytracer.dir/main.cpp.o" \
"CMakeFiles/raytracer.dir/pointLight.cpp.o" \
"CMakeFiles/raytracer.dir/ray.cpp.o" \
"CMakeFiles/raytracer.dir/returnObject.cpp.o" \
"CMakeFiles/raytracer.dir/scene.cpp.o" \
"CMakeFiles/raytracer.dir/sphere.cpp.o"

# External object files for target raytracer
raytracer_EXTERNAL_OBJECTS =

raytracer: CMakeFiles/raytracer.dir/raytracer_autogen/mocs_compilation.cpp.o
raytracer: CMakeFiles/raytracer.dir/AxisAlignedBox.cpp.o
raytracer: CMakeFiles/raytracer.dir/RGB_Color.cpp.o
raytracer: CMakeFiles/raytracer.dir/RayTracer.cpp.o
raytracer: CMakeFiles/raytracer.dir/Shape.cpp.o
raytracer: CMakeFiles/raytracer.dir/ShapeList.cpp.o
raytracer: CMakeFiles/raytracer.dir/Vec3.cpp.o
raytracer: CMakeFiles/raytracer.dir/cg_Canvas.cpp.o
raytracer: CMakeFiles/raytracer.dir/cg_MainWindow.cpp.o
raytracer: CMakeFiles/raytracer.dir/main.cpp.o
raytracer: CMakeFiles/raytracer.dir/pointLight.cpp.o
raytracer: CMakeFiles/raytracer.dir/ray.cpp.o
raytracer: CMakeFiles/raytracer.dir/returnObject.cpp.o
raytracer: CMakeFiles/raytracer.dir/scene.cpp.o
raytracer: CMakeFiles/raytracer.dir/sphere.cpp.o
raytracer: CMakeFiles/raytracer.dir/build.make
raytracer: /usr/local/opt/qt/lib/QtWidgets.framework/Versions/A/QtWidgets
raytracer: /usr/local/opt/qt/lib/QtGui.framework/Versions/A/QtGui
raytracer: /usr/local/opt/qt/lib/QtCore.framework/Versions/A/QtCore
raytracer: CMakeFiles/raytracer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable raytracer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/raytracer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/raytracer.dir/build: raytracer
.PHONY : CMakeFiles/raytracer.dir/build

CMakeFiles/raytracer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/raytracer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/raytracer.dir/clean

CMakeFiles/raytracer.dir/depend:
	cd /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/src /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build /Users/pieter-janvanoppen/Documents/Documenten/School/2020-2021/CG/Computer-Graphics-Oefeningen/Oefeningen_les_7/raytracer/build/CMakeFiles/raytracer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/raytracer.dir/depend

