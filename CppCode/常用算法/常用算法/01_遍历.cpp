#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//普通函数
void print01(int val)
{
	cout << val << " ";
}

class print02
{
public:
	void operator()(int val){
		cout << val << " ";
	}
};



int transform_test(int val)
{
	return val;
}

class TransForm
{
public:
	int operator()(int val)
	{
		return val;
	}
};



/*
for_each(iterator beg, iterator end, _func);
// 遍历算法 遍历容器元素
// beg 开始迭代器
// end 结束迭代器
// _func 函数或者函数对象
*/
void test_for_each()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print01);
	cout << endl;
	for_each(v.begin(), v.end(), print02());
	cout << endl;
}

/*
transform(iterator beg1, iterator end1, iterator beg2, _func);

搬运容器到另一个容器中
//beg1 源容器开始迭代器
//end1 源容器结束迭代器
//beg2 目标容器开始迭代器
//_func 函数或者函数对象
*/

void test_transform()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	v2.resize(v1.size());

	transform(v1.begin(), v1.end(), v2.begin(), TransForm());
	for_each(v2.begin(), v2.end(), print01);
	cout << endl;
	transform(v1.begin(), v1.end(), v2.begin(), transform_test);
	for_each(v2.begin(), v2.end(), print01);
	cout << endl;
}
