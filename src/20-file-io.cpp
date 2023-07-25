#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void testFileWrite() {
	// 创建输出文件流对象
	ofstream ofs;
	// 指定写入文件以及写入方式
	ofs.open("F://test.txt", ios::trunc | ios::out);
	// 写入内容
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;
	// 操作完毕，关闭流
	ofs.close();
}

void testFileRead() {
	ifstream ifs;
	ifs.open("F://test.txt", ios::in);
	bool isOpen = ifs.is_open();

	if (!isOpen) {
		cout << "文件打开失败" << endl;
		return;
	}

	char buf[1024] = {};
	while (ifs >> buf) {
		cout << buf << endl;
	}
}