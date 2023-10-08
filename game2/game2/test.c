#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
meun()
{
	printf("*********************\n");
	printf("******1.play  *******\n");
	printf("******0.exit  *******\n");
	printf("*********************\n");
}
game()
{
	printf("游戏开始！\n");
	char mine_board[ROWS][COLS];
	char show_board[ROWS][COLS];
	Init_board(mine_board, ROWS, COLS,'0');
	Init_board(show_board, ROWS, COLS,'*');
	//Display_board(mine_board, ROW, COL);
	Display_board(show_board, ROW, COL);
	Set_Mine(mine_board, ROW, COL);
	Display_board(mine_board, ROW, COL);
	find_mine(mine_board, show_board, ROW, COL);
	
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		meun();
		printf("请选择：>");
		scanf("%d", &input);
		switch(input)
		{
		case 0:
			printf("退出游戏！\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}