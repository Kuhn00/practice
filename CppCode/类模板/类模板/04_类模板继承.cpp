#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

//当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
//如果不指定，编译器无法给子类分配内存
//如果想灵活指定出父类中T的类型，子类也需变为类模板
template<class T>
class Base {
public:
	T m;
};

//class Son:public Base //错误，c++编译需要给子类分配内存，必须知道父类中T的类型才可以向下继承
class Son1 :public Base<int> {

};

//子类也为模板
template<class T1, class T2>
class Son2 :public Base<T2> {
public:
	Son2() {
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
};


void test4()
{
	Son1 s;
	cout << typeid(s.m).name() << endl;

	Son2<int, double> s2;
}
