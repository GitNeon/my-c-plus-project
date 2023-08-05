#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T> void printVector(vector<T> &v1) {
	for (vector<T>::iterator it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

// vector的练习和使用
void testVector() {

	// 创建并赋值
	vector<string> v1;
	v1.push_back("A");
	v1.push_back("B");
	v1.push_back("C");
	v1.push_back("D");
	v1.push_back("E");
	v1.push_back("F");
	v1.push_back("G");
	printVector(v1);

	// 拷贝构造
	vector<string> v2(v1.begin(), v1.end());
	printVector(v2);

	// 通过assign方法，拷贝区间元素
	vector<string> v3;
	// 不要后两位
	v3.assign(v1.begin(), v1.end() - 2);
	printVector(v3);

	vector<int> v4;
	// 重复10个100
	v4.assign(10, 100);
	printVector(v4);
}


// vector 容量和大小
void testVectorSize() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	// 判断是否为空
	if (v1.empty()) {
		cout << "v1容器为空" << endl;
	}
	else {
		cout << "v1的容量为 = " << v1.capacity() << endl;
		cout << "v1的大小 = " << v1.size() << endl;
	}

	// 重新指定大小，多余的元素会被删除
	v1.resize(5);
	printVector(v1);

	// 重新指定大小，并用参数的第二个值进行填充(不指定默认用0填充);
	v1.resize(15, 10);
	cout << "v1的容量为 = " << v1.capacity() << endl;
	cout << "v1的大小 = " << v1.size() << endl;
	printVector(v1);

	// 从尾部删除一个元素
	v1.pop_back();
	printVector(v1);

	// 插入元素
	v1.insert(v1.begin(), 99);
	printVector(v1);

	// 在起始位置插入2个1000
	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);

	// 删除某个下标的元素
	v1.erase(v1.begin());
	printVector(v1);

	// 清空
	v1.clear();
	//v1.erase(v1.begin(), v1.end());
	if (v1.empty()) {
		cout << "v1容器为空" << endl;
	}
	printVector(v1);
}