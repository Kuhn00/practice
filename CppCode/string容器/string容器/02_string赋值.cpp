#include<iostream>
#include<string>
using namespace std;

/*
string& operator=(const char* s); //char*�����ַ��� ��ֵ����ǰ���ַ���
string& operator=(const string &s); //���ַ���s������ǰ���ַ���
string& operator=(char c); //�ַ���ֵ����ǰ���ַ���
string& assign(const char *s); //���ַ���s������ǰ���ַ���
string& assign(const char *s, int n); //���ַ���s��ǰn���ַ�������ǰ���ַ���
string& assign(const string &s); //���ַ���s������ǰ�ַ���
string& assign(int n, char c); //��n���ַ�c������ǰ�ַ���
*/

void test2()
{
	string s1 = "hello world";	//����
	cout << s1 << endl;

	string s2 = s1;
	cout << s2 << endl;

	string s3;
	s3 = 'a';
	cout << s3 << endl;

	string s4;
	s4.assign("hello world");
	cout << s4 << endl;

	string s5;
	s5.assign("hello world", 5);
	cout << s5 << endl;

	string s6;
	s6.assign(s5);
	cout << s6 << endl;

	string s7;
	s7.assign(10, '5');
}

