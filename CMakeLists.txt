cmake_minimum_required(VERSION 3.11..3.24)

project(trainings)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# external includes
include(CTest)
add_subdirectory(external)
include_directories(external/googletest/include)

add_subdirectory(basic_testing)
add_subdirectory(HelloWorld)
add_subdirectory(STL)
add_subdirectory(array)
add_subdirectory(stack)