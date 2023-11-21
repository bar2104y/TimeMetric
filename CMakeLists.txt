cmake_minimum_required (VERSION 3.8)

message("Configuring TimeMetric start")
project(TimeMetric
        VERSION 0.0.1
        DESCRIPTION "Library for measuring time in C++ programs"
        LANGUAGES CXX)

set(SOURCES
    "src/TimeMetric.cpp"
    "src/TimeMetricManager.cpp")
set(HEADERS
    "src/TimeMetric.h"
    "src/TimeMetricManager.h")

message(${SOURCES})
message(${HEADERS})

add_library(TimeMetric ${SOURCES} ${HEADERS})
message("Configuring TimeMetric done")