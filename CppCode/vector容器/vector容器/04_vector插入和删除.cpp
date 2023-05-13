#include<iostream>
#include<vector>
#include"utils.h"
using namespace std;

/*
push_back(ele); //β������Ԫ��ele
pop_back(); //ɾ�����һ��Ԫ��
insert(const_iterator pos, ele); //������ָ��λ��pos����Ԫ��ele
insert(const_iterator pos, int count,ele); //������ָ��λ��pos����count��Ԫ��ele
erase(const_iterator pos); //ɾ��������ָ���Ԫ��
erase(const_iterator start, const_iterator end); //ɾ����������start��end֮���Ԫ��
clear(); //ɾ������������Ԫ��
*/

void test4()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	v1.pop_back();
	printVector(v1);

	v1.insert(v1.end(), 9);
	printVector(v1);

	v1.insert(v1.end(), 10, 9);
	printVector(v1);

	v1.erase(v1.end() - 1);
	printVector(v1);

	//��� ǰ�պ�
	v1.erase(v1.begin(), v1.end());
	printVector(v1);

	v1.clear();
	printVector(v1);
}

