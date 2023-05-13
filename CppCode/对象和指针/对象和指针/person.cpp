#include"person.h"

Person::Person()
{
	cout << "Person 无参构造函数" << endl;
}

Person::Person(string name, int age)
{
	//*m_age = age;
	m_age = new int(age);
	m_name = name;
	cout << "Person 有参构造函数" << endl;
}

/*拷贝函数
使用浅拷贝（值传递）时  被原对象销毁后 将不能进行拷贝
深拷贝  需要保留原对象被拷贝的值
*/
Person::Person(const Person& p)
{
	cout << "拷贝函数" << endl;
	//*m_age = *p.m_age;
	m_age = new int(*p.m_age);
	m_name = p.m_name;
}


Person::~Person() {
	cout << "析构函数" << endl;
	if (NULL != m_age)
	{
		delete m_age;
		m_age = NULL;
	}
}