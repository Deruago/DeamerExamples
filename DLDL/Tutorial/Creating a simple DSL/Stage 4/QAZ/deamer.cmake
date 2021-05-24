# This file is auto-generated and auto-maintained.
# Please don't change code in this file, as new changes will be discarded,
# when Deamer regenerates the project.
#
# If you want to contribute to Deamer.
# Please visit: https://github.com/Deruago/theDeamerProject 

find_package(Deamer REQUIRED)


add_library(QAZ_external_libraries STATIC "${QAZ_SOURCE_DIR}/lib/QAZ.cpp")
target_link_libraries(QAZ_external_libraries PUBLIC Deamer)
target_include_directories(QAZ_external_libraries PUBLIC "${QAZ_SOURCE_DIR}/extern" "${QAZ_SOURCE_DIR}/include")

function(QAZ_add_external_library external_library_name source_files)
	set(external_library_full_name "QAZ_${external_library_name}_static_library")

	add_library(${external_library_full_name} STATIC ${source_files})

	target_link_libraries(${external_library_full_name} PUBLIC Deamer)
	target_include_directories(${external_library_full_name} PRIVATE "${QAZ_SOURCE_DIR}/extern" "${QAZ_SOURCE_DIR}/include")
	target_compile_features(${external_library_full_name} PUBLIC cxx_std_17)
	set_target_properties(${external_library_full_name} PROPERTIES LINKED_LANGUAGE CXX)
	set_property(TARGET ${external_library_full_name} PROPERTY POSITION_INDEPENDENT_CODE ON)
	
	target_link_libraries(QAZ_external_libraries PUBLIC ${external_library_full_name})
	
endfunction()

