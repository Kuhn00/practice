#include<iostream>
#include<vector>
#include"utils.h"
using namespace std;

/*
push_back(ele); //尾部插入元素ele
pop_back(); //删除最后一个元素
insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
insert(const_iterator pos, int count,ele); //迭代器指向位置pos插入count个元素ele
erase(const_iterator pos); //删除迭代器指向的元素
erase(const_iterator start, const_iterator end); //删除迭代器从start到end之间的元素
clear(); //删除容器中所有元素
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

	//清空 前闭后开
	v1.erase(v1.begin(), v1.end());
	printVector(v1);

	v1.clear();
	printVector(v1);
}

