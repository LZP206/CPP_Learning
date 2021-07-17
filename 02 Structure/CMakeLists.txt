cmake_minimum_required(VERSION 3.17)
project(02_Structure)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)

add_subdirectory(Jump_Structure)
add_subdirectory(Loop_Structure)
add_subdirectory(Selective_Structure)