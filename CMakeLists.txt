cmake_minimum_required(VERSION 3.10.2)
project(SP1)

add_subdirectory(source)

configure_file(source/test_E1.cpp ${CMAKE_CURRENT_SOURCE_DIR}/tests/catch_test_E1 COPYONLY)
configure_file(source/test_E2.cpp ${CMAKE_CURRENT_SOURCE_DIR}/tests/catch_test_E2 COPYONLY)
configure_file(source/redirect_io.h ${CMAKE_CURRENT_SOURCE_DIR}/tests COPYONLY)
