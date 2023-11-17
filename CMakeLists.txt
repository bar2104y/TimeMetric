cmake_minimum_required (VERSION 3.8)

project(TimeMetric LANGUAGES CXX)

SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/bin/")

#исходники в папке ./src/
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
FILE(GLOB_RECURSE SRC_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

#файл для сборки
add_executable(TimeMetric_test ${SRC_FILES})