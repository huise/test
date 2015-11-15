// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int fib(int n);
	int n;
	printf("请输入一个正整数:");
	scanf_s("%d",&n);
	printf("%d\n", fib(n));
	getchar();
	getchar();
    return 0;
}
int fib(int n)
{
	int y;
	if (n <= 0)
		printf("error");
    else if (n == 1)
		y = 0;
	else if (n == 2)
		y = 1;
	else y= fib(n - 1) + fib(n - 2);
	return(y);
}

