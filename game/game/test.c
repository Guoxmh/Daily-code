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
			printf("����Ӯ\n");
			Displayboard(board, ROW, COL);
			break;
		}
		else if (ret == 'q')
		    {
			printf("ƽ��\n");
			Displayboard(board, ROW, COL);
			break;
		    }

	
		Displayboard(board, ROW, COL);
		Player_move(board, ROW, COL);
		ret = check_win(board, ROW, COL);

		if (ret == 'x')
		{
			printf("��Ӯ\n");
			Displayboard(board, ROW, COL);
			break;
		}
		Displayboard(board, ROW, COL);
		
		
		
	}




}

int main()
{
	//������
	//�˵�
	//ѡ��  1/0 
	//��Ϸ
	int input = 0;
	do
	{
	 
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		srand((unsigned int)time(NULL));
		switch (input)
		{
		case 1: game();

			   break;
		case 0:printf("��Ϸ����\n");
			   break;
		default:printf("������ѡ��\n");
		}
	
	} while (input);
	system("pause");
	return 0;
}