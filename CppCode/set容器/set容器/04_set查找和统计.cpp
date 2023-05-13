#include"utils.h"

/*
find(key); //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
count(key); //统计key的元素个数		对于set返回0或1 但是0对应没有 set.end()也对应没有该元素
*/

void test4()
{
	set<int> s1;
	//插入
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//查找
	set<int>::iterator pos = s1.find(20);
	if (pos != s1.end())
	{
		cout << "被查到" << endl;
	}
	else
	{
		cout << "未被查到" << endl;
	}

	//统计
	int num = s1.count(30);
	cout << "num = " << num << endl;
}



