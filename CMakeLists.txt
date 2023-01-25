cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

project(fsake C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pthread")

set(CHECK_INSTALL_DIR)

add_subdirectory(src)
add_subdirectory(tests)

enable_testing()
add_test(NAME test_fsake COMMAND test_fsake)