#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h>
void init_board(char board[ROW][COL], int row, int col )
{
	int i=0,j=0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void generator_board(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据行 “空格 |”
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if(j < col - 1)
			printf("|");
		}
		printf("\n");
		//打印分隔行 “__ |”
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("___", board[i][j]);
				if (j < col - 1)
					printf("|");
			}	
		}
		printf("\n");
	}
}
void player(char board[ROW][COL])
{
	int x, y;
	printf("玩家下棋，请输入你要下的位置：>");
	scanf("%d %d", &x, &y);
	if (x > 0 && x <= ROW && y>0 && y <= COL && board[x-1][y-1]!='#')
	{
		board[x - 1][y - 1] = '*';
		generator_board(board, ROW, COL);
	}
	else
		printf("该位置非法，重新输入！\n");
}
void computer_player(char board[ROW][COL],int x,int y)
{
	printf("电脑下棋：\n");
	if (board[x][y] != '*')
	{
		board[x][y] = '#';
		generator_board(board, ROW, COL);

	}
}
void game(char board[ROW][COL],int x,int y)
{
	while (1)
	{
		player(board);
		computer_player(board,x,y);
	}
}