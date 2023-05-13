#include<iostream>
#include<string>
using namespace std;

//类模板就是在类上加  template  就是类内成员的泛型
//可以指定默认类型 在实例化时没有指定类型 就使用默认类型
template<class TypeName, class TypeAge = int>
class Person
{
public:
	Person(TypeName name, TypeAge age)
	{
		m_name = name;
		m_age = age;
	}

	TypeName m_name;
	TypeAge m_age;
};

void test1()
{
	Person<string, int>p1("张三", 15);
	cout << p1.m_name << "\t" << p1.m_age << endl;

	Person<string, string>p2("张三", "李四");
	cout << p2.m_name << "\t" << p2.m_age << endl;

	Person<string>p3("王五", 15);
	cout << p3.m_name << "\t" << p3.m_age << endl;
}
