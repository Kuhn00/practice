#include"utils.h"


/*
push_back(elem);//������β������һ��Ԫ��
pop_back();//ɾ�����������һ��Ԫ��
push_front(elem);//��������ͷ����һ��Ԫ��
pop_front();//��������ͷ�Ƴ���һ��Ԫ��

insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��

clear();//�Ƴ���������������
erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
*/

void test4()
{
	list<int> l1;
	//ͷ��
	l1.push_front(10);
	l1.push_front(10);
	l1.push_front(10);

	//β��
	l1.push_back(100);
	l1.push_back(100);
	l1.push_back(100);

	printList(l1);

	//βɾ
	l1.pop_back();
	printList(l1);

	//ͷɾ
	l1.pop_front();
	printList(l1);

	list<int>::iterator it = l1.begin();
	l1.insert(++it, 1000);
	printList(l1);
}
