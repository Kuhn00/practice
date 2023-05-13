#include"myprint.h"

bool replaceGreater30(int val)
{
	return val > 30;
}

/*
copy(iterator beg, iterator end, iterator dest);
// 容器内指定范围的元素拷贝到另一容器中
// beg 开始迭代器
// end 结束迭代器
// dest 目标起始迭代器
*/

/*
replace(iterator beg, iterator end, oldvalue, newvalue);
// 将区间内旧元素 替换成 新元素
// beg 开始迭代器
// end 结束迭代器
// oldvalue 旧元素
// newvalue 新元素
*/
void test_replace()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(1);
	v.push_back(1);

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "替换后：" << endl;
	replace(v.begin(), v.end(), 1, 10);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}


/*
replace_if(iterator beg, iterator end, _pred, newvalue);
// 按条件替换元素，满足条件的替换成指定元素
// beg 开始迭代器
// end 结束迭代器
// _pred 谓词
// newvalue 替换的新元素
*/
void test_replace_if()
{
	vector<int> v;
	//v.resize(10);

	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "替换后：" << endl;
	//把大于30的数替换成300
	replace_if(v.begin(), v.end(), replaceGreater30, 300);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}


/*
swap(container c1, container c2);
// 互换两个容器的元素
// c1容器1
// c2容器2
*/
void test_swap()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 100);
	}
	cout << "交换前： " << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
	cout << "交换后： " << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
}
