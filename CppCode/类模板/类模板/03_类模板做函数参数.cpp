#include<iostream>
#include<string>
using namespace std;

//TypeAge  不指定类型时默认为int类型
template<class TypeName, class TypeAge = int>
class Person {
public:
	Person(TypeName name, TypeAge age)
	{
		m_name = name;
		m_age = age;
	}

	void showPerson()
	{
		cout << m_name << "\t" << m_age << endl;
	}

public:
	TypeName m_name;
	TypeAge m_age;
};

//指定传入参数 常用
void print1(Person<string, int> p)
{
	p.showPerson();
}

//参数模板化  使用函数模板
template<class T1, class T2>
void print2(Person<T1, T2> p)
{
	p.showPerson();
}

//整个类模板化
template<class P>
void print3(P p)
{
	p.showPerson();
}

void test3()
{
	Person<string, int> p1("张三", 100);
	print1(p1);

	print2(p1);

	print3(p1);
}

