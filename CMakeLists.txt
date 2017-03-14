cmake_minimum_required(VERSION 2.8)
project(memgraph)

add_definitions(-DHAVE_STRING_H)

#only for linux
#include_directories(/usr/include/graphviz)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES node.cpp node.h edge.cpp edge.h attribute.cpp attribute.h attributes.cpp attributes.h graph_component.cpp graph_component.h graph.cpp graph.h plotter.cpp plotter.h utility.cpp utility.h)

add_library(memgraph ${SOURCE_FILES})