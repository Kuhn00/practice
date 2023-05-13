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

//调用顺序是具体化优先于模板
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
	People p1("张三", 14);
	People p2("李四", 14);

	myCompare(p1, p2);	//没有写具体化会报错
	system("pause");
	return 0;
}