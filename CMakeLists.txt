cmake_minimum_required(VERSION 3.25)
project(my_c_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(my_c_project main.cpp main.cpp include/data.type.h src/01-dataType.cpp src/02-operatorsAll.cpp src/03-pointer.cpp "src/04-pointer-array.cpp" "src/05-struct-define.cpp" src/06-struct-pointer.cpp src/07-struct-nest.cpp "src/08-new.cpp" "src/09-quote.cpp" "src/10-pkg.cpp" "src/11-pkg-cube.cpp" "src/12-object-constructor.cpp" "src/13-class-init.cpp" "src/14-class-static.cpp" "src/15-friend-func.cpp" "src/16-friend-class.cpp" "src/17-base-extend.cpp" "src/18-extend-order.cpp"  "src/19-same-extend.cpp" "src/20-file-io.cpp" "src/21-function-template.cpp" "src/22-function-template-rule.cpp" "src/23-class-template.cpp" "src/24-string.cpp" "src/25-vector.cpp" "src/26-function-object.cpp" "src/27-algorithm-foreach.cpp" "src/28-algorithm-transform.cpp" "src/29-algorithm.cpp")
