#include<iostream>
using namespace std;

void func(int a, int b)
{
	cout << "func(int a, int b)" << endl;
}

void func(int a, double b)
{
	cout << "func(int b, double a)" << endl;
}

int main()
{
	func(10, 20.1);
	system("pause");
	return 0;
}