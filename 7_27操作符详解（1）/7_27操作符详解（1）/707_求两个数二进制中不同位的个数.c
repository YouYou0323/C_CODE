#define _CRT_SECURE_NO_WARNINGS 1
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//�Լ��ķ���������������
#include<stdio.h>
//int count_diff_bit(int n) {
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
//	int a, b;
//	int count;
//	printf("������������������");
//	scanf("%d %d", &a, &b);
//	int temp = a ^ b;//��λ��� ��ͬΪ0 ��ͬΪ1 
//	count= count_diff_bit(temp);
//	printf("���������в�ͬλ�ĸ�����%d\n", count);
//	return 0;
//}

//��ҵ���⣺
//������һ����
int count_diff_bit(int a, int b)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
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
	count = count_diff_bit(a,b);
	printf("����������1�ĸ�����%d\n", count);
	return 0;
}
