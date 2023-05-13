#include"utils.h"

/*
assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem); //将n个elem拷贝赋值给本身。
list& operator=(const list &lst); //重载等号操作符
swap(lst); //将lst与本身的元素互换。
*/

void test2()
{
	list<int> l1;
	for (int i = 9; i >= 0; i--)
	{
		l1.push_front(i);
	}
	cout << "l1:   ";
	printList(l1);

	list<int> l2;
	l2.assign(l1.begin(), l1.end());
	cout << "l2:   ";
	printList(l2);

	list<int> l3;
	l3.assign(10, 100);
	cout << "l3:   ";
	printList(l3);

	list<int> l4;
	l4 = l3;
	cout << "l4:   ";
	printList(l4);

	cout << "交换后：" << endl;
	l1.swap(l3);
	cout << "l1:   ";
	printList(l1);
	cout << "l3:   ";
	printList(l3);
}
