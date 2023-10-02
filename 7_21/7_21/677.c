#define _CRT_SECURE_NO_WARNINGS 1
//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool is_prime(int x)
{
	int j;
	int flag = 0;//假设是素数
	for (j = 2; j <sqrt(x); j++)
	{
		if (x % j == 0)
		{
			flag = 1;
			break; //正确的
		}
		//break; 放在这儿会导致 无论当前x是否能被j=2整除 都会跳出循环 导致j无法循环
	}
	if (flag == 0)
		return true;
	else
		return false;

}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
			printf("%d ", i);
	}
	return 0;
}