#include<iostream>
#include<string>
using namespace std;

/*
int compare(const string &s) const; //���ַ���s�Ƚ�
int compare(const char *s) const; //���ַ���s�Ƚ�
*/

void test5()
{
	string s1 = "caaa";
	string s2 = "bbbb";
	int ret = s1.compare(s2);
	if (0 == ret)
	{
		cout << "s1 �� s2 ���" << endl;
	}
	else if (0 < ret)
	{
		cout << "s1 ���� s2" << endl;
	}
	else
	{
		cout << "s1 С�� s2" << endl;
	}
}
