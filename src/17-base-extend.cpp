#include <iostream>
#include <string>

using namespace std;

class Base1 {
public:
	int m_A;

	Base1() {}

	Base1(int a, int b, int c) {
		m_A = a;
		m_B = b;
		m_C = c;
	}
protected:
	int m_B;
private:
	int m_C; // 私有成员在子类中被继承了，但是被隐藏了，无法访问, 使用cl /d1 reportSingleClassLayoutChild1 "17-base-extend.cpp"命令可以报告单个类的布局以验证
};

// 公共继承
// 继承出来的属性变为public,子类可以访问, private声明的属性除外
// 父类中的私有属性不能被访问
class Child1 : public Base1 {
public:
	int m_D;

	void func() {
		Base1 b1(10, 20, 30);
		cout << "m_A = " << b1.m_A << endl;
		cout << "m_B = " << m_B << endl;
		// cout << "m_C = " << m_C << endl; // 不可访问
	}
};

// 保护继承
// 继承出来的属性变为protected,子类可以访问,private声明的属性除外
class Child2 : protected Base1 {
public: 
	void func() {
		cout << m_A << endl;
		cout << m_B << endl;
	}
};

// 私有继承，属性在子类变为私有的，可以访问，但是父类private声明的属性仍然不能访问

void testExtend01() {
	Child1 c1;
	c1.func();
}