#include<iostream>
#include<fstream>
#include"person.h"
using namespace std;

void writeAndReadFile()
{
	ofstream ofs("D:\\Desktop\\person.txt", ios::out | ios::binary);		//������д��ʽ���ļ�
	
	if (!ofs.is_open())
	{
		cout << "д�ļ���ʧ��" << endl;
		return;
	}

	Person p = { "����", 18 };
	ofs.write((const char *)&p, sizeof(p));
	ofs.close();	//���ڶ�ȡǰ�ر�д����  ��ȡʱ�������

	ifstream ifs("D:\\Desktop\\person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "���ļ���ʧ��" << endl;
	}
	Person p2;
	ifs.read((char *)&p2, sizeof(p2));
	cout << " p2������" << p2.m_name << "\n p2���䣺" << p2.m_age << endl;
	ifs.close();
}

int main()
{
	writeAndReadFile();

	system("pause");
	return 0;
}