//
// Created by zxc881 on 2023/7/3.
//
#include <string>
#include <iostream>

using namespace std;

// 结构体定义
struct Student {
    string name;
    int age;
    int score;
};

void pointerToStruct() {
    Student student = {"张三", 18, 100 };
    // 结构体指针
    Student *p_stu = &student;
    // 通过->访问操作体成员
    cout << "姓名: " << p_stu->name << ",年龄: " << p_stu->age << ",分数: " << p_stu->score << endl;
}