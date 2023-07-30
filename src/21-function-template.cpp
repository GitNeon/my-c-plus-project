#include <string>
#include <iostream>

using namespace std;

// 函数模版
// 返回值类型和参数类型不指定具体的类型，而是用一个虚拟的类型

// 写一个交换两个值的函数，支持各种数据类型
template<typename T> void templateSwapValue(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

void testSwapValue() {

	// 整数交换的测试
	int a = 10;
	int b = 20;

	templateSwapValue(a, b);

	cout << "交换后的值：" << "a = " << a << "," << "b = " << b << endl;

	// 字符串类型交换的测试

	string name1 = "xiaoming";
	string name2 = "zhangsan";

	templateSwapValue(name1, name2);
	cout << "交换后的值" << "name1 = " << name1 << "," << "name2 = " << name2 << endl;
}