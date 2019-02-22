#define _CRT_SECURE_NO_WARNINGS 1
#define  ROW 9
#define  COL 9


#define  ROWS 11
#define  COLS 11

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


void Initboard(char arr[ROWS][COLS],int row, int col,char ch);
void Display(char str[ROWS][COLS], int row, int col);


void set_mine(char board[ROWS][COLS], int row, int col);
int check_mine(char str[ROWS][COLS], int x, int y);

 int jude(char str[ROWS][COLS],int row, int  col);

//void play(char mine[ROWS][COLS], char look[ROWS][COLS], int x, int y)