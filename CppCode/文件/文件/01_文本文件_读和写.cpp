#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void writeFile()
{
	ofstream ofs("D:\\Desktop\\text.txt", ios::out);
	//ofstream ofs("D:\\Desktop\\text.txt", ios::out);
	ofs.open("D:\\Desktop\\text.txt", ios::out);	 //Ϊд�ļ���
	if (!ofs.is_open())
	{
		cout << "д�ļ���ʧ��" << endl;
		return;
	}
	ofs << "����������" << endl;
	ofs << "���䣺18" << endl;
	ofs << "�Ա���" << endl;
	ofs.close();
}

void readFile()
{
	ifstream ifs;
	ifs.open("D:\\Desktop\\text.txt", ios::in);		//Ϊ���ļ���
	if (!ifs.is_open())
	{
		cout << "���ļ���ʧ��" << endl;
		return;
	}


	//1��
	/*	
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/


	//2��
	/*	
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/


	//3��
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
