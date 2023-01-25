include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)

find_package(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})

set(TEST_SOURCES test_main.c)

add_executable(test_fsake ${TEST_SOURCES})
target_link_libraries(test_fsake libfsake ${CHECK_LIBRARIES})