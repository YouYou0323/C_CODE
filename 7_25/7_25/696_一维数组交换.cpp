#define _CRT_SECURE_NO_WARNINGS 1
//【一维数组】交换数组
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>
void swap(char a[], char b[])
{
	int i = 0;
	char temp = '0';
	for (i = 0; i < 6; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
int main()
{
	char a[6] = "abcde";
	char b[6] = "fghjk";
	int i = 0;
	printf("交换前：\n");
	for (i = 0; i < 5; i++)
	{
		printf("a[%d]=%c ",i, a[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("b[%d]=%c ", i, b[i]);
	}
	printf("\n");
	swap(a, b);
	printf("交换后：\n");
	for (i = 0; i < 5; i++)
	{
		printf("a[%d]=%c ", i, a[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("b[%d]=%c ", i, b[i]);
	}
	return 0;
}