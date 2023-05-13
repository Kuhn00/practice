#include<iostream>
#include<vector>
using namespace std;

/*
reserve(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问。
*/

//减少vector在动态扩展容量时的扩展次数(大小超过容量时会进行自动扩容)
void test7()
{
	vector<int> v1;

	v1.reserve(10000);
	int *p = NULL;
	int num = 0;	//统计扩容次数
	for (int i = 0; i < 10000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];		//vector内存连续
			num++;
		}
	}
	cout << "扩容次数为：" << num << endl;
}



int main()
{
	test7();

	system("pause");
	return 0;
}