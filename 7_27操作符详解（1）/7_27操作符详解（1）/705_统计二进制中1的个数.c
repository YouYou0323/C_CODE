#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
// 自己的方法（方法二）：
//int NumberOf1(int n) 
//{
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

//作业讲解：
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
// 
// 方法一：
//15%2=1
//15/2=7
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 0)//类比十进制 模10 得到最低位 
//			count++;
//		n = n / 2;//类比十进制 ÷10 得到最低位的下一位
//	}
//	return count;
//}
//
//方法三：
//n = n&(n-1)表达式执行一次 最右边的1就会消失
int count_num_of_1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

