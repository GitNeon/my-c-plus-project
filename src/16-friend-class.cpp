#include <iostream>
#include <string>

using namespace std;

// 类做友元

// 类的声明
class Room2;

class MyFriend2 {
public:
	MyFriend2();
	void visit();

private:
	Room2 *room;
};

class Room2 {
	friend class MyFriend2;
public:
	string room1;
	string room2;
	
	Room2() {
		room1 = "客厅";
		room2 = "餐厅";
		my_room = "我的卧室";
	}

private:
	// 私有属性，类外不能访问 
	string my_room;
}; 



MyFriend2::MyFriend2() {
	room = new Room2();
}

void MyFriend2::visit() {
	cout << "我访问了：" << room->room1 << endl;
	cout << "我访问了：" << room->room2 << endl;
	cout << "我访问了：" << room->my_room << endl;
}

void testFriendClass() {
	MyFriend2 mf = MyFriend2();
	mf.visit();
}