#include"utils.h"

/*
insert(elem); //�������в���Ԫ�ء�
clear(); //�������Ԫ��
erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
erase(key); //ɾ��������ֵΪkey��Ԫ�ء�
*/

void test3()
{
	//����
	map<int, int> m;
	//��һ�ֲ��뷽ʽ
	m.insert(pair<int, int>(1, 10));
	//�ڶ��ֲ��뷽ʽ
	m.insert(make_pair(2, 20));
	//�����ֲ��뷽ʽ
	m.insert(map<int, int>::value_type(3, 30));
	//�����ֲ��뷽ʽ
	m[4] = 40;
	printMap(m);

	//m.clear();
	//printMap(m);

	
	//map<int, int>::iterator it = m.erase(m.begin());
	//cout << "key: " << it->first << " value: " << it->second << endl;
	//printMap(m);

	cout << "key��" << (m.erase(m.begin()))->first << " value��" << (m.erase(m.begin()))->second << endl;
	printMap(m);
}

