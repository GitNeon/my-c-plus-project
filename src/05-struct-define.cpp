#include <string>
#include <iostream>

using namespace std;

// 使用struct关键字定义结构体
// 这里定义一个学生结构体
struct Student {
    // 成员列表
    // 姓名
    string name;
    // 年龄
    int age{};
    // 分数
    int score{};
};

void createStruct() {
    // 结构体创建方式一：先声明，后赋值
    Student stu1;

    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 100;

    cout << "姓名：" << stu1.name << ",年龄: " << stu1.age << ",分数: " << stu1.score << endl;

    // 结构体变量创建方式二、声明时直接赋值
    Student stu2 = {"李四", 19, 85};
    cout << "姓名：" << stu2.name << ",年龄：" << stu2.age << ",分数：" << stu2.score << endl;
}

// 创建结构体数组
void createStructArray() {
    Student stuArray[] = {
            {"张三", 18, 80},
            {"李四", 19, 60},
            {"王五", 20, 70}
    };

    for (int i = 0; i < 3; ++i) {
        Student _s = stuArray[i];
        cout << "遍历=====" << "姓名: " << _s.name << ",年龄：" << _s.age << ",分数: " << _s.score << endl;
    }
}