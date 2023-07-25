#include <iostream>
#include <string>

using namespace std;

// 继承中同名变量访问规则
class SameBase {
public:
	int m_A = 10;

	void func() {
		cout << "调用了SameBase中的函数" << endl;
	}

};

class SChild : public SameBase {
public:
	int m_A = 100;

	void func() {
		cout << "调用了SChild中的函数" << endl;
	}
};

void testSame() {

	SChild sc;

	// 正常访问子类变量
	cout << "SChild变量 = " << sc.m_A << endl;
	// 访问父类中的同名变量
	cout << "SameBase同名变量 = " << sc.SameBase::m_A << endl;

	// 正常访问子类函数
	sc.func();
	// 访问父类中的同名函数
	sc.SameBase::func();
}