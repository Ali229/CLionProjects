cmake_minimum_required(VERSION 3.6)
project(Lab_11)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp priority_queue.template priority_queue.h heap.template heap.h)
add_executable(Lab_11 ${SOURCE_FILES})