#define _CRT_SECURE_NO_WARNINGS 1
//дһ�����룺��ӡ100~200֮�������
#include<stdio.h>
int main()
{
	int i,j,flag=0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		flag = 0;//���������� ��0
		/*
		* �Ż���for(j=2;j<=sqrt(i);j++)
		* ���ͣ���i=m*n ��m��n��������һ���� �� <=sqrt(i)
		*/
		for (j = 2; j < i; j++)
		{
			if(i% j == 0)//�����ʽ������˵��һ�������Ա�1����������������� ��������
			  flag = 1;//�������� ��1
		}
		if (flag == 0)//flag ��Ȼ����0��˵�������� ��ӡ���
		{
			count++;
			printf("%d ", i);
		}
			
	}
	printf("\ncount=%d\n",count);
	return 0;
}