#define _CRT_SECURE_NO_WARNINGS 1
//����һ���������飬��ɶ�����Ĳ���
//1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
#include<stdio.h>
void init(int a[],int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		a[i] = 0;
	}
}
void print(int a[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
}
void reverse(int a[], int sz)
{
	int i;
	int* p = &a[0];
	int temp = 0;
	for (i = sz - 1; i >=sz/2;i--)
	{
		temp = *p;
		*p = a[i];
		a[i] = temp;
		p++;
	}
}
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(a) / sizeof(a[0]);
	//init(a,sz);
	//printf("��ʼ����\n");
	print(a,sz);

	reverse(a,sz);
	printf("���ú�\n");
	print(a, sz);
	return 0;
}