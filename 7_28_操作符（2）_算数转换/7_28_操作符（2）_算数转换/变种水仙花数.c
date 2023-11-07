#define _CRT_SECURE_NO_WARNINGS 1
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
//比如1461 可以拆分成（1和461）, （14和61）, （146和1), 
////   1461/1000 1461%1000   1461/100 1461%100  1461/10 1461%10
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如：
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出 5位数中的所有 Lily Number。
//输出描述：
//一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。
#include<stdio.h>
int main()
{
	int i = 0;
	//遍历所有五位数
	for (i = 10000; i <= 99999; i++)
	{
		//判断Lily Number
		int j = 0;
		int sum = 0;
		int temp = i;
		for (j = 10; j <= 10000; j = j * 10)
		{
			sum += (temp / j) * (temp % j);
		}
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}