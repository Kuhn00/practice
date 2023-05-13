#include<iostream>
#include<vector>
#include "utils.h"
using namespace std;
/*
swap(vec); // 将vec与本身的元素互换

swap可以使两个容器互换，可以达到实用的收缩内存效果
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
	cout << "交换前 v1 : ";
	printVector(v1);

	cout << "交换前 v2 : ";
	printVector(v2);

	v1.swap(v2);

	cout << "交换后 v1 : ";
	printVector(v1);

	cout << "交换后 v2 : ";
	printVector(v2);
}


void test06()
{
	vector<int> v1;
	for (int i = 0; i < 10000; i++)
	{
		v1.push_back(i);
	}

	cout << "v的容量为：" << v1.capacity() << endl;
	cout << "v的大小为：" << v1.size() << endl;

	v1.resize(3);
	//容器变短后 容量大小不会变  则会浪费空间
	cout << "v的容量为：" << v1.capacity() << endl;
	cout << "v的大小为：" << v1.size() << endl;

	//匿名对象  执行完后就销毁  收缩内存
	vector<int>(v1).swap(v1);
	cout << "收缩后：" << endl;
	cout << "v的容量为：" << v1.capacity() << endl;
	cout << "v的大小为：" << v1.size() << endl;
}
