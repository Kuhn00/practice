#include "circle.h"

Circle::Circle()
{
	cout << "���캯�� ��ʼ������ʱ�Զ�����" << endl;
}

Circle::~Circle()
{
	cout << "�������� ��������ʱ�Զ�����" << endl;
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