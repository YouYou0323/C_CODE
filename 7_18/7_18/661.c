//#define _CRT_SECURE_NO_WARNINGS 1
////猜数字游戏
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void meun()
//{
//	printf("***********************\n");
//	printf("****玩游戏请按1.*******\n");
//	printf("****退出游戏请按0.*****\n");
//	printf("***********************\n");
//}
//void game()
//{
//	//1.生成一个1~100的随机数
//	//调用rand函数生成一个伪随机数
//	//rand函数生产的随机数范围是：0~RAND_MAX(32767)
//	//还需要调用srand函数(为什么放在主函数中？)先生成一个随机数种子、才能使rand函数生成真正的随机数
//
//	int num = rand()%100+1;//0~99+1 -->0~100
//
//    //测试随机数是否生成成功
//	// printf("%d\n", num);
//	
//	//2.猜数逻辑
//	//输入的数字比随机数大 输出猜大了
//	//输入的数字比随机数小 输出猜小了
//	//输入的数字等于随机数 输出猜对了
//	int guess;
//	printf("请猜数：>\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > num)
//			printf("猜大了！\n");
//		else if (guess < num)
//			printf("猜小了！\n");
//		else if (guess = num)
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int intput=0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		meun();
//		printf("请选择：>");
//		scanf("%d", &intput);
//		switch (intput)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (intput);
//	
//	return 0;
//
//}