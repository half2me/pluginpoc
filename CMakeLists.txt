cmake_minimum_required(VERSION 3.6)
project(untitled)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Werror")

set(LIB_SOURCE_FILES library.cpp library.h Plugin.h)
add_library(poc SHARED ${LIB_SOURCE_FILES})

set(SOURCE_FILES main.cpp Plugin.h)
add_executable(pocmain ${SOURCE_FILES})
target_link_libraries(pocmain ${CMAKE_DL_LIBS})