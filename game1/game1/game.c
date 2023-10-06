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
void Dispaly_board(char board[ROW][COL], int row, int col)
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
void player(char board[ROW][COL], int row, int col)
{
	int x=0, y=0;
	printf("玩家下棋:\n");
	while (1)
	{
		printf("请输入你要下的位置坐标:>");
		scanf("%d %d", &x, &y);
		if ((x > 0 && x <= row) && (y > 0 && y <= col) )//外层判断位置是否合法
		{
			if (board[x - 1][y - 1] == ' ')//内层判断位置是否有棋子
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("该位置已被占用，请重新输入！\n");
		}
		else
			printf("该位置非法，重新输入！\n");
	}
}
void computer_player(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑下棋：\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//遍历每一行 看是否都是一样的棋子
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//遍历每一列 看是否都是一样的棋子
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//对角线 
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board [1][1]!= ' ')
		return board[1][1];
	//对角线
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board [1][1]!= ' ')
		return board[1][1];
	if (is_full(board, row, col))
	{
		return 'q';
	}
	return 'c';
}
