#define _CRT_SECURE_NO_WARNINGS 1
//打印1000年到2000年之间的闰年
/*
* 判断是否为闰年：
* 1.能被四整除、不能被100整除
* 2.能被400整除
*/
//#include<stdio.h>
//int main()
//{
//	int i;
//	int count=0；
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//			
//		//修改：
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//			printf("%d ", i);
//		//修改结束
//	}
//	return 0;
//}