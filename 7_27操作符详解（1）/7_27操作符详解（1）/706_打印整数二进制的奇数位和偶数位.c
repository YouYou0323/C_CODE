#define _CRT_SECURE_NO_WARNINGS 1
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include<stdio.h>
//void NumberOfBit(int n) {
//	int num = 1;
//	//00000000 00000000 00000000 00000001
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (n >> i))
//			printf("1");
//		if (!(num & (n >> i)))
//			printf("0");
//	}
//}
//int main()
//{
//	int n;
//	int count = 0;
//	printf("请输入你要计算的数：");
//	scanf("%d", &n);
//	NumberOfBit(n);
//	return 0;
//}
