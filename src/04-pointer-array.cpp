#include <iostream>
#include <string>
using namespace std;

// ָ�������
void pointerArray() {
	// ��������
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	// ����ָ��ָ������
	int* p_arr = arr;

	// ���������һ��Ԫ��
	cout << "ͨ���±���������һ��Ԫ�أ�" << arr[0] << endl;
	// ͨ��ָ����������һ��Ԫ��
	cout << "ͨ��ָ����������һ��Ԫ�أ�" << *p_arr << endl;

	// ͨ��ָ���������
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << *p_arr << endl;
		p_arr++;
	}
}