#ifndef _BUILDING__H_
#define _BUILDING__H_
using namespace std;

#include<iostream>
#include<string>
#include"goodgay.h"

class GoodGay;
class MyHouse
{
	friend class GoodGay;
	friend void GoodGay::visit();
	//��ȫ�ֺ������Է��ʸ����˽�г�Ա
	friend void goodGay(MyHouse * myHouse);
public:
	MyHouse();
	~MyHouse();

public:
	string m_SittingRoom;

private:
	string m_BedRoom = "����";
};


void goodGay(MyHouse * myHouse);

#endif // !_BUILDING__H_