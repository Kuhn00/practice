#include"utils.h"

/*
size(); //����������Ԫ�صĸ���
empty(); //�ж������Ƿ�Ϊ��
resize(num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
resize(num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
*/

void test3()
{
	list<int> l1;
	if (l1.empty())
	{
		cout << "l1 Ϊ�� ��Ҫ���г�ʼ��" << endl;
		for (int i = 0; i < 10; i++)
		{
			l1.push_back(i);
		}
		cout << "��ʼ�����" << endl;
	}
	cout << "l1Ԫ�ظ�����" << l1.size() << endl;
	printList(l1);

	l1.resize(5);
	printList(l1);

	l1.resize(10);
	printList(l1);
}
