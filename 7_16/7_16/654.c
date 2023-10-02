#define _CRT_SECURE_NO_WARNINGS 1
//写一个代码：打印100~200之间的素数
#include<stdio.h>
int main()
{
	int i,j,flag=0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		flag = 0;//假设是素数 置0
		/*
		* 优化：for(j=2;j<=sqrt(i);j++)
		* 解释：若i=m*n 则m、n中至少有一个数 是 <=sqrt(i)
		*/
		for (j = 2; j < i; j++)
		{
			if(i% j == 0)//若表达式成立，说明一个数可以被1、自身以外的数整除 则不是素数
			  flag = 1;//不是素数 置1
		}
		if (flag == 0)//flag 依然等于0，说明是素数 打印输出
		{
			count++;
			printf("%d ", i);
		}
			
	}
	printf("\ncount=%d\n",count);
	return 0;
}