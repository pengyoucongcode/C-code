#include "pch.h"
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char Text[128] = { '\0' }; //�����ַ�����
	char mystery[128] = { '\0' }; //�����ַ�����
	int i;
	cout << "��ӭʹ�����ļ��������Ľ��ܳ���" << endl;
	cout << "������ǵ�һ�ο�ʼ����������Ƚ������ļ���" << endl;
	cout << "�밴���������" << endl;
	getchar();
	while (true)
	{
		system("cls");
		int key;
		cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[" << endl;
		cout << "�U          �˵�          �U" << endl;
		cout << "�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g" << endl;
		cout << "�U          1--����       �U" << endl;
		cout << "�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g" << endl;
		cout << "�U          2--����       �U" << endl;
		cout << "�d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g" << endl;
		cout << "�U          0--�˳�       �U" << endl;
		cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a" << endl;
		cout << "������ָ�";
		cin >> key;
		switch (key)
		{
		case 1:
			cout << "������Ҫ���ܵĲ������ո�Ӣ�ġ����ֻ�����ַ���" << endl;;
			cin >> Text;
			for (i = 0; i < strlen(Text); i++)
			{
				mystery[i] = Text[i] + i + 5;  //���ܹ���
			}
			mystery[i] = '\0';
			cout << "���ܺ�" << mystery << endl;
			cout << "�밴�س�������:";
			getchar();
			getchar();
			break;
		case 2:
			for (i = 0; i < strlen(mystery); i++)
			{
				Text[i] = mystery[i] - i - 5; //���ܹ���
			}
			cout << "���ܺ�" << Text << endl;
			cout << "�밴�س�������:";
			getchar();
			getchar();
			break;
		case 0:
			exit(0);
		default:
			cout << "ָ�����" << endl;
			cout << "�밴�س�������:";
			getchar();
			getchar();
		}
	}
}