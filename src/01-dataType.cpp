//
// Created by Yunyan on 2023/6/19.
//
#include <string>
#include <iostream>

using namespace std;

/**
 * c++�е���������
 */
void dataType() {
    // ������� ����
    int age = 18;
    // ������
    short a = 123456;
    // �������ͣ����20λ
    long long b = 12345678901232131111;
    // ������
    long c = 12;

    // ���峣�� �ַ�����
    const string name = "С��";
    // �ַ���
    char sex = 'M';

    // �����ȸ�����
    float amount = 19.8f;
    // ˫���ȸ�����
    double dd = 3.14159;

    cout << "c++�������������͡������͡��ַ��͡��ַ����͡�������" << endl;

    cout << "age" << age << "name" << name << endl;
}

/**
 * ʹ��sizeof�ؼ���ͳ�Ʋ�ͬ����������ռ�ֽ�
 * short��int��long��long long
 */
void printSize() {

    string name = "xiaoming";

    cout << "short������ռ�ռ�: " << sizeof(short) << "�ֽ�" << endl;
    cout << "int������ռ�ռ�: " << sizeof(int) << "�ֽ�" << endl;
    cout << "long������ռ�ռ�: " << sizeof(long) << "�ֽ�" << endl;
    cout << "long long������ռ�ռ�: " << sizeof(long long) << "�ֽ�" << endl;
    cout << "float������ռ�ռ�: " << sizeof(float) << "�ֽ�" << endl;
    cout << "double������ռ�ռ�: " << sizeof(double) << "�ֽ�" << endl;
    cout << "char������ռ�ռ�: " << sizeof(char) << "�ֽ�" << endl;
    cout << "string������ռ�ռ�: " << sizeof(string) << "�ֽ�" << endl;
    // ��Ȼ��name��ֵ�ˣ�����sizeof��õ��Ǹñ�����Ӧ������������ռ�Ŀռ�
    cout << "��string��ֵ����ռ�ռ�: " << sizeof(name) << "�ֽ�" << endl;
    cout << "bool������ռ�ռ�: " << sizeof(bool) << "�ֽ�" << endl;
}

/**
 * ʹ��cin�ؼ��ֽ�����������
 */
void Cin() {
    // ��������
    int a = 0;
    cout << "���������aΪint���͵�ֵ��" << endl;
    cin >> a;
    cout << "�������a��ֵΪ: " << a << endl;

    // ����������
    float b = 0.1f;
    cout << "�����븡����" << endl;
    cin >> b;
    cout << "�������b��ֵΪ: " << b << endl;

}