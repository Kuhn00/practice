#include"utils.h"

/*
size(); //����������Ԫ�ص���Ŀ
empty(); //�ж������Ƿ�Ϊ��
swap(st); //����������������
*/

void test2()
{
	map<int, int> m1;
	if (m1.empty())
	{
		cout << "map����Ϊ�� �������Ԫ��" << endl;
		m1.insert(pair<int, int>(1, 10));
		m1.insert(pair<int, int>(2, 20));
		m1.insert(pair<int, int>(3, 30));
	}
	cout << "����Ԫ�ظ���Ϊ��" << m1.size() << endl;
	
	map<int, int> m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "����ǰ��\n";
	printMap(m1);
	printMap(m2);

	m1.swap(m2);

	cout << "������\n";
	printMap(m1);
	printMap(m2);


}


