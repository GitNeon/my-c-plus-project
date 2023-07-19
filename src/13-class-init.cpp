#include <iostream>
#include <string>

using namespace std;

// ����һ���ֻ���
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

// ����ϰ
class Person2 {
private:
	string p_name;
	int p_age;
	bool p_sex;
	// ������һ����Ա��
	MyPhone _phone;

public:
	// �вι���
	// �вι��������д������ʼ���б�д��
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

	Person2 p("С��", 18, true, m1);
	p.printInfo();
}