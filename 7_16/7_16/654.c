#define _CRT_SECURE_NO_WARNINGS 1
//写一个代码：打印100~200之间的素数
//#include<stdio.h>
//int main()
//{
//	int i,j,flag=0;
//	for (i = 100; i <= 200; i++)
//	{
//		flag = 0;
//		for (j = 2; j < i; j++)
//		{
//			if(i% j == 0)//若表达式成立，说明一个数可以被1、自身以外的数整除 则不是素数
//			  flag = 1;
//		}
//		if (flag == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}