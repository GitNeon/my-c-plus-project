#include <iostream>
#include <string>

using namespace std;

// �̳��й��������˳��
class OrderBase {
public:
	int m_A = 10;

	OrderBase() {
		cout << "OrderBase���޲ι��캯����������" << endl;
	}

	~OrderBase() {
		cout << "OrderBase������������������" << endl;
	}
};

class OrderChild : public OrderBase {
public:
	OrderChild() {
		cout << "OrderChild���޲ι��캯����������" << endl;
	}

	~OrderChild() {
		cout << "OrderChild������������������" << endl;
	}
};

void testOrder() {
	/*
	OrderBase���޲ι��캯����������
	OrderChild���޲ι��캯����������
	OrderChild������������������
	OrderBase������������������
	*/

	// �õ��Ľ���ǣ�
	// ���๹�캯�� -> ���๹�캯�� -> �������� -> ��������
	OrderChild oc;
}