#pragma once
//�������̵�����������
#include<stdio.h>
#include<time.h>
#define ROW 3
#define COL 3

//��ʼ������
void init_board(char board[ROW][COL], int row, int col);
//��ӡ����
void generator_board(char board[ROW][COL], int row, int col);
//����Ϸ
//�������---*
void player(char board[ROW][COL]);
//��������---#
void computer_player(char board[ROW][COL], int x, int y);
//�ж���Ӯ

void game(char board[ROW][COL], int x, int y);