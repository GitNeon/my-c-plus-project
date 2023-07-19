#include <iostream>
#include <string>

using namespace std;

// 类与静态成员

/*
* 静态成员包括：
*	- 静态变量
*	- 静态函数
*  特点：
*	- 所有对象共享一份数据
*	- 类内声明，类外初始化
*	- 在编译阶段分配内存
*	- 静态函数只能访问静态变量
*/

class MyStatic {
public:
	// 类内赋初值必须加const
	const static int m_A = 10;
	// 先声明，等待类外赋值
	static int m_B;
	// 静态成员函数
	static void modifyValue() {
		m_B = 565656;
		m_C = 123123;
	}
	static void printMC() {
		cout << "m_B = " << m_B << endl;
		cout << "m_C = " << m_C << endl;
	}
private:
	// 静态成员的访问权限
	static int m_C;
};

// 赋值
int MyStatic::m_B = 100;
int MyStatic::m_C = 20;

void testStatic() {
	MyStatic m1;
	// m1.m_A = 9; 无法修改
	m1.m_B = 99;
	cout << "m1.m_B = " << m1.m_B << endl;

	MyStatic m2;
	m2.m_B = 88;
	// 虽然创建了两个对象，但是m_B是共享的
	cout << "m2.m_B = " << m2.m_B << endl;

	cout << "通过类名访问：" << "MyStatic::m_A ----->" << MyStatic::m_A << endl;

	// 调用静态成员函数
	MyStatic::modifyValue();
	MyStatic::printMC();
}