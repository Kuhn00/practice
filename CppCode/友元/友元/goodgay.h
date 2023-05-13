#ifndef _GOOD_GAY__H_
#define	_GOOD_GAY__H_
using namespace std;

#include<iostream>
#include<string>
#include"building.h"

class MyHouse;

class GoodGay
{
public:
	GoodGay();
	~GoodGay();

	void visit();

	MyHouse *myHouse;
};


#endif // !_GOOD_GAY__H_

