#include<iostream>
#include<string>
using namespace std;

/*
string& operator+=(const char* str); //����+=������
string& operator+=(const char c); //����+=������
string& operator+=(const string& str); //����+=������
string& append(const char *s); //���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char *s, int n); //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string &s); //ͬoperator+=(const string& str)
string& append(const string &s, int pos, int n); //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
*/

void test3()
{
	string s1 = "��";
	s1 += "��ѧϰ";
	cout << s1 << endl;

	s1 += '!';
	cout << s1 << endl;

	string s2;
	s2 += s1;
	cout << s2 << endl;

	s1.append("!!!");
	cout << s1 << endl;

	//s1.append("����ټ�", 4);	//һ������ռ�����ַ�
	s1.append("asdsad", 2);
	cout << s1 << endl;

	s1.append(s2);
	cout << s1 << endl;

	s1.append(s2, 2, 2);
	cout << s1 << endl;
}
