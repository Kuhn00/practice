#include"utils.h"
using namespace std;

/*
deque.empty(); //�ж������Ƿ�Ϊ��
deque.size(); //����������Ԫ�صĸ���
deque.resize(num); //����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
*/

void test3()
{
	deque<int> d1;
	if (d1.empty())
	{
		cout << "d1Ϊ�� ��Ҫ�����������" << endl;
		for (int i = 0; i < 10; i++)
		{
			d1.push_back(i);
		}
		cout << "����������!" << endl;
	}

	cout << "d1��Ԫ�ظ���Ϊ��" << d1.size() << endl;

	printDeque(d1);
	d1.resize(3);
	printDeque(d1);
	d1.resize(10);
	printDeque(d1);
}
