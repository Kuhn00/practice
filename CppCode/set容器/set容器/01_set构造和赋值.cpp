#include"utils.h"

/*
set<T> st; //默认构造函数：
set(const set &st); //拷贝构造函数
赋值：
set& operator=(const set &st); //重载等号操作符
*/


/*
set容器插入数据时用insert
set容器插入数据的数据会自动排序
set容器插入数据的数据不能重复(重复值会重叠但不会报错)
*/
void test1()
{
	set<int> s1;
	//for (int i = 0; i < 10; i++)
	//{
	//	s1.insert(i);
	//}
	s1.insert(1);
	s1.insert(1);
	printSet(s1);

	set<int> s2(s1);
	printSet(s2);

	set<int> s3 = s2;
	printSet(s3);
}
