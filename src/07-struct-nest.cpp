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

void testNestStruct() {
    Teacher t1;
    t1.id = 10002;
    t1.name = "王老师";
    t1.age = 32;
    t1.student.name = "小明";
    t1.student.age = 18;
    t1.student.score = 85;

    cout << "老师信息：" << "编号：" << t1.id << "---姓名：" << t1.name << "---年龄：" << t1.age << "---辅导的学生信息：" << t1.student.name << endl;
}