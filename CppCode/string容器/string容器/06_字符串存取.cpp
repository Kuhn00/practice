#include<iostream>
#include<string>
using namespace std;

/*
char& operator[](int n); //通过[]方式取字符
char& at(int n); //通过at方法获取字符
*/

void test6()
{
	string s1 = "hello world";
	int len = s1.size();
	for (int i = 0; i < len; i++)
	{
		cout << s1[i];
	}
	cout << "\n==================\n" << endl;

	for (int i = 0; i < len; i++)
	{
		cout << s1.at(i);
	}
	cout << "\n==================\n" << endl;

	s1[0] = 'x';
	s1.at(0) = 'a';
	cout << s1 << endl;
}
