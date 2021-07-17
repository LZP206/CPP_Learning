cmake_minimum_required(VERSION 3.17)


project(09_Reference)

set(CMAKE_CXX_STANDARD 17)

include_directories(src/include)

aux_source_directory(src/func dir_func)

add_executable(main main.cpp ${dir_func})

