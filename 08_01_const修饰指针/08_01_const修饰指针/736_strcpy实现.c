#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//��һ��
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
//�޸�
//�⺯��strcpy���ص���Ŀ��ռ����ʼ��ַ
char* my_strcpy(char* dest, char const* src)
{
	char* ret = dest;
	//����
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