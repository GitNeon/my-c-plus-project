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