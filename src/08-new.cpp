#include <iostream>
#include <string>

using namespace std;

int* func() {
	// 通过new操作符返回一个对象
	int* a = new int(10);
	return a;
};

void testNew() {
	int *p = func();

	cout << *p << endl;
	cout << *p << endl;

	// 利用delete释放堆区数据
	delete p;
}

void testNewArray() {
	int* p_arr = new int[10];
	for (int i = 0; i < 10; i++) {
		p_arr[i] = i + 100;
		cout << p_arr[i] << endl;
	}

	// 释放数组加[]
	delete[] p_arr;
}