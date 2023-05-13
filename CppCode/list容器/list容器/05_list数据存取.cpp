#include"utils.h"

/*
front(); //返回第一个元素。
back(); //返回最后一个元素。
*/


//list 不支持随机访问
void test5()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>::iterator it = L1.begin();
	//it += 1; 不允许
	it++;
}
