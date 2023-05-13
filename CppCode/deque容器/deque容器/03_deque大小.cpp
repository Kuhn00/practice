#include"utils.h"
using namespace std;

/*
deque.empty(); //判断容器是否为空
deque.size(); //返回容器中元素的个数
deque.resize(num); //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除。
deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除。
*/

void test3()
{
	deque<int> d1;
	if (d1.empty())
	{
		cout << "d1为空 需要进行添加数据" << endl;
		for (int i = 0; i < 10; i++)
		{
			d1.push_back(i);
		}
		cout << "添加数据完成!" << endl;
	}

	cout << "d1中元素个数为：" << d1.size() << endl;

	printDeque(d1);
	d1.resize(3);
	printDeque(d1);
	d1.resize(10);
	printDeque(d1);
}
