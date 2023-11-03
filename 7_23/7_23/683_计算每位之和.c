#define _CRT_SECURE_NO_WARNINGS 1
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//		return (n % 10) + DigitSum(n / 10);
//	else
//		//修改 return n%10;
//		return n;
//}
//int main()
//{
//	int n;
//	printf("请输入一个非负整数：\n");
//	scanf("%d", &n);
//	printf("每位数字之和：%d", DigitSum(n));
//	return 0;
//}