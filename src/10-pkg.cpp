#include <iostream>
#include <string>

using namespace std;

// ��װ��ʹ��
// 1.��װ�����壬�����Լ��������Ϊ��װ��һ�𣬱��������е�ʵ��
// 2.�����Ժ���Ϊ����Ȩ�޿���

const double PI = 3.14;

// ����1����װһ��Բ�������ܳ�
class Circle {

	public:
		// �뾶
		int r;

		// �����ܳ�����
		double calculateRound() {
			return 2 * PI * r;
		}

		// �������
		double calculateArea() {
			return r * r;
		}
};

void testPkg() {
	// ����Բ��
	Circle c1;
	// �뾶��ֵ
	c1.r = 10;

	double zc = c1.calculateRound();
	double mj = c1.calculateArea();

	cout << "Բ���ܳ��ǣ�" << zc << endl;
	cout << "Բ������ǣ�" << mj << endl;
}


// ����2�����һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

class Student {
private:
	string s_name;

	int s_id;

public:
	void setName(string name) {
		s_name = name;
	}

	void setID(int id) {
		s_id = id;
	}

	void showInfo() {
		cout << "ѧ��������" << s_name << endl;
		cout << "ѧ��ѧ��: " << s_id << endl;
	}
};

void testCreateStudent() {
	Student stu1;
	stu1.setName("С��");
	stu1.setID(1023456);

	stu1.showInfo();
}