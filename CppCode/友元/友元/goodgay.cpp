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
	cout << "�û������ڷ���" << myHouse->m_SittingRoom << endl;
	cout << "�û������ڷ���" << myHouse->m_BedRoom << endl;
}
