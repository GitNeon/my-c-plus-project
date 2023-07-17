#include <iostream>
#include <string>

using namespace std;

// 设计一个立方体类
// 1.求它的体积和面积
// 2.判断两个立方体是否相等
class Cube {
private:
	int c_long;

	int c_width;

	int c_height;

public:
	void setCubeLWH(int l, int w, int h) {
		c_long = l;
		c_width = w;
		c_height = h;
	}

	int* getCubeLWH() {
		int res[3];
		res[0] = c_long;
		res[1] = c_width;
		res[2] = c_height;
		return res;
	}

	bool isCubeEqual(Cube c) {
		int* p_arr = c.getCubeLWH();
		if (p_arr[0] == c_long && p_arr[1] == c_width && p_arr[2] == c_height) {
			cout << "立方体相等" << endl;
			return true;
		}
		else {
			cout << "立方体不等" << endl;
			return false;
		}
	}

	int getCubeArea() {
		// 立方体面积 = 2x(长乘宽 + 长乘高 + 宽乘高)
		return 2 * (c_long * c_width + c_long * c_height + c_width * c_height);
	}

	int getCubeVolume() {
		return c_long * c_width * c_height;
	}
};

void testCube() {
	Cube c1;
	c1.setCubeLWH(2, 3, 4);

	Cube c2;
	c2.setCubeLWH(2, 2, 2);

	Cube c3;
	c3.setCubeLWH(2, 3, 4);

	cout << "Cube-c1和Cube-c2相等吗？" << c1.isCubeEqual(c2) << endl;
	cout << "Cube-c1和Cube-c3相等吗？" << c1.isCubeEqual(c3) << endl;

	cout << "cube c1的面积 = " << c1.getCubeArea() << endl;
	cout << "cube c1的体积 = " << c1.getCubeVolume() << endl; 
}