cmake_minimum_required(VERSION 3.19)

project(QmlTreeview2
  VERSION 0.1.0
  DESCRIPTION "Self-contained QML TreeView implementation that only depends on QtQuick 2 imports"
  LANGUAGES CXX
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_library(QmlTreeview2 STATIC)
add_library(QmlTreeview2::QmlTreeview2 ALIAS QmlTreeview2)


set_target_properties(QmlTreeview2
  PROPERTIES
    DEBUG_POSTFIX "_d"
)

target_compile_options(QmlTreeview2
  PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/MP>
)

target_link_libraries(QmlTreeview2
  PUBLIC
    Qt5::Core Qt5::Qml
)

target_sources(QmlTreeview2 PUBLIC
  ${QmlTreeview2_SOURCE_DIR}/treemodeladaptor.h

  ${QmlTreeview2_SOURCE_DIR}/treemodeladaptor.cpp
)

