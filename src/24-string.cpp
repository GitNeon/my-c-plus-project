#include <iostream>
#include <string>

using namespace std;

// string��C++�����ַ�����������һ����

// ����string��ʹ��
void testString() {

	// �������ַ���
	string s1;
	cout << "s1 = " << s1 << endl;

	// ����char����һ���ַ���
	const char* str = "Hello World";
	string s2(str);
	cout << "s2 = " << s2 << endl;

	// ���ÿ������캯��
	string s3(s2);
	cout << "s3 = " << s3 << endl;

	// �ַ�����ֵ
	string s4;
	s4 = str;
	cout << "s4 = " << s4 << endl;

	// ͨ��assign�������и�ֵ
	string s5;
	s5.assign("assign string...");
	cout << "s5 = " << s5 << endl;

	string s6;
	// ��ȡǰ�����ַ���������ֵ��s6
	s6.assign("ABCDEF", 3);
	cout << "s6 = " << s6 << endl;

	string s7;
	// ���صķ�������ʾ��X�ظ�5�鲢��ֵ��s7
	s7.assign(5, 'X');
	cout << "s7 = " << s7 << endl;
}

// ����String
void iteratorString() {
	string str = "hello world";

	for (int i = 0; i < str.size(); i++)
	{
		cout << "str[i] = " << str[i] << endl;
		cout << "ͨ��at����ȡֵ = " << str.at(i) << endl;
	}
}

// �ַ��������ɾ��
void testInsertAndDelString() {
	string str = "hello world";
	str.insert(5, "-2023-");
	cout << str << endl;

	// ���±��5��λ�ÿ�ʼɾ��6���ַ�
	str.erase(5, 6);
	cout << str << endl;

	// ��ȡ�ַ�
	string str2 = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

	// ��ȡ�����е��û���
	string email = "hello@123.com";
	int pos = email.find("@");
	string username = email.substr(0, pos);
	cout << "username = " << username << endl;
}