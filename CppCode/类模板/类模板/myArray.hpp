#ifndef _MY_ARRAY__H_
#define _MY_ARRAY__H_

/*
	��ֹ��ģ����ַ��ļ���д���ֵĴ���  ʹ��hpp�ļ�����.hͷ�ļ���.cppԴ�ļ�
*/

#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

template<class T>
class MyArray {
public:
	//���캯��
	MyArray(int len)
	{
		iLen = len;
		iNum = 0;
		pAddress = new T[iLen];
	}
	
	//��������
	MyArray(const MyArray &arr)
	{
		this->iLen = arr.iLen;
		this->iNum = arr.iNum;
		this->pAddress = new T[this->iLen];
		for (int i = 0; i < iLen; i++)
		{
			//���TΪ���󣬶��һ�����ָ�룬������Ҫ���� = ����������Ϊ����ȺŲ��� ���� ���Ǹ�ֵ
			// ��ͨ���Ϳ���ֱ��= ����ָ��������Ҫ���
			pAddress[i] = arr.pAddress[i];
		}
	}

	//����= ������ ��ֹǳ��������



	~MyArray()
	{
		delete pAddress;
		pAddress = NULL;
		iLen = 0;
		iNum = 0;
	}
	

private:
	T *pAddress;		//�ڶ��￪�ٿռ� �������
	int iLen;			//�������󳤶�
	int iNum;			//�����Ա���еĸ���
};

#endif // !_MY_ARRAY__H_
