#include <string>
#include <iostream>

using namespace std;

// ʹ��struct�ؼ��ֶ���ṹ��
// ���ﶨ��һ��ѧ���ṹ��
struct Student {
	// ��Ա�б�
	// ����
	string name;
	// ����
	int age;
	// ����
	int score;
};

void createStruct() {
	// �ṹ�崴����ʽһ������������ֵ
	Student stu1;
	
	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;

	cout << "������" << stu1.name << ",����: " << stu1.age << ",����: " << stu1.score << endl;
}