#include<iostream>
using namespace std;

void myPrint(int a, int b)
{
	cout << "普通函数" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "函数模板" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "函数模板重载" << endl;
}




/*
int main()
{
	int a = 10;
	int b = 20;

	myPrint(a, b);	//普通函数  如果普通函数只声明了 未实现  会报错

	myPrint<>(a, b);	//函数模板

	myPrint(a, b, 20);	//函数模板重载

	myPrint('a', 'b');	//函数模板
	system("pause");
	return 0;

}
*/