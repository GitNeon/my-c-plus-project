// 函数对象
// 重载函数调用操作符的类，成为函数对象
// 函数对象也称为仿函数，本质是一个类

// * 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
// * 函数对象超出普通函数的概念，函数对象可以有自己的状态
// * 函数对象可以作为参数传递

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

// 函数对象可以当做参数传入
void doPrint(MyPrint &mp, string str) {
	mp(str);
}

void testMyAdd() {
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;

	MyPrint myPrint;
	doPrint(myPrint, "Hello c++");
}