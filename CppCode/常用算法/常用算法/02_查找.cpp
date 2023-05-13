#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include"myprint.h"
using namespace std;

/*
find //查找元素
find_if //按条件查找元素
adjacent_find //查找相邻重复元素
binary_search //二分查找法
count //统计元素个数
count_if //按条件统计元素个数
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



//内置数据类型
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
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// value 查找的元素
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
		cout << "查找的元素在该容器中存在" << endl;
	}
	else
	{
		cout << "该容器中不存在查找的元素 该容器的元素为：" << endl;
		for_each(v.begin(), v.end(), myPrint);
		cout << endl;
	}

	//查找自定义数据
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
		cout << "name：" << person->m_Name << " age：" << person->m_Age << endl;
	}
	else
	{
		cout << "没找到" << endl;
		cout << endl;
	}
}


/*
find_if(iterator beg, iterator end, _Pred);
按条件查找
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// _Pred 函数或者谓词（返回bool类型的仿函数）
*/
void test_find_if()
{

}
