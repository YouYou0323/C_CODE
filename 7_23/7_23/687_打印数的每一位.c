#define _CRT_SECURE_NO_WARNINGS 1
//递归方式实现打印一个整数的每一位
//#include<stdio.h>
//int  fun(int n)
//{
//	while (n > 9)
//	{
//		printf("%d", fun(n / 10));
//	}
//	return n % 10;
//}
//int fun(int n)
//{
//	if (n > 9)
//	{
//		fun(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n=0;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}