#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/*
transform: 搬运容器到另一个容器中

transform(iterator beg1, iterator end1, iterator beg2, _func);

//beg1 源容器开始迭代器

//end1 源容器结束迭代器

//beg2 目标容器开始迭代器

//_func 函数或者函数对象

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

	// 目标容器
	vector<int> vTarget;
	// 需要提前开辟空间
	vTarget.resize(v1.size());

	transform(v1.begin(), v1.end(), vTarget.begin(), myTrans);

	cout << "vTarget.size = " << vTarget.size() << endl;
}