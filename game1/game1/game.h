#pragma once
//�������̵�����������
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

//��ʼ������
void init_board(char board[ROW][COL], int row, int col);
//��ӡ����
void Dispaly_board(char board[ROW][COL], int row, int col);
//����Ϸ
//�������---*
void player(char board[ROW][COL], int row, int col);
//��������---#
void computer_player(char board[ROW][COL], int row, int col);
//�ж���Ӯ
//���Ӯ---*
//����Ӯ---#
//ƽ��---'q'
//��Ϸ����---'c'
char is_win(char board[ROW][COL], int row, int col);

