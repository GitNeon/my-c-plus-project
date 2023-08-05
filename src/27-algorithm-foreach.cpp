#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// 内置遍历算法练习

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

	// 使用普通函数遍历
	for_each(v1.begin(), v1.end(), myFuncPrint);

	cout << endl;

	// 使用函数对象遍历
	for_each(v1.begin(), v1.end(), myPrintF());
}

void testAlgorithm() {
	testForEach();
}