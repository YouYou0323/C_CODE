#define _CRT_SECURE_NO_WARNINGS 1
//strlen��ģ�⣨�ݹ�ʵ�֣�
//��ҵ����
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
//	printf("���������������ַ�����");
//	scanf("%s", arr);
//	printf("(�ݹ�)���ַ����ĳ��ȣ�%d\n", strlen_recursive(arr));
//	printf("(�ǵݹ�)���ַ����ĳ��ȣ�%d\n", strlen_no_recursive(arr));
//}