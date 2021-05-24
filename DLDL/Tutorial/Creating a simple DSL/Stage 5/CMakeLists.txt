cmake_minimum_required(VERSION 3.16)

project(QAZ_LanguageProject
                      DESCRIPTION "Project for the language(s): QAZ"
                      LANGUAGES CXX)

find_package(Deamer REQUIRED)

add_subdirectory(CompilerGenerator)
add_subdirectory(QAZ)
