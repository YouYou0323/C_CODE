#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Init_board(char board[ROWS][COLS], int rows, int cols, char c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = c;
		}
	}
}void Display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------扫雷-------------\n");
	//打印列号
	for (i = 0; i <= row; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);//打印行号
		for (j = 1; j <= col; j++)
		{
			
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------扫雷-------------\n");
}
void Set_Mine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count <10)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		board[x][y] = '1';
		count++;
	}
}
int Count_Mine(char mine_board[ROWS][COLS], int x, int y)
{
	return mine_board[x - 1][y + 1] + mine_board[x - 1][y] + mine_board[x - 1][y - 1] +
		mine_board[x][y + 1] + mine_board[x][y - 1] +
		mine_board[x + 1][y + 1] + mine_board[x + 1][y] + mine_board[x + 1][y - 1] - '0' * 8;
}
void find_mine(char mine_board[ROWS][COLS], char show_board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count<row*col-MINE_EASY)
	{
		printf("请输入你要排查位置的坐标：>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= 9 && y > 0 && y <= 9)
		{
			if (mine_board[x][y] != '1')
			{
				//调用函数，统计该位置周围八个位置有几个雷
				show_board[x][y]= Count_Mine(mine_board, x, y)+'0';
				count++;
				Display_board(show_board, ROW, COL);

			}
			else
			{
				printf("很遗憾，你被炸死了！\n");
				break;
			}
		}
		else
		{
			printf("该位置非法，请重新输入！\n");
		}
	}
	
}