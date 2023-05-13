#include"building.h"

MyHouse::MyHouse()
{
	m_SittingRoom = "客厅";
}

MyHouse::~MyHouse()
{
}


void goodGay(MyHouse * myHouse) {
	cout << "好基友正在访问：" << myHouse->m_SittingRoom << endl;
	cout << "好基友正在访问：" << myHouse->m_BedRoom << endl;
}
