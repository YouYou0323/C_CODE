#define _CRT_SECURE_NO_WARNINGS 1
//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20
#include<stdio.h>
/*
* 思路二：辗转相除法
*/
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	while (a % b != 0)
//	{
//		c = a% b;
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

/*
* 思路一：两个数中选取最小的数，看能不能同时被两个数整除，若不能则为选取的数字减一，看能否被整除
*/
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int tag = m > n ? n : m;
//	while (1)
//	{
//		if (m % tag == 0 && n % tag == 0)
//		{
//			printf("%d", tag);
//			break;
//		}
//		else
//			tag--;
//	}
//	return 0;
//}