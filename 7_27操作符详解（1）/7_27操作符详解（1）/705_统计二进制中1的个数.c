#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int NumberOf1(int n) {
//	int num = 1;
//	//00000000 00000000 00000000 00000001
//	int i = 0;
//	int count = 0;//����
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (n >> i))//ÿ��ͳ��n�����λ nÿ�����Ƶõ��µ����λ 
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n ;
//	int count = 0;
//	printf("��������Ҫ���������");
//	scanf("%d", &n);
//	count= NumberOf1(n);
//	printf("����������1�ĸ�����%d\n", count);
//	return 0;
//}