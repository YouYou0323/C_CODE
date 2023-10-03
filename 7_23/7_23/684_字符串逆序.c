#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba

//#include<stdio.h>
//char* reverse_string(char* string)
//{
//	//char* p=string;
//	//char temp='a';
//	//if (*string == '\0')
//	//{
//	//	//string = string - 1;
//	//	temp = *string;
//	//	*string = *p;
//	//	*p = temp;
//	//}
//	//else
//	//	reverse_string(string + 1);
//	int arr[10];
//	if (*string != '\0')
//		reverse_string(string + 1);
//	else
//		return reverse_string(string);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}