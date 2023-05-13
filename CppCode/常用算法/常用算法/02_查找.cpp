#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include"myprint.h"
using namespace std;

/*
find //����Ԫ��
find_if //����������Ԫ��
adjacent_find //���������ظ�Ԫ��
binary_search //���ֲ��ҷ�
count //ͳ��Ԫ�ظ���
count_if //������ͳ��Ԫ�ظ���
*/

class Person
{
public:

	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

	bool operator==(const Person &p)
	{
		if (p.m_Name == this->m_Name && p.m_Age == this->m_Age)
		{
			return true;
		}
		return false;
	}

public:
	string m_Name;
	int m_Age;
};



//������������
bool greaterFive(int val)
{
	return val > 5;
}

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};


class Greater20
{
public:
	bool operator()(Person &p)
	{
		return p.m_Age > 20;
	}
};

bool greater20(Person &p)
{
	return p.m_Age > 20;
}


/*
find(iterator beg, iterator end, value);
// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg ��ʼ������
// end ����������
// value ���ҵ�Ԫ��
*/
void test_find()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find(v.begin(), v.end(), 10);
	if (it != v.end())
	{
		cout << "���ҵ�Ԫ���ڸ������д���" << endl;
	}
	else
	{
		cout << "�������в����ڲ��ҵ�Ԫ�� ��������Ԫ��Ϊ��" << endl;
		for_each(v.begin(), v.end(), myPrint);
		cout << endl;
	}

	//�����Զ�������
	vector<Person> persons;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	
	persons.push_back(p1);
	persons.push_back(p2);
	persons.push_back(p3);
	persons.push_back(p4);

	vector<Person>::iterator person = find(persons.begin(), persons.end(), p2);
	if (person != persons.end())
	{
		cout << "name��" << person->m_Name << " age��" << person->m_Age << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
		cout << endl;
	}
}


/*
find_if(iterator beg, iterator end, _Pred);
����������
// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
// beg ��ʼ������
// end ����������
// _Pred ��������ν�ʣ�����bool���͵ķº�����
*/
void test_find_if()
{

}
