#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//#include<stdio.h>
//int f_recursive(int n)
//{
//	if (n > 1)
//		return n * f_recursive(n - 1);
//	else
//		return 1;
//}
//int f_no_recursive(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n;
//	printf("请输入n:");
//	scanf("%d", &n);
//	printf("(递归)n的阶乘是：%d\n", f_recursive(n));
//	printf("(非递归)n的阶乘是：%d\n", f_no_recursive(n));
//	return 0;
//}
