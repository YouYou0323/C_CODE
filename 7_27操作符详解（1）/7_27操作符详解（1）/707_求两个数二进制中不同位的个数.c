#define _CRT_SECURE_NO_WARNINGS 1
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//自己的方法（方法二）：
#include<stdio.h>
//int count_diff_bit(int n) {
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
//	int a, b;
//	int count;
//	printf("请输入你两个整数：");
//	scanf("%d %d", &a, &b);
//	int temp = a ^ b;//按位异或 相同为0 不同为1 
//	count= count_diff_bit(temp);
//	printf("二进制数中不同位的个数：%d\n", count);
//	return 0;
//}

//作业讲解：
//（方法一：）
int count_diff_bit(int a, int b)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
			count++;
	}
	return count;
}
int main()
{
	int a, b;
	int count;
	printf("请输入你两个整数：");
	scanf("%d %d", &a, &b);
	count = count_diff_bit(a,b);
	printf("二进制数中1的个数：%d\n", count);
	return 0;
}
