#include <iostream>
#include <string>

using namespace std;

// 封装的使用
// 1.封装的意义，将属性及其相关行为封装在一起，表现生活中的实物
// 2.将属性和行为加以权限控制

const double PI = 3.14;

// 案例1，封装一个圆，并求周长
class Circle {

	public:
		// 半径
		int r;

		// 计算周长方法
		double calculateRound() {
			return 2 * PI * r;
		}

		// 计算面积
		double calculateArea() {
			return r * r;
		}
};

void testPkg() {
	// 创建圆类
	Circle c1;
	// 半径赋值
	c1.r = 10;

	double zc = c1.calculateRound();
	double mj = c1.calculateArea();

	cout << "圆的周长是：" << zc << endl;
	cout << "圆的面积是：" << mj << endl;
}


// 案例2，设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student {
private:
	string s_name;

	int s_id;

public:
	void setName(string name) {
		s_name = name;
	}

	void setID(int id) {
		s_id = id;
	}

	void showInfo() {
		cout << "学生姓名：" << s_name << endl;
		cout << "学生学号: " << s_id << endl;
	}
};

void testCreateStudent() {
	Student stu1;
	stu1.setName("小明");
	stu1.setID(1023456);

	stu1.showInfo();
}