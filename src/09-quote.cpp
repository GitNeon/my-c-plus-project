#include <iostream>
#include <string>

using namespace std;

void testQuote() {

	// 定义一个原始数据
	int a = 10;
	int s = 20;
	// 相当于给变量a起个别名，引用了变量a
	int &b = a;

	cout << "没修改前的a: " << a << endl;
	cout << "别名b: " << b << endl;

	b = 100;

	cout << "把b重新赋值，此时 -> " << "a = " << a << "------" << "b = " << b  << endl;

	// 这是赋值操作，而不是更改引用
	b = s;

	cout << "b = " << b << endl;

	b = 102;

	cout << "b = " << b << "----" << "s = " << s << endl;
}