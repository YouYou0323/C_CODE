//#define _CRT_SECURE_NO_WARNINGS 1
////��������Ϸ
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void meun()
//{
//	printf("***********************\n");
//	printf("****����Ϸ�밴1.*******\n");
//	printf("****�˳���Ϸ�밴0.*****\n");
//	printf("***********************\n");
//}
//void game()
//{
//	//1.����һ��1~100�������
//	//����rand��������һ��α�����
//	//rand�����������������Χ�ǣ�0~RAND_MAX(32767)
//	//����Ҫ����srand����(Ϊʲô�����������У�)������һ����������ӡ�����ʹrand�������������������
//
//	int num = rand()%100+1;//0~99+1 -->0~100
//
//    //����������Ƿ����ɳɹ�
//	// printf("%d\n", num);
//	
//	//2.�����߼�
//	//��������ֱ�������� ����´���
//	//��������ֱ������С �����С��
//	//��������ֵ�������� ����¶���
//	int guess;
//	printf("�������>\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > num)
//			printf("�´��ˣ�\n");
//		else if (guess < num)
//			printf("��С�ˣ�\n");
//		else if (guess = num)
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//		printf("��ѡ��>");
//		scanf("%d", &intput);
//		switch (intput)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (intput);
//	
//	return 0;
//
//}