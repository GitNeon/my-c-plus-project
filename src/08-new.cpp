#include <iostream>
#include <string>

using namespace std;

int* func() {
	// ͨ��new����������һ������
	int* a = new int(10);
	return a;
};

void testNew() {
	int *p = func();

	cout << *p << endl;
	cout << *p << endl;

	// ����delete�ͷŶ�������
	delete p;
}

void testNewArray() {
	int* p_arr = new int[10];
	for (int i = 0; i < 10; i++) {
		p_arr[i] = i + 100;
		cout << p_arr[i] << endl;
	}

	// �ͷ������[]
	delete[] p_arr;
}