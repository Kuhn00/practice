#include"person.h"

Person::Person()
{
	cout << "Person �޲ι��캯��" << endl;
}

Person::Person(string name, int age)
{
	//*m_age = age;
	m_age = new int(age);
	m_name = name;
	cout << "Person �вι��캯��" << endl;
}

/*��������
ʹ��ǳ������ֵ���ݣ�ʱ  ��ԭ�������ٺ� �����ܽ��п���
���  ��Ҫ����ԭ���󱻿�����ֵ
*/
Person::Person(const Person& p)
{
	cout << "��������" << endl;
	//*m_age = *p.m_age;
	m_age = new int(*p.m_age);
	m_name = p.m_name;
}


Person::~Person() {
	cout << "��������" << endl;
	if (NULL != m_age)
	{
		delete m_age;
		m_age = NULL;
	}
}