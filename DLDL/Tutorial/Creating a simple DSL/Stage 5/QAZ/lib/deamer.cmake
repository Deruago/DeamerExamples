# This file is auto-generated and auto-maintained.
# Please don't change code in this file, as new changes will be discarded,
# when Deamer regenerates the project.
#
# If you want to contribute to Deamer.
# Please visit: https://github.com/Deruago/theDeamerProject 
#
# This file is part of the directory: lib

file(GLOB_RECURSE SOURCE_LIST "${QAZ_SOURCE_DIR}/lib/*.cpp")

add_library(QAZ_static_library STATIC ${SOURCE_LIST})

target_include_directories(QAZ_static_library PUBLIC "${QAZ_SOURCE_DIR}/extern" "${QAZ_SOURCE_DIR}/include")
target_compile_features(QAZ_static_library PUBLIC cxx_std_17)
set_target_properties(QAZ_static_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(QAZ_static_library PUBLIC QAZ_external_libraries)

add_library(QAZ_shared_library SHARED ${SOURCE_LIST})

target_include_directories(QAZ_shared_library PUBLIC "${QAZ_SOURCE_DIR}/extern" "${QAZ_SOURCE_DIR}/include")
target_compile_features(QAZ_shared_library PUBLIC cxx_std_17)
set_target_properties(QAZ_shared_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(QAZ_shared_library PUBLIC QAZ_external_libraries)

add_subdirectory(Ast)
add_subdirectory(Flex)
add_subdirectory(Bison)
