#define _CRT_SECURE_NO_WARNINGS 1
//从大到小输出
//写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1
//#include<stdio.h>
//int main()
//{
//	
//	int a, b, c;
//	int temp;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d \n",a, b, c);
//	return 0;
//}

//另外的思路：
//int a[3];
	//for (i = 0; i < 3; i++)
	//{
	//	scanf("%d ", &a[i]);
	//}
	////a[0] a[1] a[2]
	//// 1    2    3
	//// 2	1	 3
	//// 2	3	 1
	////i=2 数组下标越界
	//if (a[i] < a[i + 1])
	//	a[i] = a[i + 1];