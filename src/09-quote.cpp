#include <iostream>
#include <string>

using namespace std;

void testQuote() {

	// ����һ��ԭʼ����
	int a = 10;
	int s = 20;
	// �൱�ڸ�����a��������������˱���a
	int &b = a;

	cout << "û�޸�ǰ��a: " << a << endl;
	cout << "����b: " << b << endl;

	b = 100;

	cout << "��b���¸�ֵ����ʱ -> " << "a = " << a << "------" << "b = " << b  << endl;

	// ���Ǹ�ֵ�����������Ǹ�������
	b = s;

	cout << "b = " << b << endl;

	b = 102;

	cout << "b = " << b << "----" << "s = " << s << endl;
}