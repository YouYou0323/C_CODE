#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//第一遍
//void my_strcpy(char* dest,char const *src)
//{
//	assert(dest != NULL);
//	do
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	} while (*src != '\0');
//}
//修改
//库函数strcpy返回的是目标空间的起始地址
char* my_strcpy(char* dest, char const* src)
{
	char* ret = dest;
	//断言
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[10]="xxxxxxxxxx";
	char arr2[] = "abcdef";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}