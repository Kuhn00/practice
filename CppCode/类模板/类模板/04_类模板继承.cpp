#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

//������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
//�����ָ�����������޷�����������ڴ�
//��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
template<class T>
class Base {
public:
	T m;
};

//class Son:public Base //����c++������Ҫ����������ڴ棬����֪��������T�����Ͳſ������¼̳�
class Son1 :public Base<int> {

};

//����ҲΪģ��
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
