//����ȫ�ֺ���������ʵ�֣��÷��򵥣����ұ���������ֱ��ʶ��
#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

//ȫ�ֺ�������ʵ�� - ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ�� - ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ���������Ĵ���
template<class T1, class T2>
class Person {
	//1��ȫ�ֺ��������Ԫ ����ʵ��  ����friend��������˽�е� ���Ҳ���Ҫ���������� �����������ڵ��ļ�����ֱ�ӵ���
	friend void printPerson(Person<T1, T2> & p)
	{
		cout << "������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
	}

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};

void test7()
{
	Person<string, int>p("tom", 15);
	printPerson(p);
}


int main()
{
	test7();
	system("pause");
	return 0;
}