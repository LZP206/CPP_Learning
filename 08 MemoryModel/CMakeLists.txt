cmake_minimum_required(VERSION 3.17)


project(08_MemoryModel)

set(CMAKE_CXX_STANDARD 17)

include_directories(src/include)

aux_source_directory(src/func dir_func)

add_executable(global global.cpp ${dir_func})
add_executable(stack stack.cpp ${dir_func})
add_executable(heap heap.cpp ${dir_func})