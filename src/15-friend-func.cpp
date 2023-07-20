#include <iostream>
#include <string>

using namespace std;

// 友元 - 就是让一个函数或者类访问领一个类中私用成员的技术

/*
友元的三种实现：
1.全局函数做友元
2.类做友元
3.成员函数做友元
*/

class Room {
	// 此处声明myFriendVisitRoom函数是友元函数，可以访问类的私有内容
	friend void myFriendVisitRoom(Room &room);
public:
	string room1;
	string room2;
	
	Room() {
		room1 = "客厅";
		room2 = "餐厅";
		my_room = "我的卧室";
	}

private:
	// 私有属性，类外不能访问 
	string my_room;
};

// 定义一个 我的好朋友参观房子的函数
void myFriendVisitRoom(Room &room) {
	cout << "我的好朋友参观了: " << room.room1 << endl;
	cout << "我的好朋友还参观了: " << room.room2 << endl;

	cout << "访问了我的卧室：" << room.my_room << endl;
}

void testFriendFunc() {
	Room r1 = Room();
	myFriendVisitRoom(r1);
}