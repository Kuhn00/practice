#include"building.h"

MyHouse::MyHouse()
{
	m_SittingRoom = "����";
}

MyHouse::~MyHouse()
{
}


void goodGay(MyHouse * myHouse) {
	cout << "�û������ڷ��ʣ�" << myHouse->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << myHouse->m_BedRoom << endl;
}
