cmake_minimum_required(VERSION 3.11..3.24)

project(trainings)

set(CXX_STANDARD 23)
set(CXX_STANDARD_REQUIRED ON)

set(SOURCES 
    source/stl.cpp
)

set(EXEC_SUBNAME
    STL
)

add_executable(${CMAKE_PROJECT_NAME}_${EXEC_SUBNAME} ${SOURCES})