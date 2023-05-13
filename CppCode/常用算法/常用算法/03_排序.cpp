#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include"myprint.h"
using namespace std;



void test_sort()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//sortĬ�ϴ�С��������
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}


/*
random_shuffle(iterator beg, iterator end);
// ָ����Χ�ڵ�Ԫ�������������
// beg ��ʼ������
// end ����������
*/
void test_random_shuffle()
{
	vector<int> v;

	srand((unsigned int)time(NULL));	//���ӵĻ� ÿ�������һ��
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

/*
merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
// ����Ԫ�غϲ������洢����һ������
// ע��: �������������������
// beg1 ����1��ʼ������ // end1 ����1���������� // beg2 ����2��ʼ������ // end2 ����2���������� //
dest Ŀ��������ʼ������
*/
void test_merge()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int> vTarget;
	vTarget.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), myPrint);
	cout << endl;
}

/*
reverse(iterator beg, iterator end);
// ��תָ����Χ��Ԫ��
// beg ��ʼ������
// end ����������
*/
void test_reverse()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "��תǰ�� " << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "��ת�� " << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

