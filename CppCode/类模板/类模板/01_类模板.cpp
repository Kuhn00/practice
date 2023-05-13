#include<iostream>
#include<string>
using namespace std;

//��ģ����������ϼ�  template  �������ڳ�Ա�ķ���
//����ָ��Ĭ������ ��ʵ����ʱû��ָ������ ��ʹ��Ĭ������
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
	Person<string, int>p1("����", 15);
	cout << p1.m_name << "\t" << p1.m_age << endl;

	Person<string, string>p2("����", "����");
	cout << p2.m_name << "\t" << p2.m_age << endl;

	Person<string>p3("����", 15);
	cout << p3.m_name << "\t" << p3.m_age << endl;
}
