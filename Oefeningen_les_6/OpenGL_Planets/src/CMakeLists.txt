cmake_minimum_required (VERSION 3.7) 
project (opengl_planets)

# find_package(Qt6Widgets)
# find_package(Qt6Gui)
# find_package(Qt6OpenGL)
# find_package(OpenGL REQUIRED)
find_package(Qt6 COMPONENTS Widgets)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS OpenGL REQUIRED)
find_package(Qt6 COMPONENTS OpenGLWidgets REQUIRED)

# Tell CMake to run moc when necessary:
set(CMAKE_AUTOMOC ON)
  
# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)
	
add_executable(opengl_planets
	main.cpp
	planets.h
	planets.cpp
	planetsview.h
	planetsview.cpp
	util.h
)

set(CMAKE_DEFAULT_STARTUP_PROJECT opengl_planets)
set_property (DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT "opengl_planets")
target_link_libraries(opengl_planets Qt6::Widgets Qt6::Gui Qt6::OpenGLWidgets Qt6::OpenGL)

# target_include_directories(opengl_planets PUBLIC ${OPENGL_INCLUDE_DIR})
# target_link_libraries(opengl_planets Qt6::Widgets Qt6::Gui Qt6::OpenGL ${OPENGL_LIBRARIES})