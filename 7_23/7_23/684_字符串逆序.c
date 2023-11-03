#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba

#include<stdio.h>
#include<string.h>

//�ǵݹ�ʵ�� �ַ���������
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

//�ݹ�ʵ�� �ַ���������
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