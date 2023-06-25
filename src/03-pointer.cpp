//
// Created by Yunyan on 2023/6/25.
// 指针的用法
#include <iostream>;

using namespace std;

/**
 * 指针的的作用：
 * 可以通过指针间接访问内存
 * 内存编号从0开始，一般用十六进制数字表示
*/

void testPointer() {
    // 定义整型数字a
    int a = 10 ;

    // 定义指针
    int *p_a;

    // 指针变量赋值
    // &符号为取地址符
    p_a = &a;
    cout << "指针p_a的地址为：" << p_a << endl;
    cout << "*p_a的解引用: " << *p_a << endl;

    cout << "指针p_a所占内存空间: " << sizeof p_a << endl;

    // 空指针，指针变量p指向地址编号为0的空间
    int *p_null = nullptr;
//    cout << " 指针*p_null指向的地址为: " << *p_null << endl;

    // 常量指针
    int b = 10;
    int c = 12;

    // 定义一个常量指针，指针指向的地址可以更改，但是指针指向的实际值不可以改
    const int* p_1 = &b; // 写法与 int const *p_1 = &b 相同
    cout << "*p_1修改前指向的地址：" << p_1 << endl;
    p_1 = &c; // 可以
//    p_1 = 100; // 报错
    cout << "*p_1修改后指向的地址：" << p_1 << endl;

    // 指针常量
    // 指针指向的地址不可以更改，但是指向的内容可以更改
    int* const p_2 = &b;
    *p_2 = 100;
//    *p_2 = &c; // 报错

    /**
     * 常量指针和指针常量一个最大区分点就是看*号的位置
     * 例如：int const *p 和 const int *p 就是常量指针，不管int和const如何
     * 互换位置，他们始终修饰的是指针，所以是常量指针；
     * 而int* const p2则是指针常量，先定义了指针的类型为int型, 然后又声明了常量
     * 所以*号在const左侧就是指针常量，指针的地址无法修改，但是指向的值可以修改
     * *号在右侧就是常量指针，指针的地址可以修改，而指向的值不可以修改
     */

    // 指针和数组
    int arr[] = { 1, 2, 3, 4, 5 };
    const int *p = arr; // 指针直接指向数组
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i++) {
        cout << " *p中的内容" << *p << endl;
        p++;
    }
}