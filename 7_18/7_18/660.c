#define _CRT_SECURE_NO_WARNINGS 1
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
#include<stdio.h>
int main()
{
	int i ,label=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 || i/10==9)
			label++;
	}
	printf("%d", label);
	return 0;
}