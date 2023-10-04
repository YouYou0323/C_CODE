#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int a[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int* p = &a[0];
		int j = 0;
		for (j = 1; j < sz-i; j++)
		{
			int temp = 0;
			if ( *p > a[j])
			{
				temp = *p;
				*p = a[j];
				a[j] = temp;
				p++;
			}
		}
	}
}
int main()
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	int sz = sizeof(a) / sizeof(a[0]);
	int i = 0;
	printf("√∞≈›≈≈–Ú«∞£∫\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	bubble_sort(a, sz);
	printf("√∞≈›≈≈–Ú∫Û£∫\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
