cmake_minimum_required(VERSION 3.18)

project(QAZ)

find_package(Deamer_External REQUIRED)

include(deamer.cmake)

add_subdirectory(extern)
add_subdirectory(lib)

add_executable(QAZ_Main "main.cpp")
target_link_libraries(QAZ_Main QAZ_static_library)
