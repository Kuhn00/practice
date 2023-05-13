#include"utils.h"

/*
size(); //返回容器中元素的数目
empty(); //判断容器是否为空
swap(st); //交换两个集合容器
*/

void test2()
{
	set<int> s1;
	set<int> s2;
	if (s1.empty())
	{
		cout << "s1 为空" << endl;
		s1.insert(5);
		s1.insert(10);
		s1.insert(4);
		s1.insert(8);
		s1.insert(1);
	}

	s2.insert(66);
	s2.insert(7);
	s2.insert(3);
	s2.insert(99);
	s2.insert(1);
	s2.insert(77);
	cout << "交换前:" << endl;
	cout << "s1's size：" << s1.size() << endl;
	cout << "s1：";
	printSet(s1);

	cout << "s2's size：" << s2.size();
	cout << "s2：";
	printSet(s2);

	s1.swap(s2);
	cout << "交换后:" << endl;
	cout << "s1's size：" << s1.size() << endl;
	cout << "s1：";
	printSet(s1);

	cout << "s2's size：" << s2.size();
	cout << "s2：";
	printSet(s2);
}
