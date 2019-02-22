#define _CRT_SECURE_NO_WARNINGS 1
#include"game_2.h"

void Initboard(char arr[ROWS][COLS], int row, int col,char ch)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row ; i++)
	{
	
		for (j = 0; j < col ; j++)
		{
			arr[i][j] = ch;
		}
	}
}

void Display(char str[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0 ; i <= rows; i++)
	{
		printf("%3d", i );
	}
	printf("\n");
	for (i = 1; i <= rows; i++)
	{
		printf("%3d", i);
		for (j = 1; j <= cols; j++)
		{
			printf("%3c", str[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


void set_mine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 10;
	
	while (count > 0)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int check_mine(char str[ROWS][COLS], int x, int y)
{
	if (str[x][y] == '1')
	{
		return -1;
		
	}
	int  number = 0;
	number = str[x - 1][y - 1] + str[x - 1][y] + str[x - 1][y + 1]
		+ str[x][y - 1] + str[x][y + 1]
		+ str[x + 1][y - 1] + str[x + 1][y] + str[x + 1][y + 1] - 8 * '0';

	return number;
}

void play(char mine[ROWS][COLS], char look[ROWS][COLS], int x, int y)
{

	int ret;
	ret = check_mine(mine, x, y);
	if (ret == 0)
	{
		look[x][y] = ' ';
		if ((x - 1)>0 && (y - 1)>0 && (look[x - 1][y - 1] == '*'))
			play(mine, look, x - 1, y - 1);
		if ((x - 1)>0 && (y)>0 && (look[x - 1][y] == '*'))
			play(mine, look, x - 1, y);
		if ((x - 1)>0 && (y + 1)>0 && (look[x - 1][y + 1] == '*'))
			play(mine, look, x - 1, y + 1);
		if ((x)>0 && (y - 1)>0 && (look[x][y - 1] == '*'))
			play(mine, look, x, y - 1);
		if ((x)>0 && (y + 1)>0 && (look[x][y + 1] == '*'))
			play(mine, look, x, y + 1);
		if ((x + 1)>0 && (y - 1)>0 && (look[x + 1][y - 1] == '*'))
			play(mine, look, x + 1, y - 1);
		if ((x + 1)>0 && (y)>0 && (look[x + 1][y] == '*'))
			play(mine, look, x + 1, y);
		if ((x + 1)>0 && (y + 1)>0 && (look[x + 1][y + 1] == '*'))
			play(mine, look, x + 1, y + 1);
	}
	else		look[x][y] = ret + '0';
}




int jude(char str[ROWS][COLS], int row, int  col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <=  col; j++)
		{
			if (str[i][j] == '*')
				count++;
		}
	}
	if (count == 10)
	{
		return 1;
	}
	else
		return 0;
}

