// �ṹ��Ƕ��
#include <iostream>
#include <string>

using namespace std;

// ����ѧ���ṹ��
struct Student {
    string name;
    int age;
    int score;
};

// ������ʦ�ṹ��
struct Teacher {
    int id; // ��ʦID
    string name; // ��ʦ����
    int age; // ��ʦ����
    Student student; // һ��һ����ѧ��
};

void testNestStruct() {
    Teacher t1;
    t1.id = 10002;
    t1.name = "����ʦ";
    t1.age = 32;
    t1.student.name = "С��";
    t1.student.age = 18;
    t1.student.score = 85;

    cout << "��ʦ��Ϣ��" << "��ţ�" << t1.id << "---������" << t1.name << "---���䣺" << t1.age << "---������ѧ����Ϣ��" << t1.student.name << endl;
}