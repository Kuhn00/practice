#include<iostream>
using namespace std;

//函数添加默认参数
//默认参数只能放在参数列表后面
//如果函数声明有默认参数  函数实现不能有默认参数
//int add(int a, int b = 20, int c = 30);
int add(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
/*
int main()
{
	//调用函数时 如果传入了参数 则使用传入的参数 否则使用默认参数
	cout << add(10, 30) << endl;
	system("pause");
	return 0;
}
*/