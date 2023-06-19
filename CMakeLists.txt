cmake_minimum_required(VERSION 3.25)
project(my_c_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(my_c_project main.cpp main.cpp include/data.type.h src/01-dataType/dataType.cpp)
