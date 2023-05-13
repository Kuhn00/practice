#include"utils.h"

/*
size(); //返回容器中元素的个数
empty(); //判断容器是否为空
resize(num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除。
resize(num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除。
*/

void test3()
{
	list<int> l1;
	if (l1.empty())
	{
		cout << "l1 为空 需要进行初始化" << endl;
		for (int i = 0; i < 10; i++)
		{
			l1.push_back(i);
		}
		cout << "初始化完成" << endl;
	}
	cout << "l1元素个数：" << l1.size() << endl;
	printList(l1);

	l1.resize(5);
	printList(l1);

	l1.resize(10);
	printList(l1);
}
