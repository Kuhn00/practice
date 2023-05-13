#include "point.h"
#include "circle.h"

bool isInCircle(Circle &circle, Point &point)
{
	double distance;
	distance = (point.getX() - circle.getCenter().getX()) * (point.getX() - circle.getCenter().getX()) +
		(point.getY() - circle.getCenter().getY()) * (point.getY() - circle.getCenter().getY());
	if (0 == distance)
	{
		cout << "点就是圆心" << endl;
	}
	if (distance == (circle.getR() * circle.getR()))
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > (circle.getR() * circle.getR()))
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
	return true;
}

int main()
{
	Circle c;
	c.setR(10);
	Point center;
	center.setX(0);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(20);

	isInCircle(c, p);
	system("pause");
	return 0;
}