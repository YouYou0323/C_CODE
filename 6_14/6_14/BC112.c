//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
//输入描述：
//输入一个正整数n(1 ≤ n ≤ 109)
//输出描述：
//输出一个值，为求和结果。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i, n;
//	long long sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		sum = sum + i;
//	printf("%lld", sum);
//	return 0;
//}

//修改:
int main()
{
	long long n = 0;
	scanf("%lld", &n);
	long long ret = (1 + n) * n / 2;
	printf("%lld", ret);
	return 0;
}