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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			init_board(board, ROW, COL);
			generator_board(board, ROW, COL);
			game(board,x,y);
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
	return 0;
}