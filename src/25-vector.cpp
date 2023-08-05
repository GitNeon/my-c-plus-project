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

// vector����ϰ��ʹ��
void testVector() {

	// ��������ֵ
	vector<string> v1;
	v1.push_back("A");
	v1.push_back("B");
	v1.push_back("C");
	v1.push_back("D");
	v1.push_back("E");
	v1.push_back("F");
	v1.push_back("G");
	printVector(v1);

	// ��������
	vector<string> v2(v1.begin(), v1.end());
	printVector(v2);

	// ͨ��assign��������������Ԫ��
	vector<string> v3;
	// ��Ҫ����λ
	v3.assign(v1.begin(), v1.end() - 2);
	printVector(v3);

	vector<int> v4;
	// �ظ�10��100
	v4.assign(10, 100);
	printVector(v4);
}


// vector �����ʹ�С
void testVectorSize() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	// �ж��Ƿ�Ϊ��
	if (v1.empty()) {
		cout << "v1����Ϊ��" << endl;
	}
	else {
		cout << "v1������Ϊ = " << v1.capacity() << endl;
		cout << "v1�Ĵ�С = " << v1.size() << endl;
	}

	// ����ָ����С�������Ԫ�ػᱻɾ��
	v1.resize(5);
	printVector(v1);

	// ����ָ����С�����ò����ĵڶ���ֵ�������(��ָ��Ĭ����0���);
	v1.resize(15, 10);
	cout << "v1������Ϊ = " << v1.capacity() << endl;
	cout << "v1�Ĵ�С = " << v1.size() << endl;
	printVector(v1);

	// ��β��ɾ��һ��Ԫ��
	v1.pop_back();
	printVector(v1);

	// ����Ԫ��
	v1.insert(v1.begin(), 99);
	printVector(v1);

	// ����ʼλ�ò���2��1000
	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);

	// ɾ��ĳ���±��Ԫ��
	v1.erase(v1.begin());
	printVector(v1);

	// ���
	v1.clear();
	//v1.erase(v1.begin(), v1.end());
	if (v1.empty()) {
		cout << "v1����Ϊ��" << endl;
	}
	printVector(v1);
}