#define _CRT_SECURE_NO_WARNINGS 1
//扫雷游戏

#include"game_2.h"
void menu()
{

	printf("**************************************\n");
	printf("******* 1.play       0.exit **********\n");
	printf("**************************************\n");
}
int game()
{
	//定义两个数组
	//初始化数组
	//打印棋盘
	//放雷
	//检查
	//判定
	int ret = 0;
	int x = 0;
	int y = 0;
	int num = 0;
	srand((unsigned int)time(NULL));
	//定义两个数组
	char mine[ROWS][COLS] = { '0' };
	char show[ROWS][COLS] = { '*' };
	//初始化两个数组
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	//利用随机函数，布置雷
    set_mine(mine, ROWS, COLS);
	Display(mine, ROW, COL);
	Display(show, ROW, COL);
	printf("请输入坐标");
	scanf("%d%d", &x, &y);
	//判断是不是雷 如果是雷就利用循环 初始化棋盘，重新设雷，避免第一次凉凉；
	ret = check_mine(mine, x, y);
	while (ret == -1)
	{
		Initboard(mine, ROWS, COLS, '0');
		set_mine(mine, ROWS, COLS);
		ret = check_mine(mine, x, y);
	}
	play(mine, show, x, y);
	Display(mine, ROW, COL);
	Display(show, ROW, COL);
	
	while (1)
	{
		printf("请输入坐标");
		scanf("%d%d", &x, &y);
	
		
		//show[x][y] = check_mine(mine, x, y ) +'0';
		
		ret = check_mine(mine, x, y);
		if (ret != -1)
		{
		/*	ret = check_mine(mine, x, y);*/
			play(mine, show, x, y);
			Display(show, ROW, COL);
		}
		if (ret == -1)
		{
			return 0;
			Display(mine, ROW, COL);
		}
		if (jude(show, ROW, COL) == 1)
			break;
	}
	return 1;

}

int main()
{
	int input = 0;
	menu();
	
	do
	{
		
		printf("请选择：>");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			if (game())
			{
				printf("你赢了\n");
			}
			else
			{

				printf("你凉了\n");
				menu();
			}
			break;
		case 0: printf("退出游戏\n");
			break;
		default:printf("请重新选择\n");
		
		}
	} while (input);

	system("pause");
	return 0;

}