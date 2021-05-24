cmake_minimum_required(VERSION 3.16)
project(QAZ_CompilerGenerator
                      DESCRIPTION "Compiler/Ecosystem generator for language(s): QAZ. This CompilerGenerator project uses Deamer CC for the generation, and DLDL to generate the definitions."
                      LANGUAGES CXX)
find_package(Deamer REQUIRED)
file(GLOB_RECURSE SOURCE_LIST "${QAZ_CompilerGenerator_SOURCE_DIR}/lib/*.cpp")
add_library(QAZ_CompilerGenerator_static_library STATIC ${SOURCE_LIST})
target_include_directories(QAZ_CompilerGenerator_static_library PUBLIC "${QAZ_CompilerGenerator_SOURCE_DIR}/include")
target_link_libraries(QAZ_CompilerGenerator_static_library PUBLIC Deamer)
target_compile_features(QAZ_CompilerGenerator_static_library PUBLIC cxx_std_17)
set_target_properties(QAZ_CompilerGenerator_static_library PROPERTIES LINKER_LANGUAGE CXX)
add_executable(QAZ_CompilerGenerator_Main "${QAZ_CompilerGenerator_SOURCE_DIR}/main.cpp")
target_link_libraries(QAZ_CompilerGenerator_Main PUBLIC QAZ_CompilerGenerator_static_library)
