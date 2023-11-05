#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int NumberOf1(int n) {
//	int num = 1;
//	//00000000 00000000 00000000 00000001
//	int i = 0;
//	int count = 0;//计数
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (n >> i))//每次统计n的最低位 n每次右移得到新的最低位 
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n ;
//	int count = 0;
//	printf("请输入你要计算的数：");
//	scanf("%d", &n);
//	count= NumberOf1(n);
//	printf("二进制数中1的个数：%d\n", count);
//	return 0;
//}