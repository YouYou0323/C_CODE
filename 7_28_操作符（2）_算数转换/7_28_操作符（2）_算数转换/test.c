//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int i;//一个全局变量不初始化 ，默认值是0
//
//int main()
//{
//    i--;//-1
//    //-1 > 4
//    //sizeof计算的结果是size_t类型 是无符号整型
//    //i    sizeof()
//    //int 与 size_t 比较会发生类型提升
//    //所以是size_t 与 size_t 比较
//    // -1      4
//    // 11111111111111111111111111111111 > 00000000 00000000 00000000 00000100
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}