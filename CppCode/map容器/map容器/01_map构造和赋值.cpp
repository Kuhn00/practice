#include"utils.h"

/*
���죺
map<T1, T2> mp; //mapĬ�Ϲ��캯��:
map(const map &mp); //�������캯��
��ֵ��
map& operator=(const map &mp); //���صȺŲ�����
*/


//map������Ԫ�ض��ǳɶԳ��֣���������ʱ��Ҫʹ�ö���
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
