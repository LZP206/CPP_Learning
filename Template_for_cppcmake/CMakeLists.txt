cmake_minimum_required(VERSION 3.17)


project(PROJECT)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

aux_source_directory(src dir_src)

add_executable(main main.cpp ${dir_src})

