#include "point.h"
/*Point::Point() {
	cout << "构造函数" << endl;
}

Point::~Point() {
	cout << "析构函数" << endl;
}*/


void Point::setX(int x)
{
	m_x = x;
}

void Point::setY(int y)
{
	m_y = y;
}

int Point::getX()
{
	return m_x;
}

int Point::getY()
{
	return m_y;
}