cmake_minimum_required(VERSION 3.7)
project(bin_tree_length)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp bintree.h)
add_executable(bin_tree_length ${SOURCE_FILES})