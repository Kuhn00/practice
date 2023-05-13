#include<iostream>
#include<string>
using namespace std;

/*
string& insert(int pos, const char* s); //插入字符串
string& insert(int pos, const string& str); //插入字符串
string& insert(int pos, int n, char c); //在指定位置插入n个字符c
string& erase(int pos, int n = npos); //删除从Pos开始的n个字符
*/

void test7()
{
	string s1 = "abcdefg";

	s1.insert(0, 1, 'x');
	cout << s1 << endl;

	s1.erase(0, 1);
	cout << s1 << endl;
}


