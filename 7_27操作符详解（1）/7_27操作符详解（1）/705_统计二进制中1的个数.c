#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
// �Լ��ķ���������������
//int NumberOf1(int n) 
//{
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

//��ҵ���⣺
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
// 
// ����һ��
//15%2=1
//15/2=7
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 0)//���ʮ���� ģ10 �õ����λ 
//			count++;
//		n = n / 2;//���ʮ���� ��10 �õ����λ����һλ
//	}
//	return count;
//}
//
//��������
//n = n&(n-1)���ʽִ��һ�� ���ұߵ�1�ͻ���ʧ
int count_num_of_1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

