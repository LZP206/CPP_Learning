cmake_minimum_required(VERSION 3.17)


project(CPP_Learning)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/src/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/library dir_src)

add_subdirectory(01_HelloWorld)
add_subdirectory(02_Structure)
add_subdirectory(03_Array)
add_subdirectory(04_Function)
add_subdirectory(05_Pointer)
add_subdirectory(06_Struct)
add_subdirectory(07_通讯录项目)
add_subdirectory(08_Memory)
add_subdirectory(09_Reference)
add_subdirectory(10_类和对象)
