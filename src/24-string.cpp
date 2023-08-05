#include <iostream>
#include <string>

using namespace std;

// string是C++风格的字符串，本质是一个类

// 测试string的使用
void testString() {

	// 创建空字符串
	string s1;
	cout << "s1 = " << s1 << endl;

	// 利用char创建一个字符串
	const char* str = "Hello World";
	string s2(str);
	cout << "s2 = " << s2 << endl;

	// 调用拷贝构造函数
	string s3(s2);
	cout << "s3 = " << s3 << endl;

	// 字符串赋值
	string s4;
	s4 = str;
	cout << "s4 = " << s4 << endl;

	// 通过assign方法进行赋值
	string s5;
	s5.assign("assign string...");
	cout << "s5 = " << s5 << endl;

	string s6;
	// 截取前三个字符串，并赋值给s6
	s6.assign("ABCDEF", 3);
	cout << "s6 = " << s6 << endl;

	string s7;
	// 重载的方法，表示把X重复5遍并赋值给s7
	s7.assign(5, 'X');
	cout << "s7 = " << s7 << endl;
}

// 遍历String
void iteratorString() {
	string str = "hello world";

	for (int i = 0; i < str.size(); i++)
	{
		cout << "str[i] = " << str[i] << endl;
		cout << "通过at方法取值 = " << str.at(i) << endl;
	}
}

// 字符串插入和删除
void testInsertAndDelString() {
	string str = "hello world";
	str.insert(5, "-2023-");
	cout << str << endl;

	// 从下标第5个位置开始删除6个字符
	str.erase(5, 6);
	cout << str << endl;

	// 截取字符
	string str2 = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

	// 获取邮箱中的用户名
	string email = "hello@123.com";
	int pos = email.find("@");
	string username = email.substr(0, pos);
	cout << "username = " << username << endl;
}