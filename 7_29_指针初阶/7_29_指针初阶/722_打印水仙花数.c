#define _CRT_SECURE_NO_WARNINGS 1
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<stdio.h>
//�ҵ��뷨��
// ���ڵ����⣺�൱��Ĭ��������������λ��
//int main()
//{
//	printf("���ˮ�ɻ���:\n");
//	int i, a, b, c;
//	for (i = 0; i <= 100000; i++) //������ȡֵ��Χ
//	{
//		int a = i % 10;//��
//		int b = (i / 10) % 10;//ʮ
//		int c = (i / 100) % 10;//�� 
//		int d = (i / 1000) % 10;//ǧ
//		int e = (i / 10000) % 10;//��
//		if (i == a * a * a * a * a+ b * b * b*b *b+ c * c * c *c*c+ d * d * d *d*d+ e * e * e*e*e) //��λ�ϵ��������Ƿ���ԭ��n���
//			printf("%d\t", i);
//		else if(i == a * a * a*a + b * b * b*b + c * c * c*c + d * d * d*d)
//			printf("%d\t", i);
//		else if (i == a * a * a + b * b * b + c * c * c )
//			printf("%d\t", i);
//	}
//	return 0;
//}


//��������
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = 1;//��¼�����ֵ�λ��
//		int tmp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		while (tmp / 10)
//		{
//			count++;         //ÿ������һ��ѭ����˵�������ּ�һλ
//			tmp = tmp / 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);//temp%10 ȡ��ǰ���λ
//			tmp = tmp / 10;             //temp/10 ȥ������������Ϊ �õ��µ����Ϊ
//		}
//
//		//3. �ж�
//		if (sum == i)  
//			printf("%d ", i);
//	}
//	return 0;
//}
