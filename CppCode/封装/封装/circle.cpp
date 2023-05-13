#include "circle.h"

Circle::Circle()
{
	cout << "构造函数 初始化对象时自动调用" << endl;
}

Circle::~Circle()
{
	cout << "析构函数 对象销毁时自动调用" << endl;
}

void Circle::setR(double r) 
{
	m_R = r;
}
void Circle::setCenter(Point center)
{
	m_Center = center;
}

double Circle::getR()
{
	return m_R;
}
Point Circle::getCenter()
{
	return m_Center;
}