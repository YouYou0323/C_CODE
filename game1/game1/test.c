#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void meun()
{
	printf("*******************\n");
	printf("******1.paly ******\n");
	printf("******0.exit ******\n");
	printf("*******************\n");
}
void game()
{
	int ret ;
	char board[ROW][COL];
	//��ʼ�������е�Ԫ��
	init_board(board,ROW,COL);
	//չʾ����
	Dispaly_board(board, ROW, COL);
	//����
	while (1)
	{
		player(board, ROW, COL);
		Dispaly_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		computer_player(board, ROW, COL);
		Dispaly_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}	
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
	return 0;
}