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
	int m_C; // ˽�г�Ա�������б��̳��ˣ����Ǳ������ˣ��޷�����, ʹ��cl /d1 reportSingleClassLayoutChild1 "17-base-extend.cpp"������Ա��浥����Ĳ�������֤
};

// �����̳�
// �̳г��������Ա�Ϊpublic,������Է���, private���������Գ���
// �����е�˽�����Բ��ܱ�����
class Child1 : public Base1 {
public:
	int m_D;

	void func() {
		Base1 b1(10, 20, 30);
		cout << "m_A = " << b1.m_A << endl;
		cout << "m_B = " << m_B << endl;
		// cout << "m_C = " << m_C << endl; // ���ɷ���
	}
};

// �����̳�
// �̳г��������Ա�Ϊprotected,������Է���,private���������Գ���
class Child2 : protected Base1 {
public: 
	void func() {
		cout << m_A << endl;
		cout << m_B << endl;
	}
};

// ˽�м̳У������������Ϊ˽�еģ����Է��ʣ����Ǹ���private������������Ȼ���ܷ���

void testExtend01() {
	Child1 c1;
	c1.func();
}