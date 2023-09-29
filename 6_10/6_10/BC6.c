//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a,b;
	short* s;
	s = &a;
	a = 10;
	char* c;
	b = 'W';
	c = &b;
	int* i;
	double* d;
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(i));
	printf("%d\n", sizeof(d));
	return 0;
} 