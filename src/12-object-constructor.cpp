#include <iostream>
#include <string>

using namespace std;

// 对象的构造函数、析构函数练习


class Person {
public:
	int _age;
	string _sex;

	// 无参构造函数
	Person() {
		cout << "Person无参构造函数被调用" << endl;
	}

	Person(int age, string sex) {
		_age = age;
		_sex = sex;
		cout << "Person有参构造函数被调用" << endl;
	}

	Person(const Person& p) {
		_age = p._age;
		_sex = p._sex;
		cout << "拷贝构造函数被调用" << endl;
	}

	~Person() {
		cout << "析构函数被调用" << endl;
	}
};

void showPersonInfo(Person p) {
	cout << "person的信息为：" << p._age << "----" << p._sex << endl;
}

Person getNewPerson() {
	Person _p;
	cout << "新建了一个对象：" << &_p << endl;
	return _p;
}

void testObjectConstructor() {
	// 调用无参
	// 注意：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
	Person p;

	// 调用有参
	Person p1(18, "男");

	// 显示声明一个对象
	Person p3 = Person(22, "女");

	// 调用拷贝构造函数
	// 主要分三种情况
	// 1.使用已经创建的一个对象作为构造函数的参数
	Person p4 = Person(23, "男");
	Person p4_copy(p4); // 这里使用了已经创建好的p4作为参数，创建了一个副本对象，会自动调用拷贝构造参数
	// 2.自定义的函数接收一个对象类型作为参数，会自动调用拷贝构造参数
	showPersonInfo(p4);
	// 3.自定义函数创建了一个对象，并返回该对象
	Person p5 = getNewPerson();
}