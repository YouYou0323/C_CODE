#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1. ���� n�Ľ׳ˡ�
//2. ���� 1!+2!+3!+����+10!
//int main()
//{
//	int i = 0, sum = 0, n = 0;
//	int ret = 1;
//	for(n=1;n<=10;n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		//����n!
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//�Ż���
//1*1
//1*1*2
//1*1*2*3
//1*1*2*3*4
//1*1*2*3*4*5
//int main()
//{
//	int sum = 0, n = 0, ret = 1;
//	for(n=1;n<=3;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}