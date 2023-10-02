#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5， 输出：5
//输入：10， 输出：55
//输入：2， 输出：1
#include<stdio.h>
//
//递归实现
//int Fibo_recursive(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibo_recursive(n - 1) + Fibo_recursive(n - 2);
//}
//// 
////
////非递归实现
//int Fibo_no_recursive(int n)
//{
//	int i;
//	int a = 1,b = 1,c = 0;
//	if (n <= 2)
//	return 1;
//	else
//	{
//		for (i = 0; i < (n - 2); i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入你要求第几个斐波那契数：");
//	scanf("%d", &n);
//	printf("Fibo_recursive实现：%d\n", Fibo_recursive(n));
//	printf("Fibo_no_recursive实现：%d\n", Fibo_no_recursive(n));
//	return 0;
//}


