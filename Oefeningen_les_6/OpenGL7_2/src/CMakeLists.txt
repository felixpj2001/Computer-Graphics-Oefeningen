cmake_minimum_required (VERSION 3.10)
project(opengl7_2)

find_package(Qt6 COMPONENTS Widgets)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS OpenGL REQUIRED)
find_package(Qt6 COMPONENTS OpenGLWidgets REQUIRED)

# Tell CMake to run moc when necessary:
set(CMAKE_AUTOMOC ON)
  
# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)
	
add_executable(opengl7_2
	main.cpp
	openGLApp.h
	openGLApp.cpp
	scene.h
	scene.cpp
	navigation.h
	navigation.cpp
)

set(CMAKE_DEFAULT_STARTUP_PROJECT opengl7_2)
set_property (DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT "opengl7_2")
target_link_libraries(opengl7_2 Qt6::Widgets Qt6::Gui Qt6::OpenGLWidgets Qt6::OpenGL)
