cmake_minimum_required(VERSION 3.6)
project(Lab_6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp linked_list.cpp linked_list.h node1.cpp node1.h)
add_executable(Lab_6 ${SOURCE_FILES})