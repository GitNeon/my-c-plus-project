#include <iostream>
#include <string>

using namespace std;

// ��Ԫ - ������һ�����������������һ������˽�ó�Ա�ļ���

/*
��Ԫ������ʵ�֣�
1.ȫ�ֺ�������Ԫ
2.������Ԫ
3.��Ա��������Ԫ
*/

class Room {
	// �˴�����myFriendVisitRoom��������Ԫ���������Է������˽������
	friend void myFriendVisitRoom(Room &room);
public:
	string room1;
	string room2;
	
	Room() {
		room1 = "����";
		room2 = "����";
		my_room = "�ҵ�����";
	}

private:
	// ˽�����ԣ����ⲻ�ܷ��� 
	string my_room;
};

// ����һ�� �ҵĺ����Ѳι۷��ӵĺ���
void myFriendVisitRoom(Room &room) {
	cout << "�ҵĺ����Ѳι���: " << room.room1 << endl;
	cout << "�ҵĺ����ѻ��ι���: " << room.room2 << endl;

	cout << "�������ҵ����ң�" << room.my_room << endl;
}

void testFriendFunc() {
	Room r1 = Room();
	myFriendVisitRoom(r1);
}