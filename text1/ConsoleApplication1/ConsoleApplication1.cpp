// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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
		printf("�������");
	getchar();
	getchar();
}

