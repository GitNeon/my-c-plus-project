#include <iostream>
#include <string>

using namespace std;

// ����Ĺ��캯��������������ϰ


class Person {
public:
	int _age;
	string _sex;

	// �޲ι��캯��
	Person() {
		cout << "Person�޲ι��캯��������" << endl;
	}

	Person(int age, string sex) {
		_age = age;
		_sex = sex;
		cout << "Person�вι��캯��������" << endl;
	}

	Person(const Person& p) {
		_age = p._age;
		_sex = p._sex;
		cout << "�������캯��������" << endl;
	}

	~Person() {
		cout << "��������������" << endl;
	}
};

void showPersonInfo(Person p) {
	cout << "person����ϢΪ��" << p._age << "----" << p._sex << endl;
}

Person getNewPerson() {
	Person _p;
	cout << "�½���һ������" << &_p << endl;
	return _p;
}

void testObjectConstructor() {
	// �����޲�
	// ע�⣺�����޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ����������
	Person p;

	// �����в�
	Person p1(18, "��");

	// ��ʾ����һ������
	Person p3 = Person(22, "Ů");

	// ���ÿ������캯��
	// ��Ҫ���������
	// 1.ʹ���Ѿ�������һ��������Ϊ���캯���Ĳ���
	Person p4 = Person(23, "��");
	Person p4_copy(p4); // ����ʹ�����Ѿ������õ�p4��Ϊ������������һ���������󣬻��Զ����ÿ����������
	// 2.�Զ���ĺ�������һ������������Ϊ���������Զ����ÿ����������
	showPersonInfo(p4);
	// 3.�Զ��庯��������һ�����󣬲����ظö���
	Person p5 = getNewPerson();
}