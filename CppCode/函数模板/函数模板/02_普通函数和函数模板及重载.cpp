#include<iostream>
using namespace std;

void myPrint(int a, int b)
{
	cout << "��ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "����ģ��" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "����ģ������" << endl;
}




/*
int main()
{
	int a = 10;
	int b = 20;

	myPrint(a, b);	//��ͨ����  �����ͨ����ֻ������ δʵ��  �ᱨ��

	myPrint<>(a, b);	//����ģ��

	myPrint(a, b, 20);	//����ģ������

	myPrint('a', 'b');	//����ģ��
	system("pause");
	return 0;

}
*/