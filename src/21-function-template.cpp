#include <string>
#include <iostream>

using namespace std;

// ����ģ��
// ����ֵ���ͺͲ������Ͳ�ָ����������ͣ�������һ�����������

// дһ����������ֵ�ĺ�����֧�ָ�����������
template<typename T> void templateSwapValue(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

void testSwapValue() {

	// ���������Ĳ���
	int a = 10;
	int b = 20;

	templateSwapValue(a, b);

	cout << "�������ֵ��" << "a = " << a << "," << "b = " << b << endl;

	// �ַ������ͽ����Ĳ���

	string name1 = "xiaoming";
	string name2 = "zhangsan";

	templateSwapValue(name1, name2);
	cout << "�������ֵ" << "name1 = " << name1 << "," << "name2 = " << name2 << endl;
}