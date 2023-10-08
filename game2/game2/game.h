#pragma once
#include<stdio.h>
#include<stdlib.h>
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINE_EASY 10
//初始化棋盘格中的元素
void Init_board(char board[ROWS][COLS], int rows, int cols, char c);
//展示棋盘
void Display_board(char board[ROWS][COLS], int row, int col);
//设置雷
void Set_Mine(char board[ROWS][COLS], int row, int col);
//排查雷
void find_mine(char mine_board[ROWS][COLS],char show_board[ROWS][COLS], int row, int col);
//统计该坐标周围有几个雷
int Count_Mine(char mine_board[ROWS][COLS], int x, int y);