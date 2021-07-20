cmake_minimum_required(VERSION 3.17)


project(CPP_Learning)

set(CMAKE_CXX_STANDARD 17)

include_directories(/Users/lizeping/CPP_Learning/src/include)
aux_source_directory(/Users/lizeping/CPP_Learning/src/library dir_src)

add_subdirectory(01_HelloWorld)
add_subdirectory(02_程序结构)
add_subdirectory(03_数组)
add_subdirectory(04_函数)
add_subdirectory(05_指针)
add_subdirectory(06_结构体)
add_subdirectory(07_通讯录项目)
add_subdirectory(08_内存模型)
add_subdirectory(09_引用)
add_subdirectory(10_类和对象)
