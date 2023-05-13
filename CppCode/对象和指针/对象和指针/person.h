#ifndef _PERSON__H
#define _PERSON__H

#include<iostream>
#include<string>
//#include<string.h>
using namespace std;

class Person
{
public:
	Person();
	Person(string name, int age);
	Person(const Person& p);
	~Person();

public:
	string m_name;
	int *m_age;
};



#endif // !_PERSON__H

