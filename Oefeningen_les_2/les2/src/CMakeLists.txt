cmake_minimum_required (VERSION 3.7) 
project (les2)

find_package(Qt5Widgets)
find_package(Qt5Gui)

# Tell CMake to run moc and ui generation when necessary:
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
  
# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)
	
add_executable(les2
	main.cpp
	RGB_Color.h
	RGB_Color.cpp
	cg_MainWindow.h
	cg_MainWindow.cpp
	CG1_Polygon.h
	CG1_Polygon.cpp
	CG1_Line.h
	CG1_Line.cpp
	CG1_EdgeTableRow.h
	CG1_EdgeTableRow.cpp
	CG1_EdgeTable.h
	CG1_EdgeTable.cpp
	CG1_Edge.h
	CG1_Edge.cpp
	CG1_Drawtool.h
	CG1_Drawtool.cpp
	cg_Canvas.h
	cg_Canvas.cpp
	CG1_ActiveEdgeTable.h
	CG1_ActiveEdgeTable.cpp
	CG1_2DVector.h
	CG1_2DVector.cpp
	CG1_2DPolygon.h
	CG1_2DPolygon.cpp
)

set(CMAKE_DEFAULT_STARTUP_PROJECT les2)
set_property (DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT "les2")

target_include_directories(les2 PUBLIC)
target_link_libraries(les2 Qt5::Widgets Qt5::Gui)
