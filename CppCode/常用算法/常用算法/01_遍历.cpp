#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//��ͨ����
void print01(int val)
{
	cout << val << " ";
}

class print02
{
public:
	void operator()(int val){
		cout << val << " ";
	}
};



int transform_test(int val)
{
	return val;
}

class TransForm
{
public:
	int operator()(int val)
	{
		return val;
	}
};



/*
for_each(iterator beg, iterator end, _func);
// �����㷨 ��������Ԫ��
// beg ��ʼ������
// end ����������
// _func �������ߺ�������
*/
void test_for_each()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print01);
	cout << endl;
	for_each(v.begin(), v.end(), print02());
	cout << endl;
}

/*
transform(iterator beg1, iterator end1, iterator beg2, _func);

������������һ��������
//beg1 Դ������ʼ������
//end1 Դ��������������
//beg2 Ŀ��������ʼ������
//_func �������ߺ�������
*/

void test_transform()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	v2.resize(v1.size());

	transform(v1.begin(), v1.end(), v2.begin(), TransForm());
	for_each(v2.begin(), v2.end(), print01);
	cout << endl;
	transform(v1.begin(), v1.end(), v2.begin(), transform_test);
	for_each(v2.begin(), v2.end(), print01);
	cout << endl;
}
