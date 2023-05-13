#ifndef CIRCLE__H
#define CIRCLE__H

#include<iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
	void setR(double r);
	void setCenter(Point center);

	double getR();
	Point getCenter();
	
	Circle();
	~Circle();

private:
	double m_R;
	Point m_Center;
};


#endif // CIRCLE__H