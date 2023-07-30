#include <string>
#include <iostream>

using namespace std;

// ��ģ��
// ����һ��ͨ�õ��࣬���еĳ�Ա��ָ���������������
// template<class T, class U = int> ��Ȼ�ˣ�Ҳ����ָ��Ĭ������
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
	TPerson<string, int> p1("�����", 999);
	p1.showPerson();
}