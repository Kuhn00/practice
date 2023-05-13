#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Person {
public:
	Person(string name, int age) {
		mName = name;
		mAge = age;
	}
public:
	string mName;
	int mAge;
};

void MyPrint(int val)
{
	cout << val << endl;
}

//�������������������
void test01()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	//ÿһ�����������Լ��ĵ����������������������������е�Ԫ��
	//vector<int>::iterator �õ�vector<int>���������ĵ���������
	//������ʽ1��
	vector<int>::iterator pBegin = v1.begin();		//v.begin()���ص����������������ָ�������е�һ������
	vector<int>::iterator pEnd = v1.end();			//v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��

	while (pBegin != pEnd)
	{
		cout << *pBegin << endl;
		pBegin++;
	}
	cout << "=============================================" <<endl;

	//������ʽ2��
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "=============================================" << endl;

	for_each(v1.begin(), v1.end(), MyPrint);
}

//����Զ�����������
void test02()
{
	vector<Person> v;
	
	//��������
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->mName << "  " << it->mAge << endl;
	}
}

/*
int main()
{
	test01();
	cout << "=============================================" << endl;
	test02();
	system("pause");
	return 0;
}
*/
