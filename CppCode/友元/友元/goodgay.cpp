#include"goodgay.h"


GoodGay::GoodGay()
{
	myHouse = new MyHouse;
}

GoodGay::~GoodGay()
{
}

void GoodGay::visit()
{
	cout << "好基友正在访问" << myHouse->m_SittingRoom << endl;
	cout << "好基友正在访问" << myHouse->m_BedRoom << endl;
}
