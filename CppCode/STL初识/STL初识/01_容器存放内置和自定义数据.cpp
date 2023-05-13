#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Person {
public:
	Person(string name, int age) {
		mName = name;
		mAge = age;
	}
public:
	string mName;
	int mAge;
};

void MyPrint(int val)
{
	cout << val << endl;
}

//容器存放内置数据类型
void test01()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	//每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
	//遍历方式1、
	vector<int>::iterator pBegin = v1.begin();		//v.begin()返回迭代器，这个迭代器指向容器中第一个数据
	vector<int>::iterator pEnd = v1.end();			//v.end()返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置

	while (pBegin != pEnd)
	{
		cout << *pBegin << endl;
		pBegin++;
	}
	cout << "=============================================" <<endl;

	//遍历方式2、
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "=============================================" << endl;

	for_each(v1.begin(), v1.end(), MyPrint);
}

//存放自定义数据类型
void test02()
{
	vector<Person> v;
	
	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->mName << "  " << it->mAge << endl;
	}
}

/*
int main()
{
	test01();
	cout << "=============================================" << endl;
	test02();
	system("pause");
	return 0;
}
*/
