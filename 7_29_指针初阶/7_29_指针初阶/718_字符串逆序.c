#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，可以逆序一个字符串的内容。
//#include<stdio.h>
//#include<string.h>
//void function(char s[])
//{
//	char* left= s;
//	int len = strlen(s);
//	char* right = &s[len - 1];
//	while (left< right)
//	{
//		char temp = *left;
//		*left= *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char s[]="abcdef";
//	printf("逆序前：%s\n", s);
//	function(s);
//	printf("%s", s);
//	return 0;
//}