// ��������
// ���غ������ò��������࣬��Ϊ��������
// ��������Ҳ��Ϊ�º�����������һ����

// * ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
// * �������󳬳���ͨ�����ĸ����������������Լ���״̬
// * �������������Ϊ��������

#include <iostream>
#include <string>
using namespace std;

class MyAdd {
public:
	int operator()(int v1, int v2) {
		return v1 + v2;
	}
};

class MyPrint {
public:
	void operator()(string str) {
		cout << "str = " << str << endl;
	}
};

// ����������Ե�����������
void doPrint(MyPrint &mp, string str) {
	mp(str);
}

void testMyAdd() {
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;

	MyPrint myPrint;
	doPrint(myPrint, "Hello c++");
}