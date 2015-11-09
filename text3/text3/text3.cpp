// text3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int i,t;
	int n[7] = { 3,7,5,18,15,6,20 };
	for (t = 0;t <= 6;t=t+1)
	 {
		 for (i = 0;i <=5;i = i + 1)
		if (n[i] >= n[i + 1])
		{
			n[i] = n[i] + n[i + 1];
			n[i + 1] = n[i] - n[i + 1];
			n[i] = n[i] - n[i + 1];
		}
	}
	for (i = 0;i <= 6;i = i + 1)
		printf("%5d", n[i]);
	getchar();
    return 0;
}

