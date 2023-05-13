#include"utils.h"

/*
list<T> lst; //list采用采用模板类实现,对象的默认构造形式：
list(beg,end); //构造函数将[beg, end)区间中的元素拷贝给本身。
list(n,elem); //构造函数将n个elem拷贝给本身。
list(const list &lst); //拷贝构造函数。
*/

void test1()
{
	list<int> l1;
	for (int i = 0; i < 10; i++)
	{
		//尾插法
		l1.push_back(i);
	}
	printList(l1);

	list<int> l2(l1.begin(), l1.end());
	printList(l2);

	list<int> l3(10, 100);
	printList(l3);

	list<int> l4(l3);
	printList(l4);
}
