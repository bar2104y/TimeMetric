cmake_minimum_required (VERSION 3.8)

project(TimeMetric
        VERSION 0.0.1
        DESCRIPTION "Library for measuring time in C++ programs"
        LANGUAGES CXX)

        FILE(GLOB_RECURSE HEADERS_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
)

FILE(GLOB_RECURSE SOURCES_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

set(SOURCES ${SOURCES_FILES})
set(HEADERS ${HEADERS_FILES})

add_library(TimeMetric ${SOURCES} ${HEADERS})
add_library(TimeMetric::Timemetric ALIAS TimeMetric)

SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/bin/")

target_include_directories(TimeMetric PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})