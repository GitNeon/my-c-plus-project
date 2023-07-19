#include <iostream>
#include <string>

using namespace std;

// ���뾲̬��Ա

/*
* ��̬��Ա������
*	- ��̬����
*	- ��̬����
*  �ص㣺
*	- ���ж�����һ������
*	- ���������������ʼ��
*	- �ڱ���׶η����ڴ�
*	- ��̬����ֻ�ܷ��ʾ�̬����
*/

class MyStatic {
public:
	// ���ڸ���ֵ�����const
	const static int m_A = 10;
	// ���������ȴ����⸳ֵ
	static int m_B;
	// ��̬��Ա����
	static void modifyValue() {
		m_B = 565656;
		m_C = 123123;
	}
	static void printMC() {
		cout << "m_B = " << m_B << endl;
		cout << "m_C = " << m_C << endl;
	}
private:
	// ��̬��Ա�ķ���Ȩ��
	static int m_C;
};

// ��ֵ
int MyStatic::m_B = 100;
int MyStatic::m_C = 20;

void testStatic() {
	MyStatic m1;
	// m1.m_A = 9; �޷��޸�
	m1.m_B = 99;
	cout << "m1.m_B = " << m1.m_B << endl;

	MyStatic m2;
	m2.m_B = 88;
	// ��Ȼ�������������󣬵���m_B�ǹ����
	cout << "m2.m_B = " << m2.m_B << endl;

	cout << "ͨ���������ʣ�" << "MyStatic::m_A ----->" << MyStatic::m_A << endl;

	// ���þ�̬��Ա����
	MyStatic::modifyValue();
	MyStatic::printMC();
}