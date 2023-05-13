#include<iostream>
#include<vector>
#include"utils.h"
using namespace std;

/*
empty(); //判断容器是否为空
capacity(); //容器的容量  容量会比元素个数大
size(); //返回容器中元素的个数
resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除。

resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除
*/

/*
判断是否为空 --- empty
返回元素个数 --- size
返回容器容量 --- capacity
重新指定大小 --- resize
*/
void test3()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1的容量为：" << v1.capacity() << endl;
		cout << "v1的元素个数为：" << v1.size() << endl;
	}

	v1.resize(15);
	printVector(v1);

	v1.resize(5);
	printVector(v1);
}

