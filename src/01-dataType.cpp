//
// Created by Yunyan on 2023/6/19.
//
#include <string>
#include <iostream>

using namespace std;

/**
 * c++中的数据类型
 */
void dataType() {
    // 定义变量 整型
    int age = 18;
    // 短整型
    short a = 123456;
    // 长长整型，最大20位
    long long b = 12345678901232131111;
    // 长整型
    long c = 12;

    // 定义常量 字符串型
    const string name = "小明";
    // 字符型
    char sex = 'M';

    // 单精度浮点型
    float amount = 19.8f;
    // 双精度浮点型
    double dd = 3.14159;

    cout << "c++数据类型有整型、浮点型、字符型、字符串型、布尔型" << endl;

    cout << "age" << age << "name" << name << endl;
}

/**
 * 使用sizeof关键字统计不同数据类型所占字节
 * short、int、long、long long
 */
void printSize() {

    string name = "xiaoming";

    cout << "short类型所占空间: " << sizeof(short) << "字节" << endl;
    cout << "int类型所占空间: " << sizeof(int) << "字节" << endl;
    cout << "long类型所占空间: " << sizeof(long) << "字节" << endl;
    cout << "long long类型所占空间: " << sizeof(long long) << "字节" << endl;
    cout << "float类型所占空间: " << sizeof(float) << "字节" << endl;
    cout << "double类型所占空间: " << sizeof(double) << "字节" << endl;
    cout << "char类型所占空间: " << sizeof(char) << "字节" << endl;
    cout << "string类型所占空间: " << sizeof(string) << "字节" << endl;
    // 虽然给name赋值了，但是sizeof求得的是该变量对应的数据类型所占的空间
    cout << "给string赋值后所占空间: " << sizeof(name) << "字节" << endl;
    cout << "bool类型所占空间: " << sizeof(bool) << "字节" << endl;
}

/**
 * 使用cin关键字进行数据输入
 */
void Cin() {
    // 整数输入
    int a = 0;
    cout << "请输入变量a为int类型的值：" << endl;
    cin >> a;
    cout << "你输入的a的值为: " << a << endl;

    // 浮点数输入
    float b = 0.1f;
    cout << "请输入浮点数" << endl;
    cin >> b;
    cout << "你输入的b的值为: " << b << endl;

}