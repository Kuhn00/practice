#include "person.h"

void test()
{
	Person p1("уехЩ", 15);
	cout << "p1.name = " << p1.m_name << "\tp1.age = " << *p1.m_age << endl;

	Person p2(p1);
	cout << "p2.name = " << p2.m_name << "\tp2.age = " << *p2.m_age << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}