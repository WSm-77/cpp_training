cmake_minimum_required(VERSION 3.11)

set(EXEC_SUBNAME
    basic_testing
)

set(EXECUTABLE_NAME ${CMAKE_PROJECT_NAME}_${EXEC_SUBNAME})

file(GLOB_RECURSE SOURCES source/*.cpp main/main.cpp)

add_executable(${EXECUTABLE_NAME} ${SOURCES})

target_include_directories(${EXECUTABLE_NAME} PUBLIC include)

if(BUILD_TESTING)
    add_subdirectory(test)
endif()