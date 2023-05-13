#include"utils.h"

/*
构造：
map<T1, T2> mp; //map默认构造函数:
map(const map &mp); //拷贝构造函数
赋值：
map& operator=(const map &mp); //重载等号操作符
*/


//map中所有元素都是成对出现，插入数据时候要使用对组
void test1()
{
	map<int, int> m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	m1.insert(pair<int, int>(6, 20));
	m1.insert(pair<int, int>(5, 20));

	printMap(m1);

	map<int, int> m2(m1);
	printMap(m2);

	map<int, int> m3;
	m3 = m2;
	printMap(m3);
}
