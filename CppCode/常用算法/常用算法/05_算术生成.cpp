#include<numeric>
#include"myprint.h"

/*
���������㷨����С���㷨��ʹ��ʱ������ͷ�ļ�Ϊ #include <numeric>
accumulate // ��������Ԫ���ۼ��ܺ�
fill // �����������Ԫ��
*/

/*
accumulate(iterator beg, iterator end, value);
// ��������Ԫ���ۼ��ܺ�
// beg ��ʼ������
// end ����������
// value ��ʼֵ
*/
void test_accumulate()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	int ret = accumulate(v.begin(), v.end(), 0);
	cout << "��Ϊ��" << ret << endl;
}

/*
fill(iterator beg, iterator end, value);
// �����������Ԫ��
// beg ��ʼ������
// end ����������
// value ����ֵ
*/
void test_fill()
{
	vector<int> v;
	v.resize(10);
	fill(v.begin(), v.end(), 10);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}
