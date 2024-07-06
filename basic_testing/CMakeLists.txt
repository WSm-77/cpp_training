cmake_minimum_required(VERSION 3.11..3.24)

project(trainings)

# external includes
if (NOT DEFINED BUILD_TESTING)
    include(CTest)
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../external ${CMAKE_CURRENT_SOURCE_DIR}/../../trainings_build/external)
    include_directories(../external/googletest/include)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

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