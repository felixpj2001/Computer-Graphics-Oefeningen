cmake_minimum_required (VERSION 3.7) 
project (raytracer)

find_package(Qt6Widgets)
find_package(Qt6Gui)

# Tell CMake to run moc and ui generation when necessary:
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
  
# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)

file(GLOB FILES_SRC
    "./*.h"
    "./*.cpp"
)
	
add_executable(raytracer
	${FILES_SRC}
)

set(CMAKE_DEFAULT_STARTUP_PROJECT raytracer)
set_property (DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT "raytracer")

target_include_directories(raytracer PUBLIC)
target_link_libraries(raytracer Qt6::Widgets Qt6::Gui)
