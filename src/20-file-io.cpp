#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void testFileWrite() {
	// ��������ļ�������
	ofstream ofs;
	// ָ��д���ļ��Լ�д�뷽ʽ
	ofs.open("F://test.txt", ios::trunc | ios::out);
	// д������
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
	// ������ϣ��ر���
	ofs.close();
}

void testFileRead() {
	ifstream ifs;
	ifs.open("F://test.txt", ios::in);
	bool isOpen = ifs.is_open();

	if (!isOpen) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	char buf[1024] = {};
	while (ifs >> buf) {
		cout << buf << endl;
	}
}