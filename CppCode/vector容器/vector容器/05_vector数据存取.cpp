#include<iostream>
#include<vector>
#include"utils.h"
using namespace std;

/*
��string����һ��

at(int idx); //��������idx��ָ������
operator[]; //��������idx��ָ������
front(); //���������е�һ������Ԫ��
back(); //�������������һ������Ԫ��
*/

void test5()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
}
