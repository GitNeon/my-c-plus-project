//
// Created by zxc881 on 2023/7/3.
//
#include <string>
#include <iostream>

using namespace std;

// �ṹ�嶨��
struct Student {
    string name;
    int age;
    int score;
};

void pointerToStruct() {
    Student student = {"����", 18, 100 };
    // �ṹ��ָ��
    Student *p_stu = &student;
    // ͨ��->���ʲ������Ա
    cout << "����: " << p_stu->name << ",����: " << p_stu->age << ",����: " << p_stu->score << endl;
}