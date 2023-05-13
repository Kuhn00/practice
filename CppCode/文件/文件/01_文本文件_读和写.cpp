#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void writeFile()
{
	ofstream ofs("D:\\Desktop\\text.txt", ios::out);
	//ofstream ofs("D:\\Desktop\\text.txt", ios::out);
	ofs.open("D:\\Desktop\\text.txt", ios::out);	 //为写文件打开
	if (!ofs.is_open())
	{
		cout << "写文件打开失败" << endl;
		return;
	}
	ofs << "姓名：张三" << endl;
	ofs << "年龄：18" << endl;
	ofs << "性别：男" << endl;
	ofs.close();
}

void readFile()
{
	ifstream ifs;
	ifs.open("D:\\Desktop\\text.txt", ios::in);		//为读文件打开
	if (!ifs.is_open())
	{
		cout << "读文件打开失败" << endl;
		return;
	}


	//1、
	/*	
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/


	//2、
	/*	
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/


	//3、
	/*
	string buf;
	while(getline(ifs, buf))
	{
		cout << buf << endl;
	}
	*/

	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
	ifs.close();
}

/*
int main()
{
	//writeFile();
	readFile();
	system("pause");
	return 0;
}
*/
