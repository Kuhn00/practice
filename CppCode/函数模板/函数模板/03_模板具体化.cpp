#include<iostream>
#include"people.h"
using namespace std;

template<class T>
bool myCompare(T a, T b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//����˳���Ǿ��廯������ģ��
template<> bool myCompare(People p1, People p2)
{
	if ((p1.m_name == p2.m_name) && (p1.m_age == p2.m_age))
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	People p1("����", 14);
	People p2("����", 14);

	myCompare(p1, p2);	//û��д���廯�ᱨ��
	system("pause");
	return 0;
}