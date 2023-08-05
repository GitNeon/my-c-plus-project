#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/*
transform: ������������һ��������

transform(iterator beg1, iterator end1, iterator beg2, _func);

//beg1 Դ������ʼ������

//end1 Դ��������������

//beg2 Ŀ��������ʼ������

//_func �������ߺ�������

*/

int myTrans(int val) {
	return val;
}

void testTransForm() {
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	// Ŀ������
	vector<int> vTarget;
	// ��Ҫ��ǰ���ٿռ�
	vTarget.resize(v1.size());

	transform(v1.begin(), v1.end(), vTarget.begin(), myTrans);

	cout << "vTarget.size = " << vTarget.size() << endl;
}