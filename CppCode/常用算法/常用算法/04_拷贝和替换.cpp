#include"myprint.h"

bool replaceGreater30(int val)
{
	return val > 30;
}

/*
copy(iterator beg, iterator end, iterator dest);
// ������ָ����Χ��Ԫ�ؿ�������һ������
// beg ��ʼ������
// end ����������
// dest Ŀ����ʼ������
*/

/*
replace(iterator beg, iterator end, oldvalue, newvalue);
// �������ھ�Ԫ�� �滻�� ��Ԫ��
// beg ��ʼ������
// end ����������
// oldvalue ��Ԫ��
// newvalue ��Ԫ��
*/
void test_replace()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(1);
	v.push_back(1);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "�滻��" << endl;
	replace(v.begin(), v.end(), 1, 10);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}


/*
replace_if(iterator beg, iterator end, _pred, newvalue);
// �������滻Ԫ�أ������������滻��ָ��Ԫ��
// beg ��ʼ������
// end ����������
// _pred ν��
// newvalue �滻����Ԫ��
*/
void test_replace_if()
{
	vector<int> v;
	//v.resize(10);

	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	cout << "�滻��" << endl;
	//�Ѵ���30�����滻��300
	replace_if(v.begin(), v.end(), replaceGreater30, 300);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}


/*
swap(container c1, container c2);
// ��������������Ԫ��
// c1����1
// c2����2
*/
void test_swap()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 100);
	}
	cout << "����ǰ�� " << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
	cout << "������ " << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
}
