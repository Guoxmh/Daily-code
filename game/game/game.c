#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void Initboard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void  Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
			{
				printf("---");
			}
			if (i == col-1)
			{
				break;
			}
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}

	/*for (i = 0; i < row; i++)
	{
		printf("  %c | %c | %c  \n", board[i][0], board[i][1], board[i][2]);
		if (i != row - 1)
			printf(" ---|---|--- \n");
	}*/
	
}


void Computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row; //产生随机值 0-row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'o';
			break;
		}
	
	}
	

}

void Player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("请输入坐标：>\n");
	while (1)
	{
		
		scanf("%d%d", &x, &y);
		if (x  > 0 && x <= row &&y  >0 && y <= col && board[x-1][y-1] == ' ')
		{
			board[x - 1][y - 1] = 'x';
			break;
		}
		else
		printf("请重新输入坐标：>\n");
	}
	
}

int is_full(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char check_win(char board[ROW][COL], int row, int col)
{
	int i;
	//判断电脑和玩家走过后，是否已经连成了三个点的直线；
	//如果有一条三个点连的直线，那么返回构成直线的符号；
	//'0'电脑赢    'x'玩家赢；
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
		{
			return board[i][1];
		}
	}
	for (i = 0; i <col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		return board[1][1];
	}
	else
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
	{
		return board[1][1];
	}
	
	if (is_full(board, row, col))//用一个函数实现判断棋盘是否已满，来判断平局；
	{
		return 'q';//棋盘满了返回'q';
	}
	
	return 0;

}