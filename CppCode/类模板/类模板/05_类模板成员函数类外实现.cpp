#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

template<class TypeName, class TyepeAge>
class Person
{
public:
	Person(TypeName name, TyepeAge age);
	void show();
public:
	TypeName m_name;
	TyepeAge m_age;
};

//类模板中成员函数类外实现时，需要加上模板参数列表
template<class TypeName, class TyepeAge>
Person<TypeName, TyepeAge>::Person(TypeName name, TyepeAge age)
{
	m_name = name;
	m_age = age;
}
template<class TypeName, class TyepeAge>
void Person<TypeName, TyepeAge>::show()
{
	cout << m_name << "\t" << m_age << endl;
}

void test5()
{
	Person<string, int> p("Tom", 20);
	p.show();
}

