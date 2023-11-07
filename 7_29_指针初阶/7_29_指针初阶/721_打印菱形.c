#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i < 8; i++)
	{
		for (j = 6; j >= i; j--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j ++)
		{
			printf("*");
		}
		for (j = 0; j < (i-1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < 7; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 7; j >i; j--)
		{
			printf("*");
		}
		for (j = 6; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}