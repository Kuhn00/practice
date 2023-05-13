#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//��ϵ�˽ṹ��
struct Person
{
	string m_Name; //����
	int m_Sex; //�Ա�1�� 2Ů
	int m_Age; //����
	string m_Phone; //�绰
	string m_Addr; //סַ
};

//ͨѶ¼�ṹ�� �������ϵ�������Ϊ1000
struct Addressbooks
{
	struct Person personArray[MAX]; //ͨѶ¼�б������ϵ������
	int m_Size; //ͨѶ¼����Ա����
};


void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

//Ӧ����һ��Ψһ���ظ���ֵ��֤ person��Ψһ��
void addPerson(Addressbooks *abs)
{
	string name; //����
	int sex; //�Ա�1�� 2Ů
	int age; //����
	string phone; //�绰
	string addr; //סַ

	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼���� �޷����" << endl;
		return;
	}
	else
	{
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		//�Ա�
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������";
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}


void showPerson(Addressbooks *abs)
{
	if (0 == abs->m_Size)
	{
		cout << "ͨѶ¼Ϊ�� ���Ƚ�����ӣ�" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}


//�ж��Ƿ���ڲ�ѯ����Ա�����ڷ���������������λ�ã������ڷ���-1
int isExist(Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}


void deletePerson(Addressbooks *abs)
{
	int ret = 0;
	string name;
	cout << "��������Ҫɾ������ϵ��" << endl;
	cin >> name;

	ret = isExist(abs, name);
	if (-1 != ret)
	{
		for (int i = ret; i < abs->m_Size - 1; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "��ͨѶ¼�в����ڴ��ˣ������½������룡" << endl;
	}

	system("pause");
	system("cls");
}


void findPerson(Addressbooks *abs)
{
	int ret;
	string name;
	cout << "������Ҫ���ҵ���ϵ�˵�������" << endl;
	cin >> name;
	ret = isExist(abs, name);
	if (-1 != ret)
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "��ͨѶ¼�в����ڴ��ˣ������½������룡" << endl;
	}

	system("pause");
	system("cls");
}


void changePerson(Addressbooks *abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;

		//�Ա�
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������";
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

void clearPerson(Addressbooks *abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	int select = 0;
	Addressbooks abs;
	abs.m_Size = 0;

	while (true)
	{
		showMenu();

		cin >> select;
		switch (select)
		{
			case 1:	//1�������ϵ��
				addPerson(&abs);
				break;
			case 2:	//2����ʾ��ϵ��
				showPerson(&abs);
				break;
			case 3:	//3��ɾ����ϵ��
				deletePerson(&abs);
				break;
			case 4:	//4��������ϵ��
				findPerson(&abs);
				break;
			case 5:	//5���޸���ϵ��
				changePerson(&abs);
				break;
			case 6:	//6�������ϵ��
				clearPerson(&abs);
				break;
			case 0:	//0���˳�ͨѶ¼
				cout << "��ӭ�´�ʹ��" << endl;
				system("pause");
				return 0;
				break;
		default:
			cout << "������������ ���������룡" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}