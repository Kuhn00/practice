//建议全局函数做类内实现，用法简单，而且编译器可以直接识别
#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

//全局函数类内实现 - 直接在类内声明友元即可
//全局函数类外实现 - 需要提前让编译器知道全局函数或者类的存在
template<class T1, class T2>
class Person {
	//1、全局函数配合友元 类内实现  不加friend就是类内私有的 并且不需要在类外声明 包含该类所在的文件即可直接调用
	friend void printPerson(Person<T1, T2> & p)
	{
		cout << "姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
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