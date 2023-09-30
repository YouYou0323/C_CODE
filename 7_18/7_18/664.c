////二分查找
////编写代码在一个整形有序数组中查找具体的某个数
////要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int tag = 0;
//	//int left=0, right=9, mid;
//	//改进：通过计算数组大小动态设置右下标的初值.
//	//方法：通过sizeof函数计算数组总大小（字节数）/一个元素大小
//	int sz = sizeof(a) / sizeof(a[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	//自己写时，没有想明白的问题：如何处理要找的数字不在该数组的情况？
//	//答案：通过旗帜变量flag 标记 是否找到该数字，
//	//     初值为零flag=0 找到了flag=1 没找到flag依然为0 
//	//     最后通过flag的值 来判断结果 从而给用户反馈
//	int flag = 0;
//	printf("请输入你想找的数字：\n");
//	scanf("%d", &tag);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a[mid] < tag)
//			left = mid + 1;
//		else if (a[mid] > tag)
//			right = mid - 1;
//		else
//		{
//			printf("找到了！该数字下标是：%d", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	printf("抱歉，你要找的数字不在该数组里面！\n");
//	return 0;
//}