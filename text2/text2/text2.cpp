// text2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int n, i, m = 0;
	for (n = 2;n <= 1000;n=n+1)
	{
		for (i = 2;i <= n / 2;i = i + 1)
			if (n%i == 0)break;
		if(i>n/2)
		{
			printf("%5d", n);
			m = m + 1;
		}
		if (m % 10 == 0)
			printf("\n");
	}
	printf("\n");
	getchar();
    return 0;
}

