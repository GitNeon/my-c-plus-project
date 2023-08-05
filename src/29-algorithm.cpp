#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// �������õ���������
void testFind01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
	}

	// �����Ƿ�������5���Ԫ�أ�����ֵ�����Ǹ�������
	vector<int>::iterator it  = find(v.begin(), v.end(), 5);

	if (it == v.end()) {
		cout << "û���ҵ�" << endl;
	}
	else {
		cout << "�ҵ���" << *it << endl;
	}
}


// �����Զ�����������
class MyFindStudent {
public:
	string name;
	int age;
public:
	MyFindStudent(string name, int age) {
		this->name = name;
		this->age = age;
	}

	// ���� ==
	bool operator== (const MyFindStudent &stu) {
		if (this->name == stu.name && this->age == stu.age) {
			return true;
		}
		return false;
	}
};

void testFind02() {
	vector<MyFindStudent> v;

	//��������
	MyFindStudent p1("aaa", 10);
	MyFindStudent p2("bbb", 20);
	MyFindStudent p3("ccc", 30);
	MyFindStudent p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<MyFindStudent>::iterator it =  find(v.begin(), v.end(), p2);

	if (it == v.end()) {
		cout << "û���ҵ�" << endl;
	}
	else {
		cout << "�ҵ��ˣ�" << "����=" << it->name << "," << "����=" << it->age << endl;
	}
}


void testFind() {
	testFind01();
	testFind02();
}