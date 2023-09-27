//KiKi想知道一个整数的奇偶性，请帮他判断。从键盘任意输入一个整数（范围 - 231~231 - 1），编程判断它的奇偶性。
//输入描述：
//多组输入，每行输入包括一个整数。
//输出描述：
//针对每行输入，输出该数是奇数（Odd）还是偶数（Even）。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
    int a;
    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
        if(a%2!=0)
            printf("Odd\n");
        else
            printf("Even\n");
    }
    return 0;
}