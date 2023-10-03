#define _CRT_SECURE_NO_WARNINGS 1
//strlen的模拟（递归实现）
//作业内容
//递归和非递归分别实现strlen
//#include<stdio.h>
//int strlen_recursive(char* p)
//{
//	if (*p != '\0')
//		return 1+strlen_recursive(p + 1);
//	else
//		return 0;
//}
//int strlen_no_recursive(char* p)
//{
//	int count=0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] ;
//	printf("请输入你想计算的字符串：");
//	scanf("%s", arr);
//	printf("(递归)该字符串的长度：%d\n", strlen_recursive(arr));
//	printf("(非递归)该字符串的长度：%d\n", strlen_no_recursive(arr));
//}