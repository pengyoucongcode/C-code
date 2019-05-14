#include "pch.h"
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char Text[128] = { '\0' }; //明文字符数组
	char mystery[128] = { '\0' }; //密文字符数组
	int i;
	cout << "欢迎使用明文加密与密文解密程序" << endl;
	cout << "如果你是第一次开始这个程序，请先进行明文加密" << endl;
	cout << "请按任意键继续" << endl;
	getchar();
	while (true)
	{
		system("cls");
		int key;
		cout << "╔════════════════════════╗" << endl;
		cout << "║          菜单          ║" << endl;
		cout << "╠════════════════════════╣" << endl;
		cout << "║          1--加密       ║" << endl;
		cout << "╠════════════════════════╣" << endl;
		cout << "║          2--解密       ║" << endl;
		cout << "╠════════════════════════╣" << endl;
		cout << "║          0--退出       ║" << endl;
		cout << "╚════════════════════════╝" << endl;
		cout << "请输入指令：";
		cin >> key;
		switch (key)
		{
		case 1:
			cout << "请输入要加密的不包含空格英文、数字或符号字符：" << endl;;
			cin >> Text;
			for (i = 0; i < strlen(Text); i++)
			{
				mystery[i] = Text[i] + i + 5;  //加密规则
			}
			mystery[i] = '\0';
			cout << "加密后：" << mystery << endl;
			cout << "请按回车键继续:";
			getchar();
			getchar();
			break;
		case 2:
			for (i = 0; i < strlen(mystery); i++)
			{
				Text[i] = mystery[i] - i - 5; //解密规则
			}
			cout << "解密后：" << Text << endl;
			cout << "请按回车键继续:";
			getchar();
			getchar();
			break;
		case 0:
			exit(0);
		default:
			cout << "指令错误！" << endl;
			cout << "请按回车键继续:";
			getchar();
			getchar();
		}
	}
}