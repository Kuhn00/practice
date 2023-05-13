#include"utils.h"

/*
list<T> lst; //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
list(beg,end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
list(n,elem); //���캯����n��elem����������
list(const list &lst); //�������캯����
*/

void test1()
{
	list<int> l1;
	for (int i = 0; i < 10; i++)
	{
		//β�巨
		l1.push_back(i);
	}
	printList(l1);

	list<int> l2(l1.begin(), l1.end());
	printList(l2);

	list<int> l3(10, 100);
	printList(l3);

	list<int> l4(l3);
	printList(l4);
}
