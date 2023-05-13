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
	cout << "交换前：a =" << a << "\tb = " << b << endl;
	mySwap<int>(a, b);	//T的数据类型必须一致
	//mySwap(a, b);  这样会自动识别  没有参数的函数模板必须使用第一种 显示指定数据类型
	cout << "交换后：a =" << a << "\tb = " << b << endl;

	myAdd<int>('a', 20);	//会进行自动类型转换     myAdd('a', 20)不会转换
}

/*
int main()
{
	test();
	system("pause");
	return 0;

}
*/
