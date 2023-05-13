#include<iostream>
#include<string>
using namespace std;

//TypeAge  ��ָ������ʱĬ��Ϊint����
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

//ָ��������� ����
void print1(Person<string, int> p)
{
	p.showPerson();
}

//����ģ�廯  ʹ�ú���ģ��
template<class T1, class T2>
void print2(Person<T1, T2> p)
{
	p.showPerson();
}

//������ģ�廯
template<class P>
void print3(P p)
{
	p.showPerson();
}

void test3()
{
	Person<string, int> p1("����", 100);
	print1(p1);

	print2(p1);

	print3(p1);
}

