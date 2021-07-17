cmake_minimum_required(VERSION 3.17)


project(04_Function)

set(CMAKE_CXX_STANDARD 17)

include_directories(src/include)

aux_source_directory(src/func dir_func)

add_executable(main main.cpp ${dir_func})
add_executable(Function Function.cpp)
add_executable(FunctionPlus FunctionPlus.cpp ${dir_func})

