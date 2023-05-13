#include<iostream>
#include<string>
using namespace std;

/*
int compare(const string &s) const; //与字符串s比较
int compare(const char *s) const; //与字符串s比较
*/

void test5()
{
	string s1 = "caaa";
	string s2 = "bbbb";
	int ret = s1.compare(s2);
	if (0 == ret)
	{
		cout << "s1 和 s2 相等" << endl;
	}
	else if (0 < ret)
	{
		cout << "s1 大于 s2" << endl;
	}
	else
	{
		cout << "s1 小于 s2" << endl;
	}
}
