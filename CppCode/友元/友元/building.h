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
	//该全局函数可以访问该类的私有成员
	friend void goodGay(MyHouse * myHouse);
public:
	MyHouse();
	~MyHouse();

public:
	string m_SittingRoom;

private:
	string m_BedRoom = "卧室";
};


void goodGay(MyHouse * myHouse);

#endif // !_BUILDING__H_