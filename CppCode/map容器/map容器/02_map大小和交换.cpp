#include"utils.h"

/*
size(); //返回容器中元素的数目
empty(); //判断容器是否为空
swap(st); //交换两个集合容器
*/

void test2()
{
	map<int, int> m1;
	if (m1.empty())
	{
		cout << "map容器为空 正在添加元素" << endl;
		m1.insert(pair<int, int>(1, 10));
		m1.insert(pair<int, int>(2, 20));
		m1.insert(pair<int, int>(3, 30));
	}
	cout << "容器元素个数为：" << m1.size() << endl;
	
	map<int, int> m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "交换前：\n";
	printMap(m1);
	printMap(m2);

	m1.swap(m2);

	cout << "交换后：\n";
	printMap(m1);
	printMap(m2);


}


