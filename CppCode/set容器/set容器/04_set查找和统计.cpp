#include"utils.h"

/*
find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
count(key); //ͳ��key��Ԫ�ظ���		����set����0��1 ����0��Ӧû�� set.end()Ҳ��Ӧû�и�Ԫ��
*/

void test4()
{
	set<int> s1;
	//����
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//����
	set<int>::iterator pos = s1.find(20);
	if (pos != s1.end())
	{
		cout << "���鵽" << endl;
	}
	else
	{
		cout << "δ���鵽" << endl;
	}

	//ͳ��
	int num = s1.count(30);
	cout << "num = " << num << endl;
}



