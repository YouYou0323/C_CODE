#pragma once
//定义棋盘的行数、列数
#include<stdio.h>
#include<time.h>
#define ROW 3
#define COL 3

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col);
//打印棋盘
void generator_board(char board[ROW][COL], int row, int col);
//玩游戏
//玩家下棋---*
void player(char board[ROW][COL]);
//电脑下棋---#
void computer_player(char board[ROW][COL], int x, int y);
//判断输赢

void game(char board[ROW][COL], int x, int y);