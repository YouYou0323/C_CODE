#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba

#include<stdio.h>
#include<string.h>

//非递归实现 字符串逆序函数
void no_reverse_string(char s[])
{
	int left = 0;
	int len = strlen(s);
	int right = len - 1;
	while (left < right)
	{
		char temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
}

//递归实现 字符串逆序函数
void reverse_string(char s[])
{
	int left = 0;
	int len = strlen(s);
	int right = len - 1;

	//1
	char temp = s[left];
	//2
	s[left] = s[right];
	//3
	s[right] = '\0';
	//4
	if (strlen(s + 1) >=2)
		reverse_string(s + 1);
	//5
	s[right] = temp;
}
int main()
{
	char arr[] = "abcdef";
	//no_reverse_string(arr);
	reverse_string(arr);
	printf("%s\n", arr);//fedcba
	return 0;
}