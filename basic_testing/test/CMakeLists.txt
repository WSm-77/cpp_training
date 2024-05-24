cmake_minimum_required(VERSION 3.11)

file(GLOB_RECURSE SOURCES source/*.cpp ../source/*.cpp main/main.cpp)

set(EXEC_NAME
    ${PROJECT_NAME}_${EXEC_SUBNAME}_test
)

add_executable(${EXEC_NAME} ${SOURCES})
target_link_libraries(${EXEC_NAME} PRIVATE GTest::gtest_main)
target_include_directories(${EXEC_NAME} PUBLIC ../include)

enable_testing()

# add_test(${EXEC_NAME})
include(GoogleTest)
gtest_discover_tests(${EXEC_NAME})