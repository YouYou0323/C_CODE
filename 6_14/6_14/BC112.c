//С��������Ӵ�����ͷ��Ŧ����������Ľ��������С���ֺܱ���������������
//����������
//����һ��������n(1 �� n �� 109)
//���������
//���һ��ֵ��Ϊ��ͽ����
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, n;
	long long sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		sum = sum + i;
	printf("%lld", sum);
	return 0;
}