#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// 查找内置的数据类型
void testFind01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
	}

	// 查找是否有数字5这个元素，返回值类型是个迭代器
	vector<int>::iterator it  = find(v.begin(), v.end(), 5);

	if (it == v.end()) {
		cout << "没有找到" << endl;
	}
	else {
		cout << "找到：" << *it << endl;
	}
}


// 查找自定义数据类型
class MyFindStudent {
public:
	string name;
	int age;
public:
	MyFindStudent(string name, int age) {
		this->name = name;
		this->age = age;
	}

	// 重载 ==
	bool operator== (const MyFindStudent &stu) {
		if (this->name == stu.name && this->age == stu.age) {
			return true;
		}
		return false;
	}
};

void testFind02() {
	vector<MyFindStudent> v;

	//创建数据
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
		cout << "没有找到" << endl;
	}
	else {
		cout << "找到了：" << "姓名=" << it->name << "," << "年龄=" << it->age << endl;
	}
}


void testFind() {
	testFind01();
	testFind02();
}