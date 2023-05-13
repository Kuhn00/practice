#include<iostream>
#include<string>
using namespace std;

//普通类中的成员函数一开始就可以创建
//类模板中的成员函数在调用时才创建

class Person1
{
public:
	void showPerson1() {
		cout << "person1被创建" << endl;
	}
};

class Person2
{
public:
	void showPerson2() {
		cout << "person2被创建" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;
	void fun1()
	{
		obj.showPerson1();
	}

	void fun2()
	{
		obj.showPerson2();
	}
};

void test2()
{
	MyClass<Person1> m1;
	m1.fun1();
	//m1.fun2();  运行时出错  “showPerson2” : 不是“Person1”的成员

}

