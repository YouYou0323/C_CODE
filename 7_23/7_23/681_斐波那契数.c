#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5�� �����5
//���룺10�� �����55
//���룺2�� �����1
#include<stdio.h>
//
//�ݹ�ʵ��
//int Fibo_recursive(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibo_recursive(n - 1) + Fibo_recursive(n - 2);
//}
//// 
////
////�ǵݹ�ʵ��
//int Fibo_no_recursive(int n)
//{
//	int i;
//	int a = 1,b = 1,c = 0;
//	if (n <= 2)
//	return 1;
//	else
//	{
//		for (i = 0; i < (n - 2); i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n;
//	printf("��������Ҫ��ڼ���쳲���������");
//	scanf("%d", &n);
//	printf("Fibo_recursiveʵ�֣�%d\n", Fibo_recursive(n));
//	printf("Fibo_no_recursiveʵ�֣�%d\n", Fibo_no_recursive(n));
//	return 0;
//}


