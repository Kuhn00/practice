#include"utils.h"

/*
set<T> st; //Ĭ�Ϲ��캯����
set(const set &st); //�������캯��
��ֵ��
set& operator=(const set &st); //���صȺŲ�����
*/


/*
set������������ʱ��insert
set�����������ݵ����ݻ��Զ�����
set�����������ݵ����ݲ����ظ�(�ظ�ֵ���ص������ᱨ��)
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
