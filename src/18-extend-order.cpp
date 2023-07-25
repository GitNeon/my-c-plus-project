#include <iostream>
#include <string>

using namespace std;

// 继承中构造和析构顺序
class OrderBase {
public:
	int m_A = 10;

	OrderBase() {
		cout << "OrderBase的无参构造函数被调用了" << endl;
	}

	~OrderBase() {
		cout << "OrderBase的析构函数被调用了" << endl;
	}
};

class OrderChild : public OrderBase {
public:
	OrderChild() {
		cout << "OrderChild的无参构造函数被调用了" << endl;
	}

	~OrderChild() {
		cout << "OrderChild的析构函数被调用了" << endl;
	}
};

void testOrder() {
	/*
	OrderBase的无参构造函数被调用了
	OrderChild的无参构造函数被调用了
	OrderChild的析构函数被调用了
	OrderBase的析构函数被调用了
	*/

	// 得到的结果是：
	// 父类构造函数 -> 子类构造函数 -> 子类析构 -> 父类析构
	OrderChild oc;
}