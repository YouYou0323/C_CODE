#define _CRT_SECURE_NO_WARNINGS 1
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//		return (n % 10) + DigitSum(n / 10);
//	else
//		//�޸� return n%10;
//		return n;
//}
//int main()
//{
//	int n;
//	printf("������һ���Ǹ�������\n");
//	scanf("%d", &n);
//	printf("ÿλ����֮�ͣ�%d", DigitSum(n));
//	return 0;
//}