# CMake generated Testfile for 
# Source directory: /home/tomfinet/projects/fsake
# Build directory: /home/tomfinet/projects/fsake/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_fsake "/home/tomfinet/projects/fsake/build/tests/test_fsake")
set_tests_properties(test_fsake PROPERTIES  _BACKTRACE_TRIPLES "/home/tomfinet/projects/fsake/CMakeLists.txt;16;add_test;/home/tomfinet/projects/fsake/CMakeLists.txt;0;")
subdirs("src")
subdirs("tests")
