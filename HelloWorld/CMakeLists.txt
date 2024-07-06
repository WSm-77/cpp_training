cmake_minimum_required(VERSION 3.11..3.24)

project(trainings)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES 
    source/first.cpp
)

set(EXEC_SUBNAME
    first
)

add_executable(${CMAKE_PROJECT_NAME}_${EXEC_SUBNAME} ${SOURCES})