cmake_minimum_required(VERSION 3.11)

set(SOURCES
    main/main.cpp
)

set(EXEC_SUBNAME array)

set(EXECUTABLE_NAME ${CMAKE_PROJECT_NAME}_${EXEC_SUBNAME})

add_executable(${EXECUTABLE_NAME} ${SOURCES})

target_include_directories(${EXECUTABLE_NAME} PUBLIC include)