#include<iostream>
#include<string>
using namespace std;

/*
����������
int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos = 0) const; //����s��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos, int n) const; //��posλ�ò���s��ǰn���ַ���һ��λ��
int find(const char c, int pos = 0) const; //�����ַ�c��һ�γ���λ��

����������
int rfind(const string& str, int pos = npos) const; //����str���һ��λ��,��pos��ʼ����
int rfind(const char* s, int pos = npos) const; //����s���һ�γ���λ��,��pos��ʼ����
int rfind(const char* s, int pos, int n) const; //��pos����s��ǰn���ַ����һ��λ��
int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
string& replace(int pos, int n,const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/

void test4()
{
	string s1 = "abcdefgde";
	int pos = s1.find("de", 0, 1);
	if (pos == -1)
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}

	s1.replace(0, 2, "aaaa");
	cout << s1 << endl;
}

