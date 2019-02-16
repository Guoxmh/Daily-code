#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu()
{

	printf("**************************************\n");
	printf("******* 1.play       0.exit **********\n");
	printf("**************************************\n");
}
void game()
{
	char ret = '0';
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		Computer_move(board, ROW, COL);
		ret = check_win(board, ROW, COL);
		if (ret == 'o')
		{
			printf("电脑赢\n");
			Displayboard(board, ROW, COL);
			break;
		}
		else if (ret == 'q')
		    {
			printf("平局\n");
			Displayboard(board, ROW, COL);
			break;
		    }

	
		Displayboard(board, ROW, COL);
		Player_move(board, ROW, COL);
		ret = check_win(board, ROW, COL);

		if (ret == 'x')
		{
			printf("人赢\n");
			Displayboard(board, ROW, COL);
			break;
		}
		Displayboard(board, ROW, COL);
		
		
		
	}




}

int main()
{
	//三子棋
	//菜单
	//选择  1/0 
	//游戏
	int input = 0;
	do
	{
	 
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		srand((unsigned int)time(NULL));
		switch (input)
		{
		case 1: game();

			   break;
		case 0:printf("游戏结束\n");
			   break;
		default:printf("请重新选择：\n");
		}
	
	} while (input);
	system("pause");
	return 0;
}