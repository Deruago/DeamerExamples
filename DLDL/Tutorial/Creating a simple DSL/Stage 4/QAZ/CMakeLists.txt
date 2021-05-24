cmake_minimum_required(VERSION 3.18)

project(QAZ)

find_package(Deamer REQUIRED)

include(deamer.cmake)

add_subdirectory(extern)
add_subdirectory(lib)

