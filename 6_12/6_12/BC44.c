//KiKi��֪��һ����������ż�ԣ�������жϡ��Ӽ�����������һ����������Χ - 231~231 - 1��������ж�������ż�ԡ�
//����������
//�������룬ÿ���������һ��������
//���������
//���ÿ�����룬���������������Odd������ż����Even����
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
    int a;
    while (scanf("%d", &a) != EOF) { // ע�� while ������ case
        if(a%2!=0)
            printf("Odd\n");
        else
            printf("Even\n");
    }
    return 0;
}