#include"utils.h"

/*
size(); //����������Ԫ�ص���Ŀ
empty(); //�ж������Ƿ�Ϊ��
swap(st); //����������������
*/

void test2()
{
	set<int> s1;
	set<int> s2;
	if (s1.empty())
	{
		cout << "s1 Ϊ��" << endl;
		s1.insert(5);
		s1.insert(10);
		s1.insert(4);
		s1.insert(8);
		s1.insert(1);
	}

	s2.insert(66);
	s2.insert(7);
	s2.insert(3);
	s2.insert(99);
	s2.insert(1);
	s2.insert(77);
	cout << "����ǰ:" << endl;
	cout << "s1's size��" << s1.size() << endl;
	cout << "s1��";
	printSet(s1);

	cout << "s2's size��" << s2.size();
	cout << "s2��";
	printSet(s2);

	s1.swap(s2);
	cout << "������:" << endl;
	cout << "s1's size��" << s1.size() << endl;
	cout << "s1��";
	printSet(s1);

	cout << "s2's size��" << s2.size();
	cout << "s2��";
	printSet(s2);
}
