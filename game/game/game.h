#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define  ROW  3
#define  COL  3

void Computer_move(char board[ROW][COL], int row,int col);
void Player_move(char board[ROW][COL],int row, int col);
 
char check_win(char borad[ROW][COL], int row,int col );