#include <iostream>
#include <string>
using namespace std;

// 指针和数组
void pointerArray() {
	// 定义数组
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	// 定义指针指向数组
	int* p_arr = arr;

	// 访问数组第一个元素
	cout << "通过下标访问数组第一个元素：" << arr[0] << endl;
	// 通过指针访问数组第一个元素
	cout << "通过指针访问数组第一个元素：" << *p_arr << endl;
}