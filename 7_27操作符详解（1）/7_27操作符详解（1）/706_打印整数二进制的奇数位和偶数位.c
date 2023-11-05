#define _CRT_SECURE_NO_WARNINGS 1
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
// 奇数位：第一位 第三位 第五位......
//#include<stdio.h>
//void NumberOfBit(int n)
//{
//	int num = 1;
//	//00000000 00000000 00000000 00000001
//	int i = 0;
//    //奇数位
//	for (i = 30; i >=0; i-=2)
//	{
//		printf("%d",num & (n >> i));
//	}
//    printf("\n");
//    //偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d",num & (n >> i));
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
