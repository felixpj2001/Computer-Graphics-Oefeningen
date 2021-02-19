cmake_minimum_required(VERSION 3.5)

project(Les_1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check https://doc.qt.io/qt/deployment-android.html for more information.
# They need to be set before the find_package( ...) calls below.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(PROJECT_SOURCES
    main.cpp
    RGB_Color.h
    RGB_Color.cpp
    cg1oefeningen.h
    cg1oefeningen.cpp
    CG1_Window.h
    CG1_Window.cpp
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
    CG1_Canvas.h
    CG1_Canvas.cpp
    CG1_ActiveEdgeTable.h
    CG1_ActiveEdgeTable.cpp
    CG1_2DVector.h
    CG1_2DVector.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Les_1
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(Les_1 SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(Les_1
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Les_1 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
