#include<iostream>
#include<string>
using namespace std;

/*
string& insert(int pos, const char* s); //�����ַ���
string& insert(int pos, const string& str); //�����ַ���
string& insert(int pos, int n, char c); //��ָ��λ�ò���n���ַ�c
string& erase(int pos, int n = npos); //ɾ����Pos��ʼ��n���ַ�
*/

void test7()
{
	string s1 = "abcdefg";

	s1.insert(0, 1, 'x');
	cout << s1 << endl;

	s1.erase(0, 1);
	cout << s1 << endl;
}


