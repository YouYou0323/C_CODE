#pragma once
#include<stdio.h>
#include<stdlib.h>
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINE_EASY 10
//��ʼ�����̸��е�Ԫ��
void Init_board(char board[ROWS][COLS], int rows, int cols, char c);
//չʾ����
void Display_board(char board[ROWS][COLS], int row, int col);
//������
void Set_Mine(char board[ROWS][COLS], int row, int col);
//�Ų���
void find_mine(char mine_board[ROWS][COLS],char show_board[ROWS][COLS], int row, int col);
//ͳ�Ƹ�������Χ�м�����
int Count_Mine(char mine_board[ROWS][COLS], int x, int y);