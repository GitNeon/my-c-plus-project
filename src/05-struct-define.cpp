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
	int age;
	// 分数
	int score;
};

void createStruct() {
	// 结构体创建方式一：先声明，后赋值
	Student stu1;
	
	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;

	cout << "姓名：" << stu1.name << ",年龄: " << stu1.age << ",分数: " << stu1.score << endl;
}