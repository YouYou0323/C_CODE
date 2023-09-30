#define _CRT_SECURE_NO_WARNINGS 1
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
#include<stdio.h>
int main()
{
	int i ,label=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 || i/10==9)
			label++;
	}
	printf("%d", label);
	return 0;
}