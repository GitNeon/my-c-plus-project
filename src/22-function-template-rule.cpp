#include <string>
#include <iostream>

using namespace std;

// 普通函数与模板函数调用规则

// 如果普通函数，模板函数声明一致则优先调用普通函数
// 如果普通函数，模板函数声明不一致，则谁能最佳匹配(主要是函数传入的参数类型)，就调用谁
// 可以通过空模板参数列表来强制调用函数模板
// 函数模板也可以发生重载

// 普通函数
void myPrint(int a, int b) {
	cout << "普通函数调用了：" << "a = " << a << "--------" << "b = " << b << endl;
}

// 重名的模板函数
template<typename T> void myPrint(T a, T b) {
	cout << "模板函数调用了" << "a = " << a << "----" << "b = " << b << endl;
}

// 重名的模板函数 不同的形参列表
template<typename T> void myPrint(T a, T b, T c) {
	cout << "最佳匹配模板函数调用了" << "a = " << a << "----" << "b = " << b << "c = " << c << endl;
}


void testFunctionRule() {
	
	int a = 10;
	int b = 20;

	myPrint(a, b); // 此时，由于模板函数并没有指定具体的数据类型，而普通函数指定了具体的函数类型，因此会优先找到普通函数并进行调用
	myPrint<>(a, b); // 可以通过模板参数列表强制调用

	int c = 30;
	myPrint(a, b, c); // 调用重载的模板函数

	char c1 = 'A';
	char c2 = 'B';
	myPrint(c1, c2); // 会优先调用模板函数，相当于隐式推断了数据类型
}