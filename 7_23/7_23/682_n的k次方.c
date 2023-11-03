#define _CRT_SECURE_NO_WARNINGS 1
//递归实现n的k次方
//编写一个函数实现n的k次方，使用递归实现。
#include<stdio.h>
//int Pow(int x, int y)
//{
//	if (y == 1)
//		return x;
//	else
//		return  x * Pow(x, y - 1);
//}
// 
// 
//修改Pow()
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else if (k < 0)
//		return 1.0 / Pow(n, -k);
//}

//int main()
//{
//	int n, k;
//	printf("求n的k次方，请输入n和k:\n");
//	scanf("%d %d", &n, &k);
//	printf("%f", Pow(n, k));
//	return 0;
//}
//
