#include <string>
#include <iostream>

using namespace std;

// 类模板
// 建立一个通用的类，类中的成员不指定具体的数据类型
// template<class T, class U = int> 当然了，也可以指定默认类型
template<class T, class U> class TPerson {
private:
	T name;
	U age;
public:
	TPerson(T name, U age) {
		this->name = name;
		this->age = age;
	}

	void showPerson() {
		cout << "name:" << this->name << "----" << "age:" << this->age << endl;
	}
};

void testTPerson() {
	TPerson<string, int> p1("孙悟空", 999);
	p1.showPerson();
}