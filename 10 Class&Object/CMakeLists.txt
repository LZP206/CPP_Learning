cmake_minimum_required(VERSION 3.17)


project(10_Class&Object)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

aux_source_directory(src dir_src)


add_executable(01Encapsulation 01Encapsulation.cpp ${dir_src})
add_executable(02INITIALandCLEANUP 02INITIALandCLEANUP.cpp ${dir_src})
add_executable(03thisPoint 03thisPoint.cpp ${dir_src})


