#define _CRT_SECURE_NO_WARNINGS 1
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<stdio.h>
//我的想法：
// 存在的问题：相当于默认所有数都是三位数
//int main()
//{
//	printf("输出水仙花数:\n");
//	int i, a, b, c;
//	for (i = 0; i <= 100000; i++) //整数的取值范围
//	{
//		int a = i % 10;//个
//		int b = (i / 10) % 10;//十
//		int c = (i / 100) % 10;//百 
//		int d = (i / 1000) % 10;//千
//		int e = (i / 10000) % 10;//万
//		if (i == a * a * a * a * a+ b * b * b*b *b+ c * c * c *c*c+ d * d * d *d*d+ e * e * e*e*e) //各位上的立方和是否与原数n相等
//			printf("%d\t", i);
//		else if(i == a * a * a*a + b * b * b*b + c * c * c*c + d * d * d*d)
//			printf("%d\t", i);
//		else if (i == a * a * a + b * b * b + c * c * c )
//			printf("%d\t", i);
//	}
//	return 0;
//}


//方法二：
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = 1;//纪录该数字的位数
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;         //每当进入一次循环就说明该数字加一位
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);//temp%10 取当前最低位
//			tmp = tmp / 10;             //temp/10 去掉计算过的最低为 得到新的最低为
//		}
//
//		//3. 判断
//		if (sum == i)  
//			printf("%d ", i);
//	}
//	return 0;
//}
