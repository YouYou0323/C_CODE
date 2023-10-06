#pragma once
//定义棋盘的行数、列数
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col);
//打印棋盘
void Dispaly_board(char board[ROW][COL], int row, int col);
//玩游戏
//玩家下棋---*
void player(char board[ROW][COL], int row, int col);
//电脑下棋---#
void computer_player(char board[ROW][COL], int row, int col);
//判断输赢
//玩家赢---*
//电脑赢---#
//平局---'q'
//游戏继续---'c'
char is_win(char board[ROW][COL], int row, int col);

