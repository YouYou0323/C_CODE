#define _CRT_SECURE_NO_WARNINGS 1
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
#include<stdio.h>
int NumberOf1(int n) {
	int num = 1;
	//00000000 00000000 00000000 00000001
	int i = 0;
	int count = 0;//����
	for (i = 0; i < 32; i++)
	{
		if (num & (n >> i))//ÿ��ͳ��n�����λ nÿ�����Ƶõ��µ����λ 
			count++;
	}
	return count;
}
int main()
{
	int a, b;
	int count;
	printf("������������������");
	scanf("%d %d", &a, &b);
	int temp = a ^ b;//��λ��� ��ͬΪ0 ��ͬΪ1 
	count= NumberOf1(temp);
	printf("����������1�ĸ�����%d\n", count);
	return 0;
}