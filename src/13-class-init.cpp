#include <iostream>
#include <string>

using namespace std;

// 定义一个手机类
class MyPhone {
public:
	string _phoneNumber;
	string _phoneName;

public:
	MyPhone(string phoneNumber, string phoneName) {
		_phoneNumber = phoneNumber;
		_phoneName = phoneName;
	}
};

// 类练习
class Person2 {
private:
	string p_name;
	int p_age;
	bool p_sex;
	// 引用另一个成员类
	MyPhone _phone;

public:
	// 有参构造
	// 有参构造的特殊写法：初始化列表写法
	Person2(string name, int age, bool sex, MyPhone phone) : p_name(name), p_age(age), p_sex(sex),_phone(phone) {}

	void printInfo() {
		cout << "name = " << p_name << endl;
		cout << "age = " << p_age << endl;
		cout << "sex = " << p_sex << endl;
		cout << "phoneNumber = " << _phone._phoneNumber << endl;
		cout << "phoneName = " << _phone._phoneName << endl;
	}
};


void testClass() {
	MyPhone m1("123456", "xiaomi");

	Person2 p("小明", 18, true, m1);
	p.printInfo();
}