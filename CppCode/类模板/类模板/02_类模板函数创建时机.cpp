#include<iostream>
#include<string>
using namespace std;

//��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���

class Person1
{
public:
	void showPerson1() {
		cout << "person1������" << endl;
	}
};

class Person2
{
public:
	void showPerson2() {
		cout << "person2������" << endl;
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
	//m1.fun2();  ����ʱ����  ��showPerson2�� : ���ǡ�Person1���ĳ�Ա

}

