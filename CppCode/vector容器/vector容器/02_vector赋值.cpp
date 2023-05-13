#include<iostream>
#include<vector>
#include"utils.h"
using namespace std;

/*
vector& operator=(const vector &vec); //���صȺŲ�����
assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
assign(n, elem); //��n��elem������ֵ������
*/


void test2()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int> v2;
	v2 = v1;
	printVector(v2);

	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	vector<int> v4;
	v4.assign(10, 100);
	printVector(v4);

}


