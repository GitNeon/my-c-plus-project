cmake_minimum_required(VERSION 3.25)
project(my_c_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(my_c_project main.cpp main.cpp include/data.type.h src/01-dataType.cpp src/02-operatorsAll.cpp src/03-pointer.cpp "src/04-pointer-array.cpp" "src/05-struct-define.cpp" src/06-struct-pointer.cpp src/07-struct-nest.cpp "src/08-new.cpp" "src/09-quote.cpp")
