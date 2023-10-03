//KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
//输入描述：
//多组输入，每一行输入一个字母。
//输出描述：
//针对每组输入，输出单独占一行，输出字母的对应形式。
//输入
//a
//A
//Z
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//一种写法：
//int main()
//{
//    char a;
//    while (scanf("%c", &a) != EOF)
//    {
//        if (a >= 97 && a <= 122)
//            printf("%c\n", a - 32);
//        if (a >= 65 && a <= 90)
//            printf("%c\n", a + 32);
//    }
//    return 0;
//}

//另一种写法:
//有库函数可以判断大写字母 -- isupper
//有库函数可以判断小写字母 -- islower
//大写转换成小写 -- tolower
//小写转换成大写 -- toupper
//需要包含的头文件是#include<ctype.h>

//#include<ctype.h>
//int main()
//{
//    char a;
//    while (scanf("%c", &a) != EOF)
//    {
//        if (islower(a))
//            printf("%c\n", toupper(a));
//        if (isupper(a))
//            printf("%c\n",tolower(a) );
//    }
//    return 0;
//}

