#include<iostream>
#include<fstream>
#include"person.h"
using namespace std;

void writeAndReadFile()
{
	ofstream ofs("D:\\Desktop\\person.txt", ios::out | ios::binary);		//二进制写方式打开文件
	
	if (!ofs.is_open())
	{
		cout << "写文件打开失败" << endl;
		return;
	}

	Person p = { "张三", 18 };
	ofs.write((const char *)&p, sizeof(p));
	ofs.close();	//不在读取前关闭写入流  读取时则会乱码

	ifstream ifs("D:\\Desktop\\person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "读文件打开失败" << endl;
	}
	Person p2;
	ifs.read((char *)&p2, sizeof(p2));
	cout << " p2姓名：" << p2.m_name << "\n p2年龄：" << p2.m_age << endl;
	ifs.close();
}

int main()
{
	writeAndReadFile();

	system("pause");
	return 0;
}