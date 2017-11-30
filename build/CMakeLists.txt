cmake_minimum_required(VERSION 2.8)
project(mersort)
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/..")
include_directories("${CMAKE_BINARY_DIR}/..headers")
add_executable("${CMAKE_BINARY_DIR}/.. src")

