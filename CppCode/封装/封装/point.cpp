#include "point.h"
/*Point::Point() {
	cout << "���캯��" << endl;
}

Point::~Point() {
	cout << "��������" << endl;
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