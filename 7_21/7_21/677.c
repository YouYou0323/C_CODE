#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ������is_prime���ж�һ�����ǲ���������
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool is_prime(int x)
{
	int j;
	int flag = 0;//����������
	for (j = 2; j <sqrt(x); j++)
	{
		if (x % j == 0)
		{
			flag = 1;
			break; //��ȷ��
		}
		//break; ��������ᵼ�� ���۵�ǰx�Ƿ��ܱ�j=2���� ��������ѭ�� ����j�޷�ѭ��
	}
	if (flag == 0)
		return true;
	else
		return false;

}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
			printf("%d ", i);
	}
	return 0;
}