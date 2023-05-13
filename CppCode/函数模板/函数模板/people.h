#ifndef _PEOPLE__H_
#define _PEOPLE__H_
#include <iostream>
#include <string>
using namespace std;

class People
{
public:
	People(string name, int age);
	~People();

	string m_name;
	int m_age;
};


#endif // !_PEOPLE__H_