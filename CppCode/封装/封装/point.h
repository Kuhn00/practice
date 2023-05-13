#ifndef POINT__H
#define POINT__H

#include<iostream>
using namespace std;

class Point
{
public:
	void setX(int x);
	void setY(int y);

	int getX();
	int getY();
	/*	Point();
	~Point();*/


private:
	int m_x;
	int m_y;
};


#endif // !POINT__H
