#include <iostream>
#include <string>

using namespace std;

// ������Ԫ

// �������
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
		room1 = "����";
		room2 = "����";
		my_room = "�ҵ�����";
	}

private:
	// ˽�����ԣ����ⲻ�ܷ��� 
	string my_room;
}; 



MyFriend2::MyFriend2() {
	room = new Room2();
}

void MyFriend2::visit() {
	cout << "�ҷ����ˣ�" << room->room1 << endl;
	cout << "�ҷ����ˣ�" << room->room2 << endl;
	cout << "�ҷ����ˣ�" << room->my_room << endl;
}

void testFriendClass() {
	MyFriend2 mf = MyFriend2();
	mf.visit();
}