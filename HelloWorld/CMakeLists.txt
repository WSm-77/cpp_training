cmake_minimum_required(VERSION 3.11)

set(SOURCES 
    source/first.cpp
)

set(EXEC_SUBNAME
    first
)

add_executable(${CMAKE_PROJECT_NAME}_${EXEC_SUBNAME} ${SOURCES})