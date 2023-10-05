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
int main()
{
	int input;
	char board[ROW][COL];
	do
	{
		int x = (unsigned int)time(NULL) % ROW;
		int y = ((unsigned int)time(NULL)+1) % COL;
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
			init_board(board, ROW, COL);
			generator_board(board, ROW, COL);
			game(board,x,y);
			break;
		default:
			printf("选择错误，请重新选择！");
			break;
		}
	} while (input);
	return 0;
}