#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// ���ñ����㷨��ϰ

void myFuncPrint(int val) {
	cout << val << " ";
}

class myPrintF {
public:
	void operator()(int val) {
		cout << val << " ";
	}

	void operator()(string val) {
		cout << val << " ";
	}
};

void testForEach() {
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	// ʹ����ͨ��������
	for_each(v1.begin(), v1.end(), myFuncPrint);

	cout << endl;

	// ʹ�ú����������
	for_each(v1.begin(), v1.end(), myPrintF());
}

void testAlgorithm() {
	testForEach();
}