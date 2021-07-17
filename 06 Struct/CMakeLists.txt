cmake_minimum_required(VERSION 3.17)


project(06_Struct)

set(CMAKE_CXX_STANDARD 17)

include_directories(src/include)

aux_source_directory(src/func dir_func)

add_executable(main main.cpp ${dir_func})
add_executable(test01 test01.cpp ${dir_func})
add_executable(test02 test02.cpp ${dir_func})