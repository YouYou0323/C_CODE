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
	//初始化棋盘中的元素
	init_board(board,ROW,COL);
	//展示棋盘
	Dispaly_board(board, ROW, COL);
	//下棋
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
		printf("玩家赢！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢！\n");
	}
	else
	{
		printf("平局！\n");
	}
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("开始游戏\n");
			game();
			break;
		default:
			printf("选择错误，请重新选择！");
			break;
		}
	} while (input);
	return 0;
}