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
    int age{};
    // ����
    int score{};
};

void createStruct() {
    // �ṹ�崴����ʽһ������������ֵ
    Student stu1;

    stu1.name = "����";
    stu1.age = 18;
    stu1.score = 100;

    cout << "������" << stu1.name << ",����: " << stu1.age << ",����: " << stu1.score << endl;

    // �ṹ�����������ʽ��������ʱֱ�Ӹ�ֵ
    Student stu2 = {"����", 19, 85};
    cout << "������" << stu2.name << ",���䣺" << stu2.age << ",������" << stu2.score << endl;
}

// �����ṹ������
void createStructArray() {
    Student stuArray[] = {
            {"����", 18, 80},
            {"����", 19, 60},
            {"����", 20, 70}
    };

    for (int i = 0; i < 3; ++i) {
        Student _s = stuArray[i];
        cout << "����=====" << "����: " << _s.name << ",���䣺" << _s.age << ",����: " << _s.score << endl;
    }
}