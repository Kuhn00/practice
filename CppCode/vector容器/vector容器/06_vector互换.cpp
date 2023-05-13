#include<iostream>
#include<vector>
#include "utils.h"
using namespace std;
/*
swap(vec); // ��vec�뱾���Ԫ�ػ���

swap����ʹ�����������������Դﵽʵ�õ������ڴ�Ч��
*/

void test6()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 9; i >= 0; i--)
	{
		v2.push_back(i);
	}
	cout << "����ǰ v1 : ";
	printVector(v1);

	cout << "����ǰ v2 : ";
	printVector(v2);

	v1.swap(v2);

	cout << "������ v1 : ";
	printVector(v1);

	cout << "������ v2 : ";
	printVector(v2);
}


void test06()
{
	vector<int> v1;
	for (int i = 0; i < 10000; i++)
	{
		v1.push_back(i);
	}

	cout << "v������Ϊ��" << v1.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v1.size() << endl;

	v1.resize(3);
	//������̺� ������С�����  ����˷ѿռ�
	cout << "v������Ϊ��" << v1.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v1.size() << endl;

	//��������  ִ����������  �����ڴ�
	vector<int>(v1).swap(v1);
	cout << "������" << endl;
	cout << "v������Ϊ��" << v1.capacity() << endl;
	cout << "v�Ĵ�СΪ��" << v1.size() << endl;
}
