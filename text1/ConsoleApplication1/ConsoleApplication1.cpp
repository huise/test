// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	char(ch);
	printf("input:");
	scanf_s("%c",&ch);
	if (ch >= 'A'&&ch <= 'Z')
		printf("%c", ch + 32);
	else
		printf("输入错误。");
	getchar();
	getchar();
}

