#define _CRT_SECURE_NO_WARNINGS 1
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
#include<stdio.h>
int NumberOf1(int n) {
	int num = 1;
	//00000000 00000000 00000000 00000001
	int i = 0;
	int count = 0;//计数
	for (i = 0; i < 32; i++)
	{
		if (num & (n >> i))//每次统计n的最低位 n每次右移得到新的最低位 
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
	int temp = a ^ b;//按位异或 相同为0 不同为1 
	count= NumberOf1(temp);
	printf("二进制数中1的个数：%d\n", count);
	return 0;
}