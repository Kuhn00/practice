#include"utils.h"

/*
front(); //���ص�һ��Ԫ�ء�
back(); //�������һ��Ԫ�ء�
*/


//list ��֧���������
void test5()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>::iterator it = L1.begin();
	//it += 1; ������
	it++;
}
