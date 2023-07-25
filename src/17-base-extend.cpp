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
	int m_C;
};

// 公共继承
class Child1 : public Base1 {
public:
	void func() {
		Base1 b1(10, 20, 30);
		cout << "m_A = " << b1.m_A << endl;
		cout << "m_B = " << m_B << endl;
		// cout << "m_C = " << m_C << endl; // 不可访问
	}
};

void testExtend01() {
	Child1 c1;
	c1.func();
}