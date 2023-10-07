#pragma once
#include<stdio.h>
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
//初始化棋盘格中的元素
void Init_board(char board[ROWS][COLS], int row, int col, char c);