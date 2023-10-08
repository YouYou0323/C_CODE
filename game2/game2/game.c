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
	printf("-------------ɨ��-------------\n");
	//��ӡ�к�
	for (i = 0; i <= row; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------ɨ��-------------\n");
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
		printf("��������Ҫ�Ų�λ�õ����꣺>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= 9 && y > 0 && y <= 9)
		{
			if (mine_board[x][y] != '1')
			{
				//���ú�����ͳ�Ƹ�λ����Χ�˸�λ���м�����
				show_board[x][y]= Count_Mine(mine_board, x, y)+'0';
				count++;
				Display_board(show_board, ROW, COL);

			}
			else
			{
				printf("���ź����㱻ը���ˣ�\n");
				break;
			}
		}
		else
		{
			printf("��λ�÷Ƿ������������룡\n");
		}
	}
	
}