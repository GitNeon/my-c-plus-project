#include <iostream>
#include <string>

using namespace std;

// �̳���ͬ���������ʹ���
class SameBase {
public:
	int m_A = 10;

	void func() {
		cout << "������SameBase�еĺ���" << endl;
	}

};

class SChild : public SameBase {
public:
	int m_A = 100;

	void func() {
		cout << "������SChild�еĺ���" << endl;
	}
};

void testSame() {

	SChild sc;

	// ���������������
	cout << "SChild���� = " << sc.m_A << endl;
	// ���ʸ����е�ͬ������
	cout << "SameBaseͬ������ = " << sc.SameBase::m_A << endl;

	// �����������ຯ��
	sc.func();
	// ���ʸ����е�ͬ������
	sc.SameBase::func();
}