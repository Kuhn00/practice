#include<iostream>
#include<string>
using namespace std;
/*
string(); //����һ���յ��ַ��� ����: string str;
string(const char* s); //ʹ���ַ���s��ʼ��
string(const string& str); //ʹ��һ��string�����ʼ����һ��string����
string(int n, char c); //ʹ��n���ַ�c��ʼ��
*/

void test1()
{
	string s1;
	cout << s1 << endl;

	const char* str = "hello world";
	string s2(str);
	cout << s2 << endl;

	string s3(s2);	//���ÿ������캯��
	cout << s3 << endl;

	string s4(10, 'a');
	cout << s4 << endl;
}

