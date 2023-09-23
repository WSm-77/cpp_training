cmake_minimum_required(VERSION 3.11)

set(SOURCES 
    stl.cpp
)

set(EXEC_SUBNAME
    stl
)

add_executable(${CMAKE_PROJECT_NAME}_${EXEC_SUBNAME} ${SOURCES})