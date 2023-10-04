#define _CRT_SECURE_NO_WARNINGS 1
//创建一个整形数组，完成对数组的操作
//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//#include<stdio.h>
//void init(int a[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		a[i] = i+1;
//	}
//}
//void print(int a[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("a[%d]=%d\n", i, a[i]);
//	}
//}
//void reversr(int a[], int sz)
//{
//	int i;
//	int* p = &a[0];
//	int temp = 0;
//	for (i = sz - 1; i >=sz/2;i--)
//	{
//		temp = *p;
//		*p = a[i];
//		a[i] = temp;
//		p++;
//	}
//}
//int main()
//{
//	int a[10];
//	int sz = sizeof(a) / sizeof(a[0]);
//	init(a,sz);
//	printf("初始化：\n");
//	print(a,sz);
//
//	reversr(a,sz);
//	printf("逆置后：\n");
//	print(a, sz);
//	return 0;
//}