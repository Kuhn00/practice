#include<iostream>
#include<string>
using namespace std;

/*
string& operator+=(const char* str); //重载+=操作符
string& operator+=(const char c); //重载+=操作符
string& operator+=(const string& str); //重载+=操作符
string& append(const char *s); //把字符串s连接到当前字符串结尾
string& append(const char *s, int n); //把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s); //同operator+=(const string& str)
string& append(const string &s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结尾
*/

void test3()
{
	string s1 = "我";
	s1 += "爱学习";
	cout << s1 << endl;

	s1 += '!';
	cout << s1 << endl;

	string s2;
	s2 += s1;
	cout << s2 << endl;

	s1.append("!!!");
	cout << s1 << endl;

	//s1.append("你好再见", 4);	//一个汉字占两个字符
	s1.append("asdsad", 2);
	cout << s1 << endl;

	s1.append(s2);
	cout << s1 << endl;

	s1.append(s2, 2, 2);
	cout << s1 << endl;
}
