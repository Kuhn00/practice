#include<iostream>
#include<vector>
using namespace std;

/*
reserve(int len); //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�
*/

//����vector�ڶ�̬��չ����ʱ����չ����(��С��������ʱ������Զ�����)
void test7()
{
	vector<int> v1;

	v1.reserve(10000);
	int *p = NULL;
	int num = 0;	//ͳ�����ݴ���
	for (int i = 0; i < 10000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];		//vector�ڴ�����
			num++;
		}
	}
	cout << "���ݴ���Ϊ��" << num << endl;
}



int main()
{
	test7();

	system("pause");
	return 0;
}