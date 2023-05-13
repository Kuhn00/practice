#ifndef _MY_ARRAY__H_
#define _MY_ARRAY__H_

/*
	防止类模板出现分文件编写出现的错误  使用hpp文件整合.h头文件和.cpp源文件
*/

#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

template<class T>
class MyArray {
public:
	//构造函数
	MyArray(int len)
	{
		iLen = len;
		iNum = 0;
		pAddress = new T[iLen];
	}
	
	//拷贝构造
	MyArray(const MyArray &arr)
	{
		this->iLen = arr.iLen;
		this->iNum = arr.iNum;
		this->pAddress = new T[this->iLen];
		for (int i = 0; i < iLen; i++)
		{
			//如果T为对象，而且还包含指针，必须需要重载 = 操作符，因为这个等号不是 构造 而是赋值
			// 普通类型可以直接= 但是指针类型需要深拷贝
			pAddress[i] = arr.pAddress[i];
		}
	}

	//重载= 操作符 防止浅拷贝问题



	~MyArray()
	{
		delete pAddress;
		pAddress = NULL;
		iLen = 0;
		iNum = 0;
	}
	

private:
	T *pAddress;		//在堆里开辟空间 存放数组
	int iLen;			//数组的最大长度
	int iNum;			//数组成员现有的个数
};

#endif // !_MY_ARRAY__H_
