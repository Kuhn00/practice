#include<iostream>
using namespace std;

//template<typename T>
template<class T>
void mySwap(T &a, T&b)
{
	int temp = a;
	a = b;
	b = temp;
}
template<class T>
T myAdd(T a, T b)
{
	return a + b;
}

void test()
{
	int a = 10, b = 20;
	cout << "����ǰ��a =" << a << "\tb = " << b << endl;
	mySwap<int>(a, b);	//T���������ͱ���һ��
	//mySwap(a, b);  �������Զ�ʶ��  û�в����ĺ���ģ�����ʹ�õ�һ�� ��ʾָ����������
	cout << "������a =" << a << "\tb = " << b << endl;

	myAdd<int>('a', 20);	//������Զ�����ת��     myAdd('a', 20)����ת��
}

/*
int main()
{
	test();
	system("pause");
	return 0;

}
*/
