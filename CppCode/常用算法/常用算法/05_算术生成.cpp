#include<numeric>
#include"myprint.h"

/*
算术生成算法属于小型算法，使用时包含的头文件为 #include <numeric>
accumulate // 计算容器元素累计总和
fill // 向容器中添加元素
*/

/*
accumulate(iterator beg, iterator end, value);
// 计算容器元素累计总和
// beg 开始迭代器
// end 结束迭代器
// value 起始值
*/
void test_accumulate()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	int ret = accumulate(v.begin(), v.end(), 0);
	cout << "和为：" << ret << endl;
}

/*
fill(iterator beg, iterator end, value);
// 向容器中填充元素
// beg 开始迭代器
// end 结束迭代器
// value 填充的值
*/
void test_fill()
{
	vector<int> v;
	v.resize(10);
	fill(v.begin(), v.end(), 10);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}
