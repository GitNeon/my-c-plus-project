// 结构体嵌套
#include <iostream>
#include <string>

using namespace std;

// 定义学生结构体
struct Student {
    string name;
    int age;
    int score;
};

// 定义老师结构体
struct Teacher {
    int id; // 老师ID
    string name; // 老师姓名
    int age; // 老师年龄
    Student student; // 一对一辅导学生
};