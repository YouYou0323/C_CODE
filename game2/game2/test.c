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
	printf("��Ϸ��ʼ��\n");
	char mine_board[ROWS][COLS];
	char dispaly_board[ROWS][COLS];
	Init_board(mine_board, ROW, COL,'0');
	Init_board(dispaly_board, ROW, COL,'*');
}
int main()
{
	int input = 0;
	do
	{
		meun();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch(input)
		{
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}