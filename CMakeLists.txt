cmake_minimum_required(VERSION 2.8)
project(memgraph)

add_definitions(-DHAVE_STRING_H)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/node.cpp
    src/node.h
    src/edge.cpp
    src/edge.h
    src/attribute.cpp
    src/attribute.h
    src/attributes.cpp
    src/attributes.h
    src/graph_component.cpp
    src/graph_component.h
    src/graph.cpp
    src/graph.h
    src/plotter.cpp
    src/plotter.h
    src/utility.cpp
    src/utility.h
    )

add_library(memgraph ${SOURCE_FILES})
